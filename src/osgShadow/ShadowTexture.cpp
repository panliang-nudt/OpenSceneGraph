/* -*-c++-*- OpenSceneGraph - Copyright (C) 1998-2006 Robert Osfield 
 *
 * This library is open source and may be redistributed and/or modified under  
 * the terms of the OpenSceneGraph Public License (OSGPL) version 0.0 or 
 * (at your option) any later version.  The full license is in LICENSE file
 * included with this distribution, and on the openscenegraph.org website.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * OpenSceneGraph Public License for more details.
*/

#include <osgShadow/ShadowTexture>
#include <osgShadow/ShadowedScene>
#include <osg/Notify>
#include <osg/io_utils>

using namespace osgShadow;

class CameraCullCallback : public osg::NodeCallback
{
    public:
    
        CameraCullCallback(ShadowTexture* st):
            _shadowTexture(st)
        {
        }
       
        virtual void operator()(osg::Node*, osg::NodeVisitor* nv)
        {
            unsigned int traversalMask = nv->getTraversalMask();

            nv->setTraversalMask( traversalMask & 
                                  _shadowTexture->getShadowedScene()->getCastsShadowTraversalMask() );
                                  
            _shadowTexture->getShadowedScene()->osg::Group::traverse(*nv);
            
            nv->setTraversalMask( traversalMask );
        }
        
    protected:
    
        ShadowTexture* _shadowTexture;
};

ShadowTexture::ShadowTexture():
    _textureUnit(1)
{
    osg::notify(osg::NOTICE)<<"Warning: osgShadow::ShadowTexture technique is in development."<<std::endl;
}

ShadowTexture::ShadowTexture(const ShadowTexture& copy, const osg::CopyOp& copyop):
    ShadowTechnique(copy,copyop),
    _textureUnit(copy._textureUnit)
{
}

void ShadowTexture::init()
{
    if (!_shadowedScene) return;

    unsigned int tex_width = 512;
    unsigned int tex_height = 512;
    
    _texture = new osg::Texture2D;
    _texture->setTextureSize(tex_width, tex_height);
    _texture->setInternalFormat(GL_RGB);
    _texture->setFilter(osg::Texture2D::MIN_FILTER,osg::Texture2D::LINEAR);
    _texture->setFilter(osg::Texture2D::MAG_FILTER,osg::Texture2D::LINEAR);
    _texture->setWrap(osg::Texture2D::WRAP_S,osg::Texture2D::CLAMP_TO_BORDER);
    _texture->setWrap(osg::Texture2D::WRAP_T,osg::Texture2D::CLAMP_TO_BORDER);
    _texture->setBorderColor(osg::Vec4(1.0f,1.0f,1.0f,1.0f));

    // set up the render to texture camera.
    {
        // create the camera
        _camera = new osg::Camera;

        _camera->setClearColor(osg::Vec4(1.0f,1.0f,1.0f,1.0f));
        
        _camera->setCullCallback(new CameraCullCallback(this));

        // set viewport
        _camera->setViewport(0,0,tex_width,tex_height);

        // set the camera to render before the main camera.
        _camera->setRenderOrder(osg::Camera::PRE_RENDER);

        // tell the camera to use OpenGL frame buffer object where supported.
        //_camera->setRenderTargetImplementation(osg::Camera::FRAME_BUFFER_OBJECT);
        _camera->setRenderTargetImplementation(osg::Camera::SEPERATE_WINDOW);

        // attach the texture and use it as the color buffer.
        _camera->attach(osg::Camera::COLOR_BUFFER, _texture.get());

        _material = new osg::Material;
        _material->setAmbient(osg::Material::FRONT_AND_BACK,osg::Vec4(0.0f,0.0f,0.0f,1.0f));
        _material->setDiffuse(osg::Material::FRONT_AND_BACK,osg::Vec4(0.0f,0.0f,0.0f,1.0f));
        _material->setEmission(osg::Material::FRONT_AND_BACK,osg::Vec4(0.0f,0.0f,0.0f,1.0f));
        _material->setShininess(osg::Material::FRONT_AND_BACK,0.0f);

        osg::StateSet* stateset = _camera->getOrCreateStateSet();
        stateset->setAttribute(_material.get(),osg::StateAttribute::OVERRIDE);
    }
    
    {
        _stateset = new osg::StateSet;        
        _stateset->setTextureAttributeAndModes(_textureUnit,_texture.get(),osg::StateAttribute::ON);
        _stateset->setTextureMode(_textureUnit,GL_TEXTURE_GEN_S,osg::StateAttribute::ON);
        _stateset->setTextureMode(_textureUnit,GL_TEXTURE_GEN_T,osg::StateAttribute::ON);
        _stateset->setTextureMode(_textureUnit,GL_TEXTURE_GEN_R,osg::StateAttribute::ON);
        _stateset->setTextureMode(_textureUnit,GL_TEXTURE_GEN_Q,osg::StateAttribute::ON);
    }
    
    _dirty = false;
}


void ShadowTexture::update(osg::NodeVisitor& nv)
{
    _shadowedScene->osg::Group::traverse(nv);
}

void ShadowTexture::cull(osgUtil::CullVisitor& cv)
{
    // record the traversal mask on entry so we can reapply it later.
    unsigned int traversalMask = cv.getTraversalMask();

    osgUtil::RenderStage* orig_rs = cv.getRenderStage();

    // do traversal of shadow casting scene which does not need to be decorated by the shadow texture
    {
        cv.setTraversalMask( traversalMask & 
                             getShadowedScene()->getCastsShadowTraversalMask() );

        _shadowedScene->osg::Group::traverse(cv);
    }

    // do traversal of shadow recieving scene which does need to be decorated by the shadow texture
    {
        cv.pushStateSet(_stateset.get());
    
        cv.setTraversalMask( traversalMask & 
                             getShadowedScene()->getRecievesShadowTraversalMask() );

        _shadowedScene->osg::Group::traverse(cv);
        
        cv.popStateSet();

    }
    
    // need to compute view frustum for RTT camera.
    // 1) get the light position
    // 2) get the center and extents of the view frustum

    const osg::Light* selectLight = 0;
    osg::Vec4 lightpos;

    osgUtil::PositionalStateContainer::AttrMatrixList& aml = orig_rs->getPositionalStateContainer()->getAttrMatrixList();
    for(osgUtil::PositionalStateContainer::AttrMatrixList::iterator itr = aml.begin();
        itr != aml.end();
        ++itr)
    {
        const osg::Light* light = dynamic_cast<const osg::Light*>(itr->first.get());
        if (light)
        {
            osg::RefMatrix* matrix = itr->second.get();
            if (matrix) lightpos = light->getPosition() * (*matrix);
            else lightpos = light->getPosition();

            selectLight = light;
        }
    }
    
    if (selectLight)
    {
        osg::notify(osg::NOTICE)<<"Selected light "<<lightpos<<std::endl;

        // do RTT camera traversal
        _camera->accept(cv);
        
    }

    // reapply the original traversal mask
    cv.setTraversalMask( traversalMask );
}

void ShadowTexture::cleanSceneGraph()
{
}

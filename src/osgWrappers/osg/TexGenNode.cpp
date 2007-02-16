// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/.svn/text-base/CopyOp.svn-base>
#include <osg/.svn/text-base/NodeVisitor.svn-base>
#include <osg/.svn/text-base/Object.svn-base>
#include <osg/.svn/text-base/TexGenNode.svn-base>
#include <osg/TexGen>
#include <osg/TexGenNode>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osg::TexGenNode::ReferenceFrame)
	I_EnumLabel(osg::TexGenNode::RELATIVE_RF);
	I_EnumLabel(osg::TexGenNode::ABSOLUTE_RF);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::TexGenNode)
	I_BaseType(osg::Group);
	I_BaseType(osg::Group);
	I_Constructor0(____TexGenNode,
	               "",
	               "");
	I_Constructor1(IN, osg::TexGen *, texgen,
	               Properties::NON_EXPLICIT,
	               ____TexGenNode__TexGen_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::TexGenNode &, tgb, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____TexGenNode__C5_TexGenNode_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, setReferenceFrame, IN, osg::TexGenNode::ReferenceFrame, rf,
	          Properties::NON_VIRTUAL,
	          __void__setReferenceFrame__ReferenceFrame,
	          "Set the TexGenNode's ReferenceFrame, either to be relative to its parent reference frame. ",
	          "");
	I_Method0(osg::TexGenNode::ReferenceFrame, getReferenceFrame,
	          Properties::NON_VIRTUAL,
	          __ReferenceFrame__getReferenceFrame,
	          "Ge thte TexGenNode's ReferenceFrame. ",
	          "");
	I_Method1(void, setTextureUnit, IN, unsigned int, textureUnit,
	          Properties::NON_VIRTUAL,
	          __void__setTextureUnit__unsigned_int,
	          "Set the texture unit that this TexGenNode is associated with. ",
	          "");
	I_Method0(unsigned int, getTextureUnit,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getTextureUnit,
	          "",
	          "");
	I_Method1(void, setTexGen, IN, osg::TexGen *, texgen,
	          Properties::NON_VIRTUAL,
	          __void__setTexGen__TexGen_P1,
	          "Set the TexGen. ",
	          "");
	I_Method0(osg::TexGen *, getTexGen,
	          Properties::NON_VIRTUAL,
	          __TexGen_P1__getTexGen,
	          "Get the TexGen. ",
	          "");
	I_Method0(const osg::TexGen *, getTexGen,
	          Properties::NON_VIRTUAL,
	          __C5_TexGen_P1__getTexGen,
	          "Get the const TexGen. ",
	          "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_Constructor0(____TexGenNode,
	               "",
	               "");
	I_Constructor1(IN, osg::TexGen *, texgen,
	               Properties::NON_EXPLICIT,
	               ____TexGenNode__TexGen_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::TexGenNode &, tgb, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____TexGenNode__C5_TexGenNode_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, setReferenceFrame, IN, osg::TexGenNode::ReferenceFrame, rf,
	          Properties::NON_VIRTUAL,
	          __void__setReferenceFrame__ReferenceFrame,
	          "Set the TexGenNode's ReferenceFrame, either to be relative to its parent reference frame. ",
	          "");
	I_Method0(osg::TexGenNode::ReferenceFrame, getReferenceFrame,
	          Properties::NON_VIRTUAL,
	          __ReferenceFrame__getReferenceFrame,
	          "Ge thte TexGenNode's ReferenceFrame. ",
	          "");
	I_Method1(void, setTextureUnit, IN, unsigned int, textureUnit,
	          Properties::NON_VIRTUAL,
	          __void__setTextureUnit__unsigned_int,
	          "Set the texture unit that this TexGenNode is associated with. ",
	          "");
	I_Method0(unsigned int, getTextureUnit,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getTextureUnit,
	          "",
	          "");
	I_Method1(void, setTexGen, IN, osg::TexGen *, texgen,
	          Properties::NON_VIRTUAL,
	          __void__setTexGen__TexGen_P1,
	          "Set the TexGen. ",
	          "");
	I_Method0(osg::TexGen *, getTexGen,
	          Properties::NON_VIRTUAL,
	          __TexGen_P1__getTexGen,
	          "Get the TexGen. ",
	          "");
	I_Method0(const osg::TexGen *, getTexGen,
	          Properties::NON_VIRTUAL,
	          __C5_TexGen_P1__getTexGen,
	          "Get the const TexGen. ",
	          "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_SimpleProperty(osg::TexGenNode::ReferenceFrame, ReferenceFrame, 
	                 __ReferenceFrame__getReferenceFrame, 
	                 __void__setReferenceFrame__ReferenceFrame);
	I_SimpleProperty(osg::TexGen *, TexGen, 
	                 __TexGen_P1__getTexGen, 
	                 __void__setTexGen__TexGen_P1);
	I_SimpleProperty(unsigned int, TextureUnit, 
	                 __unsigned_int__getTextureUnit, 
	                 __void__setTextureUnit__unsigned_int);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osg::TexGenNode::ReferenceFrame)
	I_EnumLabel(osg::TexGenNode::RELATIVE_RF);
	I_EnumLabel(osg::TexGenNode::ABSOLUTE_RF);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osg::TexGenNode)
	I_BaseType(osg::Group);
	I_BaseType(osg::Group);
	I_Constructor0(____TexGenNode,
	               "",
	               "");
	I_Constructor1(IN, osg::TexGen *, texgen,
	               Properties::NON_EXPLICIT,
	               ____TexGenNode__TexGen_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::TexGenNode &, tgb, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____TexGenNode__C5_TexGenNode_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, setReferenceFrame, IN, osg::TexGenNode::ReferenceFrame, rf,
	          Properties::NON_VIRTUAL,
	          __void__setReferenceFrame__ReferenceFrame,
	          "Set the TexGenNode's ReferenceFrame, either to be relative to its parent reference frame. ",
	          "");
	I_Method0(osg::TexGenNode::ReferenceFrame, getReferenceFrame,
	          Properties::NON_VIRTUAL,
	          __ReferenceFrame__getReferenceFrame,
	          "Ge thte TexGenNode's ReferenceFrame. ",
	          "");
	I_Method1(void, setTextureUnit, IN, unsigned int, textureUnit,
	          Properties::NON_VIRTUAL,
	          __void__setTextureUnit__unsigned_int,
	          "Set the texture unit that this TexGenNode is associated with. ",
	          "");
	I_Method0(unsigned int, getTextureUnit,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getTextureUnit,
	          "",
	          "");
	I_Method1(void, setTexGen, IN, osg::TexGen *, texgen,
	          Properties::NON_VIRTUAL,
	          __void__setTexGen__TexGen_P1,
	          "Set the TexGen. ",
	          "");
	I_Method0(osg::TexGen *, getTexGen,
	          Properties::NON_VIRTUAL,
	          __TexGen_P1__getTexGen,
	          "Get the TexGen. ",
	          "");
	I_Method0(const osg::TexGen *, getTexGen,
	          Properties::NON_VIRTUAL,
	          __C5_TexGen_P1__getTexGen,
	          "Get the const TexGen. ",
	          "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_Constructor0(____TexGenNode,
	               "",
	               "");
	I_Constructor1(IN, osg::TexGen *, texgen,
	               Properties::NON_EXPLICIT,
	               ____TexGenNode__TexGen_P1,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osg::TexGenNode &, tgb, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____TexGenNode__C5_TexGenNode_R1__C5_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "",
	          "");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, copyop,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "",
	          "");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "",
	          "");
	I_Method1(void, accept, IN, osg::NodeVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osg_NodeVisitor_R1,
	          "",
	          "");
	I_Method1(void, setReferenceFrame, IN, osg::TexGenNode::ReferenceFrame, rf,
	          Properties::NON_VIRTUAL,
	          __void__setReferenceFrame__ReferenceFrame,
	          "Set the TexGenNode's ReferenceFrame, either to be relative to its parent reference frame. ",
	          "");
	I_Method0(osg::TexGenNode::ReferenceFrame, getReferenceFrame,
	          Properties::NON_VIRTUAL,
	          __ReferenceFrame__getReferenceFrame,
	          "Ge thte TexGenNode's ReferenceFrame. ",
	          "");
	I_Method1(void, setTextureUnit, IN, unsigned int, textureUnit,
	          Properties::NON_VIRTUAL,
	          __void__setTextureUnit__unsigned_int,
	          "Set the texture unit that this TexGenNode is associated with. ",
	          "");
	I_Method0(unsigned int, getTextureUnit,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getTextureUnit,
	          "",
	          "");
	I_Method1(void, setTexGen, IN, osg::TexGen *, texgen,
	          Properties::NON_VIRTUAL,
	          __void__setTexGen__TexGen_P1,
	          "Set the TexGen. ",
	          "");
	I_Method0(osg::TexGen *, getTexGen,
	          Properties::NON_VIRTUAL,
	          __TexGen_P1__getTexGen,
	          "Get the TexGen. ",
	          "");
	I_Method0(const osg::TexGen *, getTexGen,
	          Properties::NON_VIRTUAL,
	          __C5_TexGen_P1__getTexGen,
	          "Get the const TexGen. ",
	          "");
	I_Method1(void, setThreadSafeRefUnref, IN, bool, threadSafe,
	          Properties::VIRTUAL,
	          __void__setThreadSafeRefUnref__bool,
	          "Set whether to use a mutex to ensure ref() and unref() are thread safe. ",
	          "");
	I_SimpleProperty(osg::TexGenNode::ReferenceFrame, ReferenceFrame, 
	                 __ReferenceFrame__getReferenceFrame, 
	                 __void__setReferenceFrame__ReferenceFrame);
	I_SimpleProperty(osg::TexGen *, TexGen, 
	                 __TexGen_P1__getTexGen, 
	                 __void__setTexGen__TexGen_P1);
	I_SimpleProperty(unsigned int, TextureUnit, 
	                 __unsigned_int__getTextureUnit, 
	                 __void__setTextureUnit__unsigned_int);
	I_SimpleProperty(bool, ThreadSafeRefUnref, 
	                 0, 
	                 __void__setThreadSafeRefUnref__bool);
END_REFLECTOR


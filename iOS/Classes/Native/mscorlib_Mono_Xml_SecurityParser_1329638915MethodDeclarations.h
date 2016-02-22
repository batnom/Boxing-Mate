#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Xml.SecurityParser
struct SecurityParser_t_1329638915_0;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1503839097_0;
// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t2041912417_0;
// Mono.Xml.SmallXmlParser/IAttrList
struct IAttrList_t1821518838_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.SecurityParser::.ctor()
extern "C"  void SecurityParser__ctor_m_1817105673_0 (SecurityParser_t_1329638915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::LoadXml(System.String)
extern "C"  void SecurityParser_LoadXml_m_1188993708_0 (SecurityParser_t_1329638915_0 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement Mono.Xml.SecurityParser::ToXml()
extern "C"  SecurityElement_t1503839097_0 * SecurityParser_ToXml_m477609901_0 (SecurityParser_t_1329638915_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartParsing(Mono.Xml.SmallXmlParser)
extern "C"  void SecurityParser_OnStartParsing_m_1408235907_0 (SecurityParser_t_1329638915_0 * __this, SmallXmlParser_t2041912417_0 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnProcessingInstruction(System.String,System.String)
extern "C"  void SecurityParser_OnProcessingInstruction_m_1277540871_0 (SecurityParser_t_1329638915_0 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnIgnorableWhitespace(System.String)
extern "C"  void SecurityParser_OnIgnorableWhitespace_m_1204076120_0 (SecurityParser_t_1329638915_0 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnStartElement(System.String,Mono.Xml.SmallXmlParser/IAttrList)
extern "C"  void SecurityParser_OnStartElement_m_1197146434_0 (SecurityParser_t_1329638915_0 * __this, String_t* ___name, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndElement(System.String)
extern "C"  void SecurityParser_OnEndElement_m_1385026919_0 (SecurityParser_t_1329638915_0 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnChars(System.String)
extern "C"  void SecurityParser_OnChars_m_1943121545_0 (SecurityParser_t_1329638915_0 * __this, String_t* ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SecurityParser::OnEndParsing(Mono.Xml.SmallXmlParser)
extern "C"  void SecurityParser_OnEndParsing_m565346250_0 (SecurityParser_t_1329638915_0 * __this, SmallXmlParser_t2041912417_0 * ___parser, const MethodInfo* method) IL2CPP_METHOD_ATTR;

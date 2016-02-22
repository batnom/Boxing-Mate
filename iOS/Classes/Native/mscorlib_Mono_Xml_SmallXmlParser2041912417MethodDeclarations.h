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

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t2041912417_0;
// System.Exception
struct Exception_t_116002698_0;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t_29614003_0;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t1169807614_0;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t1994107787_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Xml.SmallXmlParser::.ctor()
extern "C"  void SmallXmlParser__ctor_m1034349227_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
extern "C"  Exception_t_116002698_0 * SmallXmlParser_Error_m1832158746_0 (SmallXmlParser_t2041912417_0 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
extern "C"  Exception_t_116002698_0 * SmallXmlParser_UnexpectedEndError_m_927240706_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
extern "C"  bool SmallXmlParser_IsNameChar_m1561000202_0 (SmallXmlParser_t2041912417_0 * __this, uint16_t ___c, bool ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
extern "C"  bool SmallXmlParser_IsWhitespace_m_1407212321_0 (SmallXmlParser_t2041912417_0 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
extern "C"  void SmallXmlParser_SkipWhitespaces_m_1371732898_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
extern "C"  void SmallXmlParser_HandleWhitespaces_m_1792204671_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
extern "C"  void SmallXmlParser_SkipWhitespaces_m511753_0 (SmallXmlParser_t2041912417_0 * __this, bool ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
extern "C"  int32_t SmallXmlParser_Peek_m_1480126486_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
extern "C"  int32_t SmallXmlParser_Read_m_1882636429_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
extern "C"  void SmallXmlParser_Expect_m_806684415_0 (SmallXmlParser_t2041912417_0 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
extern "C"  String_t* SmallXmlParser_ReadUntil_m1879223332_0 (SmallXmlParser_t2041912417_0 * __this, uint16_t ___until, bool ___handleReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
extern "C"  String_t* SmallXmlParser_ReadName_m80205839_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
extern "C"  void SmallXmlParser_Parse_m1986939549_0 (SmallXmlParser_t2041912417_0 * __this, TextReader_t_29614003_0 * ___input, Object_t * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
extern "C"  void SmallXmlParser_Cleanup_m_749854273_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
extern "C"  void SmallXmlParser_ReadContent_m_256802312_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
extern "C"  void SmallXmlParser_HandleBufferedContent_m_897870543_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
extern "C"  void SmallXmlParser_ReadCharacters_m1966365555_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
extern "C"  void SmallXmlParser_ReadReference_m_119990092_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
extern "C"  int32_t SmallXmlParser_ReadCharacterReference_m_793902735_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
extern "C"  void SmallXmlParser_ReadAttribute_m_1539955152_0 (SmallXmlParser_t2041912417_0 * __this, AttrListImpl_t1994107787_0 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
extern "C"  void SmallXmlParser_ReadCDATASection_m_1736660189_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
extern "C"  void SmallXmlParser_ReadComment_m1117342068_0 (SmallXmlParser_t2041912417_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

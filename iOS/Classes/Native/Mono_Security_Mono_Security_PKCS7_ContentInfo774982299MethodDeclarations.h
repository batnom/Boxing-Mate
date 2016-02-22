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

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t774982299_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// Mono.Security.ASN1
struct ASN1_t_79756206_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C"  void ContentInfo__ctor_m_567224379_0 (ContentInfo_t774982299_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C"  void ContentInfo__ctor_m_715162033_0 (ContentInfo_t774982299_0 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C"  void ContentInfo__ctor_m_1449627430_0 (ContentInfo_t774982299_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C"  void ContentInfo__ctor_m_423195615_0 (ContentInfo_t774982299_0 * __this, ASN1_t_79756206_0 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_ASN1()
extern "C"  ASN1_t_79756206_0 * ContentInfo_get_ASN1_m1697727120_0 (ContentInfo_t774982299_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C"  ASN1_t_79756206_0 * ContentInfo_get_Content_m1802070908_0 (ContentInfo_t774982299_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C"  void ContentInfo_set_Content_m_651632935_0 (ContentInfo_t774982299_0 * __this, ASN1_t_79756206_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C"  String_t* ContentInfo_get_ContentType_m_1310646496_0 (ContentInfo_t774982299_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_ContentType(System.String)
extern "C"  void ContentInfo_set_ContentType_m1242338355_0 (ContentInfo_t774982299_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
extern "C"  ASN1_t_79756206_0 * ContentInfo_GetASN1_m1560623629_0 (ContentInfo_t774982299_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

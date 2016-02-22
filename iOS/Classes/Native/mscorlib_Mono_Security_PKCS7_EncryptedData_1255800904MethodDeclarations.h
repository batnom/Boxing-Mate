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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t_1255800904_0;
// Mono.Security.ASN1
struct ASN1_t_1085908376_0;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t235744847_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m_1166428830_0 (EncryptedData_t_1255800904_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C"  void EncryptedData__ctor_m_434466738_0 (EncryptedData_t_1255800904_0 * __this, ASN1_t_1085908376_0 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C"  ContentInfo_t235744847_0 * EncryptedData_get_EncryptionAlgorithm_m1301274243_0 (EncryptedData_t_1255800904_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C"  ByteU5BU5D_t1362406281_0* EncryptedData_get_EncryptedContent_m_1562851720_0 (EncryptedData_t_1255800904_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

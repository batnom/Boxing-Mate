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
struct EncryptedData_t1344300158_0;
// Mono.Security.ASN1
struct ASN1_t_79756206_0;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t774982299_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m_460374652_0 (EncryptedData_t1344300158_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C"  void EncryptedData__ctor_m_428048712_0 (EncryptedData_t1344300158_0 * __this, ASN1_t_79756206_0 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C"  ContentInfo_t774982299_0 * EncryptedData_get_EncryptionAlgorithm_m_709146745_0 (EncryptedData_t1344300158_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C"  ByteU5BU5D_t1362406281_0* EncryptedData_get_EncryptedContent_m_462084714_0 (EncryptedData_t1344300158_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

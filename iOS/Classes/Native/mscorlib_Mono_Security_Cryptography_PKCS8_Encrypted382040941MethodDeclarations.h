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

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct EncryptedPrivateKeyInfo_t382040941_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor()
extern "C"  void EncryptedPrivateKeyInfo__ctor_m_330425333_0 (EncryptedPrivateKeyInfo_t382040941_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void EncryptedPrivateKeyInfo__ctor_m832236482_0 (EncryptedPrivateKeyInfo_t382040941_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Algorithm()
extern "C"  String_t* EncryptedPrivateKeyInfo_get_Algorithm_m_1515770354_0 (EncryptedPrivateKeyInfo_t382040941_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_EncryptedData()
extern "C"  ByteU5BU5D_t1362406281_0* EncryptedPrivateKeyInfo_get_EncryptedData_m345125768_0 (EncryptedPrivateKeyInfo_t382040941_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_Salt()
extern "C"  ByteU5BU5D_t1362406281_0* EncryptedPrivateKeyInfo_get_Salt_m_1560612902_0 (EncryptedPrivateKeyInfo_t382040941_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::get_IterationCount()
extern "C"  int32_t EncryptedPrivateKeyInfo_get_IterationCount_m1505875216_0 (EncryptedPrivateKeyInfo_t382040941_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::Decode(System.Byte[])
extern "C"  void EncryptedPrivateKeyInfo_Decode_m1824098820_0 (EncryptedPrivateKeyInfo_t382040941_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

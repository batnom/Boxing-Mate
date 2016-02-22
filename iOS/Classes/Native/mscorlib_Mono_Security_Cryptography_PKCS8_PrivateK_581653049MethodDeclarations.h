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

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t_581653049_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.RSA
struct RSA_t_1501125859_0;
// System.Security.Cryptography.DSA
struct DSA_t_1501126317_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1760562389.h"

// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor()
extern "C"  void PrivateKeyInfo__ctor_m_446274775_0 (PrivateKeyInfo_t_581653049_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::.ctor(System.Byte[])
extern "C"  void PrivateKeyInfo__ctor_m_190857582_0 (PrivateKeyInfo_t_581653049_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::get_PrivateKey()
extern "C"  ByteU5BU5D_t1362406281_0* PrivateKeyInfo_get_PrivateKey_m_813875304_0 (PrivateKeyInfo_t_581653049_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Decode(System.Byte[])
extern "C"  void PrivateKeyInfo_Decode_m_680226232_0 (PrivateKeyInfo_t_581653049_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::RemoveLeadingZero(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* PrivateKeyInfo_RemoveLeadingZero_m1452692206_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___bigInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::Normalize(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* PrivateKeyInfo_Normalize_m_335371362_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___bigInt, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeRSA(System.Byte[])
extern "C"  RSA_t_1501125859_0 * PrivateKeyInfo_DecodeRSA_m1427048948_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___keypair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::DecodeDSA(System.Byte[],System.Security.Cryptography.DSAParameters)
extern "C"  DSA_t_1501126317_0 * PrivateKeyInfo_DecodeDSA_m_1577054035_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___privateKey, DSAParameters_t1760562389_0  ___dsaParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t_1901935946_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;
// Mono.Math.BigInteger
struct BigInteger_t361548807_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParamete_1794859837.h"

// System.Void Mono.Security.Cryptography.RSAManaged::.ctor()
extern "C"  void RSAManaged__ctor_m1370411656_0 (RSAManaged_t_1901935946_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::.ctor(System.Int32)
extern "C"  void RSAManaged__ctor_m1680944437_0 (RSAManaged_t_1901935946_0 * __this, int32_t ___keySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Finalize()
extern "C"  void RSAManaged_Finalize_m_803167456_0 (RSAManaged_t_1901935946_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::GenerateKeyPair()
extern "C"  void RSAManaged_GenerateKeyPair_m1213111262_0 (RSAManaged_t_1901935946_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Cryptography.RSAManaged::get_KeySize()
extern "C"  int32_t RSAManaged_get_KeySize_m_816143559_0 (RSAManaged_t_1901935946_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.RSAManaged::get_PublicOnly()
extern "C"  bool RSAManaged_get_PublicOnly_m343941928_0 (RSAManaged_t_1901935946_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::DecryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* RSAManaged_DecryptValue_m1225349489_0 (RSAManaged_t_1901935946_0 * __this, ByteU5BU5D_t1362406281_0* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::EncryptValue(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* RSAManaged_EncryptValue_m1847230963_0 (RSAManaged_t_1901935946_0 * __this, ByteU5BU5D_t1362406281_0* ___rgb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Cryptography.RSAManaged::ExportParameters(System.Boolean)
extern "C"  RSAParameters_t_1794859837_0  RSAManaged_ExportParameters_m_1423628417_0 (RSAManaged_t_1901935946_0 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void RSAManaged_ImportParameters_m_1234011412_0 (RSAManaged_t_1901935946_0 * __this, RSAParameters_t_1794859837_0  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RSAManaged::Dispose(System.Boolean)
extern "C"  void RSAManaged_Dispose_m160261748_0 (RSAManaged_t_1901935946_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.RSAManaged::ToXmlString(System.Boolean)
extern "C"  String_t* RSAManaged_ToXmlString_m_1688743819_0 (RSAManaged_t_1901935946_0 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RSAManaged::GetPaddedValue(Mono.Math.BigInteger,System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* RSAManaged_GetPaddedValue_m_1322825627_0 (RSAManaged_t_1901935946_0 * __this, BigInteger_t361548807_0 * ___value, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;

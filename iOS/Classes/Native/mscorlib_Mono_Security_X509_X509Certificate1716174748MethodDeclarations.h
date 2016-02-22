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

// Mono.Security.X509.X509Certificate
struct X509Certificate_t1716174748_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.DSA
struct DSA_t_1501126317_0;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t_1085908376_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m1606765153_0 (X509Certificate_t1716174748_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m1192988565_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m732579562_0 (X509Certificate_t1716174748_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_GetUnsignedBigInteger_m_803613754_0 (X509Certificate_t1716174748_0 * __this, ByteU5BU5D_t1362406281_0* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t_1501126317_0 * X509Certificate_get_DSA_m_335071701_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m_1360731466_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_KeyAlgorithmParameters_m_3006323_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_PublicKey_m714501701_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_RawData_m_1294912221_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m_643594755_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t_1242318096_0  X509Certificate_get_ValidFrom_m941763238_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t_1242318096_0  X509Certificate_get_ValidUntil_m_1703337072_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t_1085908376_0 * X509Certificate_GetIssuerName_m624965627_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t_1085908376_0 * X509Certificate_GetSubjectName_m2120755276_0 (X509Certificate_t1716174748_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m_406836812_0 (X509Certificate_t1716174748_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_PEM_m227334751_0 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

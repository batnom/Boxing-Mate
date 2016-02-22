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
struct X509Certificate_t1541895718_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.DSA
struct DSA_t_1501126317_0;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t_2131653600_0;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t_1501125859_0;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;
// Mono.Security.ASN1
struct ASN1_t_79756206_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon2060733842.h"

// System.Void Mono.Security.X509.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m2143220811_0 (X509Certificate_t1541895718_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::.cctor()
extern "C"  void X509Certificate__cctor_m_1310898403_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::Parse(System.Byte[])
extern "C"  void X509Certificate_Parse_m1764345628_0 (X509Certificate_t1541895718_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::GetUnsignedBigInteger(System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_GetUnsignedBigInteger_m2102946512_0 (X509Certificate_t1541895718_0 * __this, ByteU5BU5D_t1362406281_0* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::get_DSA()
extern "C"  DSA_t_1501126317_0 * X509Certificate_get_DSA_m_1842572511_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_DSA(System.Security.Cryptography.DSA)
extern "C"  void X509Certificate_set_DSA_m1358261980_0 (X509Certificate_t1541895718_0 * __this, DSA_t_1501126317_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::get_Extensions()
extern "C"  X509ExtensionCollection_t_2131653600_0 * X509Certificate_get_Extensions_m1784966408_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Hash()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_Hash_m_1824600951_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_IssuerName()
extern "C"  String_t* X509Certificate_get_IssuerName_m_386973152_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_KeyAlgorithm()
extern "C"  String_t* X509Certificate_get_KeyAlgorithm_m454927092_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_KeyAlgorithmParameters()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_KeyAlgorithmParameters_m1701675565_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_KeyAlgorithmParameters(System.Byte[])
extern "C"  void X509Certificate_set_KeyAlgorithmParameters_m17826364_0 (X509Certificate_t1541895718_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_PublicKey()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_PublicKey_m933487733_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA()
extern "C"  RSA_t_1501125859_0 * X509Certificate_get_RSA_m1167362983_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::set_RSA(System.Security.Cryptography.RSA)
extern "C"  void X509Certificate_set_RSA_m1038416652_0 (X509Certificate_t1541895718_0 * __this, RSA_t_1501125859_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_RawData()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_RawData_m1262574599_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_SerialNumber()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_SerialNumber_m_1785816376_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::get_Signature()
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_get_Signature_m_630933929_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SignatureAlgorithm()
extern "C"  String_t* X509Certificate_get_SignatureAlgorithm_m2111916881_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Certificate::get_SubjectName()
extern "C"  String_t* X509Certificate_get_SubjectName_m_761261811_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidFrom()
extern "C"  DateTime_t_1242318096_0  X509Certificate_get_ValidFrom_m1740754472_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Certificate::get_ValidUntil()
extern "C"  DateTime_t_1242318096_0  X509Certificate_get_ValidUntil_m_257189850_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509Certificate::get_Version()
extern "C"  int32_t X509Certificate_get_Version_m_1262982139_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsCurrent()
extern "C"  bool X509Certificate_get_IsCurrent_m424898544_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::WasCurrent(System.DateTime)
extern "C"  bool X509Certificate_WasCurrent_m_662917880_0 (X509Certificate_t1541895718_0 * __this, DateTime_t_1242318096_0  ___instant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Certificate_VerifySignature_m_274243890_0 (X509Certificate_t1541895718_0 * __this, DSA_t_1501126317_0 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Certificate_VerifySignature_m_274243556_0 (X509Certificate_t1541895718_0 * __this, RSA_t_1501125859_0 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Certificate_VerifySignature_m_1488631291_0 (X509Certificate_t1541895718_0 * __this, AsymmetricAlgorithm_t_1233528832_0 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Certificate::get_IsSelfSigned()
extern "C"  bool X509Certificate_get_IsSelfSigned_m_434609465_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetIssuerName()
extern "C"  ASN1_t_79756206_0 * X509Certificate_GetIssuerName_m_2143371151_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::GetSubjectName()
extern "C"  ASN1_t_79756206_0 * X509Certificate_GetSubjectName_m1189079906_0 (X509Certificate_t1541895718_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Certificate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void X509Certificate_GetObjectData_m2064274370_0 (X509Certificate_t1541895718_0 * __this, SerializationInfo_t_2018490193_0 * ___info, StreamingContext_t2060733842_0  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Certificate::PEM(System.String,System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* X509Certificate_PEM_m49854707_0 (Object_t * __this /* static, unused */, String_t* ___type, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

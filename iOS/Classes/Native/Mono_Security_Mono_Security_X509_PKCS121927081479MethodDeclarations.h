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

// Mono.Security.X509.PKCS12
struct PKCS12_t1927081479_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1756554202_0;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t_940353368_0;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t_1909769311_0;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1344300158_0;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t616409827_0;
// Mono.Security.ASN1
struct ASN1_t_79756206_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1541895718_0;
// System.Collections.IDictionary
struct IDictionary_t_2050639113_0;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t774982299_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameter1760562389.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C"  void PKCS12__ctor_m766227211_0 (PKCS12_t1927081479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C"  void PKCS12__ctor_m2046019834_0 (PKCS12_t1927081479_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C"  void PKCS12__ctor_m_905727578_0 (PKCS12_t1927081479_0 * __this, ByteU5BU5D_t1362406281_0* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C"  void PKCS12__cctor_m_982207958_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C"  void PKCS12_Decode_m_1751850344_0 (PKCS12_t1927081479_0 * __this, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C"  void PKCS12_Finalize_m_715180275_0 (PKCS12_t1927081479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C"  void PKCS12_set_Password_m64359107_0 (PKCS12_t1927081479_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C"  int32_t PKCS12_get_IterationCount_m_646106184_0 (PKCS12_t1927081479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C"  void PKCS12_set_IterationCount_m_1826303505_0 (PKCS12_t1927081479_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList Mono.Security.X509.PKCS12::get_Keys()
extern "C"  ArrayList_t2138871437_0 * PKCS12_get_Keys_m288413492_0 (PKCS12_t1927081479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C"  X509CertificateCollection_t1756554202_0 * PKCS12_get_Certificates_m_1974904347_0 (PKCS12_t1927081479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C"  RandomNumberGenerator_t_940353368_0 * PKCS12_get_RNG_m_331438256_0 (PKCS12_t1927081479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C"  bool PKCS12_Compare_m_1765859474_0 (PKCS12_t1927081479_0 * __this, ByteU5BU5D_t1362406281_0* ___expected, ByteU5BU5D_t1362406281_0* ___actual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C"  SymmetricAlgorithm_t_1909769311_0 * PKCS12_GetSymmetricAlgorithm_m_1098675611_0 (PKCS12_t1927081479_0 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1362406281_0* ___salt, int32_t ___iterationCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* PKCS12_Decrypt_m_1587634951_0 (PKCS12_t1927081479_0 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1362406281_0* ___salt, int32_t ___iterationCount, ByteU5BU5D_t1362406281_0* ___encryptedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C"  ByteU5BU5D_t1362406281_0* PKCS12_Decrypt_m1557069392_0 (PKCS12_t1927081479_0 * __this, EncryptedData_t1344300158_0 * ___ed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* PKCS12_Encrypt_m_2140558665_0 (PKCS12_t1927081479_0 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1362406281_0* ___salt, int32_t ___iterationCount, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C"  DSAParameters_t1760562389_0  PKCS12_GetExistingParameters_m_762137047_0 (PKCS12_t1927081479_0 * __this, bool* ___found, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C"  void PKCS12_AddPrivateKey_m_78801163_0 (PKCS12_t1927081479_0 * __this, PrivateKeyInfo_t616409827_0 * ___pki, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C"  void PKCS12_ReadSafeBag_m1100201494_0 (PKCS12_t1927081479_0 * __this, ASN1_t_79756206_0 * ___safeBag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  ASN1_t_79756206_0 * PKCS12_CertificateSafeBag_m_1022769489_0 (PKCS12_t1927081479_0 * __this, X509Certificate_t1541895718_0 * ___x509, Object_t * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* PKCS12_MAC_m_1066133480_0 (PKCS12_t1927081479_0 * __this, ByteU5BU5D_t1362406281_0* ___password, ByteU5BU5D_t1362406281_0* ___salt, int32_t ___iterations, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern "C"  ByteU5BU5D_t1362406281_0* PKCS12_GetBytes_m_1410295264_0 (PKCS12_t1927081479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern "C"  ContentInfo_t774982299_0 * PKCS12_EncryptedContentInfo_m938119256_0 (PKCS12_t1927081479_0 * __this, ASN1_t_79756206_0 * ___safeBags, String_t* ___algorithmOid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_AddCertificate_m_657446559_0 (PKCS12_t1927081479_0 * __this, X509Certificate_t1541895718_0 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_AddCertificate_m_1494511936_0 (PKCS12_t1927081479_0 * __this, X509Certificate_t1541895718_0 * ___cert, Object_t * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C"  void PKCS12_RemoveCertificate_m228884064_0 (PKCS12_t1927081479_0 * __this, X509Certificate_t1541895718_0 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C"  void PKCS12_RemoveCertificate_m1352841763_0 (PKCS12_t1927081479_0 * __this, X509Certificate_t1541895718_0 * ___cert, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
extern "C"  Object_t * PKCS12_Clone_m1135152221_0 (PKCS12_t1927081479_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C"  int32_t PKCS12_get_MaximumPasswordLength_m1673883007_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

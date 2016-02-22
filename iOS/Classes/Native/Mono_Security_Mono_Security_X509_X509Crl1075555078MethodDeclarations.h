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

// Mono.Security.X509.X509Crl
struct X509Crl_t1075555078_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t_2131653600_0;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t691101242_0;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1541895718_0;
// System.Security.Cryptography.DSA
struct DSA_t_1501126317_0;
// System.Security.Cryptography.RSA
struct RSA_t_1501125859_0;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime_1242318096.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C"  void X509Crl__ctor_m_1825559067_0 (X509Crl_t1075555078_0 * __this, ByteU5BU5D_t1362406281_0* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C"  void X509Crl_Parse_m_1007104768_0 (X509Crl_t1075555078_0 * __this, ByteU5BU5D_t1362406281_0* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C"  X509ExtensionCollection_t_2131653600_0 * X509Crl_get_Extensions_m_239146196_0 (X509Crl_t1075555078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C"  ByteU5BU5D_t1362406281_0* X509Crl_get_Hash_m_677569867_0 (X509Crl_t1075555078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C"  String_t* X509Crl_get_IssuerName_m_286009380_0 (X509Crl_t1075555078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C"  DateTime_t_1242318096_0  X509Crl_get_NextUpdate_m732409688_0 (X509Crl_t1075555078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C"  bool X509Crl_Compare_m_2065325663_0 (X509Crl_t1075555078_0 * __this, ByteU5BU5D_t1362406281_0* ___array1, ByteU5BU5D_t1362406281_0* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C"  X509CrlEntry_t691101242_0 * X509Crl_GetCrlEntry_m1677459928_0 (X509Crl_t1075555078_0 * __this, X509Certificate_t1541895718_0 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C"  X509CrlEntry_t691101242_0 * X509Crl_GetCrlEntry_m550904265_0 (X509Crl_t1075555078_0 * __this, ByteU5BU5D_t1362406281_0* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C"  String_t* X509Crl_GetHashName_m183504634_0 (X509Crl_t1075555078_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C"  bool X509Crl_VerifySignature_m25190802_0 (X509Crl_t1075555078_0 * __this, DSA_t_1501126317_0 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C"  bool X509Crl_VerifySignature_m25189948_0 (X509Crl_t1075555078_0 * __this, RSA_t_1501125859_0 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  bool X509Crl_VerifySignature_m833718649_0 (X509Crl_t1075555078_0 * __this, AsymmetricAlgorithm_t_1233528832_0 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;

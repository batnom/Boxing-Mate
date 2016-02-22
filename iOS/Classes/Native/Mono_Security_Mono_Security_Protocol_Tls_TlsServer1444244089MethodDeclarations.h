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

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1444244089_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1756554202_0;
// System.Security.Cryptography.RSA
struct RSA_t_1501125859_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t905358417_0;
// System.String[]
struct StringU5BU5D_t_1137506664_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParamete_1794859837.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C"  void TlsServerSettings__ctor_m1125867683_0 (TlsServerSettings_t1444244089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C"  bool TlsServerSettings_get_ServerKeyExchange_m1147981947_0 (TlsServerSettings_t1444244089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C"  void TlsServerSettings_set_ServerKeyExchange_m_95187886_0 (TlsServerSettings_t1444244089_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C"  X509CertificateCollection_t1756554202_0 * TlsServerSettings_get_Certificates_m_993631097_0 (TlsServerSettings_t1444244089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C"  void TlsServerSettings_set_Certificates_m67827830_0 (TlsServerSettings_t1444244089_0 * __this, X509CertificateCollection_t1756554202_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C"  RSA_t_1501125859_0 * TlsServerSettings_get_CertificateRSA_m1899388839_0 (TlsServerSettings_t1444244089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C"  RSAParameters_t_1794859837_0  TlsServerSettings_get_RsaParameters_m1327440044_0 (TlsServerSettings_t1444244089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C"  void TlsServerSettings_set_RsaParameters_m_1129693847_0 (TlsServerSettings_t1444244089_0 * __this, RSAParameters_t_1794859837_0  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C"  void TlsServerSettings_set_SignedParams_m1826385315_0 (TlsServerSettings_t1444244089_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C"  bool TlsServerSettings_get_CertificateRequest_m1204669838_0 (TlsServerSettings_t1444244089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C"  void TlsServerSettings_set_CertificateRequest_m_875447403_0 (TlsServerSettings_t1444244089_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C"  void TlsServerSettings_set_CertificateTypes_m264196087_0 (TlsServerSettings_t1444244089_0 * __this, ClientCertificateTypeU5BU5D_t905358417_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C"  void TlsServerSettings_set_DistinguisedNames_m_2004917652_0 (TlsServerSettings_t1444244089_0 * __this, StringU5BU5D_t_1137506664_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern "C"  void TlsServerSettings_UpdateCertificateRSA_m2025051563_0 (TlsServerSettings_t1444244089_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

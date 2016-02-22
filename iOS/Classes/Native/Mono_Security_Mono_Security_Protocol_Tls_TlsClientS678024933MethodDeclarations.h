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

// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t678024933_0;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1761069182_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t_1468785580_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
extern "C"  void TlsClientSettings__ctor_m_1228980209_0 (TlsClientSettings_t678024933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
extern "C"  String_t* TlsClientSettings_get_TargetHost_m_1477332676_0 (TlsClientSettings_t678024933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
extern "C"  void TlsClientSettings_set_TargetHost_m_873700383_0 (TlsClientSettings_t678024933_0 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
extern "C"  X509CertificateCollection_t1761069182_0 * TlsClientSettings_get_Certificates_m_1785801649_0 (TlsClientSettings_t678024933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  void TlsClientSettings_set_Certificates_m1110280480_0 (TlsClientSettings_t678024933_0 * __this, X509CertificateCollection_t1761069182_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
extern "C"  X509Certificate_t_1468785580_0 * TlsClientSettings_get_ClientCertificate_m89435195_0 (TlsClientSettings_t678024933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void TlsClientSettings_set_ClientCertificate_m442292512_0 (TlsClientSettings_t678024933_0 * __this, X509Certificate_t_1468785580_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
extern "C"  void TlsClientSettings_UpdateCertificateRSA_m1828531911_0 (TlsClientSettings_t678024933_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

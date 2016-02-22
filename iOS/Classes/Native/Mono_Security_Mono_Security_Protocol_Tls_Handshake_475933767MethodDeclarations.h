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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t475933767_0;
// Mono.Security.Protocol.Tls.Context
struct Context_t417548721_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t_1468785580_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C"  void TlsClientCertificate__ctor_m987604448_0 (TlsClientCertificate_t475933767_0 * __this, Context_t417548721_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
extern "C"  X509Certificate_t_1468785580_0 * TlsClientCertificate_get_ClientCertificate_m_1232526807_0 (TlsClientCertificate_t475933767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
extern "C"  void TlsClientCertificate_Update_m_513504476_0 (TlsClientCertificate_t475933767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
extern "C"  void TlsClientCertificate_GetClientCertificate_m_1486499317_0 (TlsClientCertificate_t475933767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
extern "C"  void TlsClientCertificate_SendCertificates_m1096074091_0 (TlsClientCertificate_t475933767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
extern "C"  void TlsClientCertificate_ProcessAsSsl3_m_660517789_0 (TlsClientCertificate_t475933767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
extern "C"  void TlsClientCertificate_ProcessAsTls1_m1772516248_0 (TlsClientCertificate_t475933767_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  X509Certificate_t_1468785580_0 * TlsClientCertificate_FindParentCertificate_m10738514_0 (TlsClientCertificate_t475933767_0 * __this, X509Certificate_t_1468785580_0 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;

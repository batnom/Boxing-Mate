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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t1008304204_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1761069182_0;
// System.Net.HttpWebRequest
struct HttpWebRequest_t505958179_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t_1468785580_0;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C"  void HttpsClientStream__ctor_m_887044519_0 (HttpsClientStream_t1008304204_0 * __this, Stream_t_500356931_0 * ___stream, X509CertificateCollection_t1761069182_0 * ___clientCertificates, HttpWebRequest_t505958179_0 * ___request, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C"  bool HttpsClientStream_get_TrustFailure_m1980919191_0 (HttpsClientStream_t1008304204_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool HttpsClientStream_RaiseServerCertificateValidation_m_938196870_0 (HttpsClientStream_t1008304204_0 * __this, X509Certificate_t_1468785580_0 * ___certificate, Int32U5BU5D_t1496069209_0* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t_1468785580_0 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m_1118613582_0 (Object_t * __this /* static, unused */, X509CertificateCollection_t1761069182_0 * ___clientCerts, X509Certificate_t_1468785580_0 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t1761069182_0 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t_1233528832_0 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m_1164825_0 (Object_t * __this /* static, unused */, X509Certificate_t_1468785580_0 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t426342583_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t_1468785580_0;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1761069182_0;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t_913155068_0;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1756554202_0;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t_1233528832_0;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t_973600464_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAl_1106906522.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgo_2116660341.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Exchange_1332920080.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Security_1315242508.h"
#include "mscorlib_System_IO_SeekOrigin568296617.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
extern "C"  void SslStreamBase__ctor_m543947417_0 (SslStreamBase_t426342583_0 * __this, Stream_t_500356931_0 * ___stream, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
extern "C"  void SslStreamBase__cctor_m_247520742_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_AsyncHandshakeCallback_m1101580486_0 (SslStreamBase_t426342583_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
extern "C"  bool SslStreamBase_get_MightNeedHandshake_m_862796602_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
extern "C"  void SslStreamBase_NegotiateHandshake_m1758369850_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C"  X509Certificate_t_1468785580_0 * SslStreamBase_RaiseLocalCertificateSelection_m_872261580_0 (SslStreamBase_t426342583_0 * __this, X509CertificateCollection_t1761069182_0 * ___certificates, X509Certificate_t_1468785580_0 * ___remoteCertificate, String_t* ___targetHost, X509CertificateCollection_t1761069182_0 * ___requestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C"  bool SslStreamBase_RaiseRemoteCertificateValidation_m902031508_0 (SslStreamBase_t426342583_0 * __this, X509Certificate_t_1468785580_0 * ___certificate, Int32U5BU5D_t1496069209_0* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C"  ValidationResult_t_913155068_0 * SslStreamBase_RaiseRemoteCertificateValidation2_m1013444422_0 (SslStreamBase_t426342583_0 * __this, X509CertificateCollection_t1756554202_0 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C"  AsymmetricAlgorithm_t_1233528832_0 * SslStreamBase_RaiseLocalPrivateKeySelection_m1885975771_0 (SslStreamBase_t426342583_0 * __this, X509Certificate_t_1468785580_0 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
extern "C"  bool SslStreamBase_get_CheckCertRevocationStatus_m_1827009916_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
extern "C"  void SslStreamBase_set_CheckCertRevocationStatus_m703827149_0 (SslStreamBase_t426342583_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
extern "C"  int32_t SslStreamBase_get_CipherAlgorithm_m692718075_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
extern "C"  int32_t SslStreamBase_get_CipherStrength_m_550913960_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
extern "C"  int32_t SslStreamBase_get_HashAlgorithm_m_1703518405_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
extern "C"  int32_t SslStreamBase_get_HashStrength_m480059173_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
extern "C"  int32_t SslStreamBase_get_KeyExchangeStrength_m1717128931_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
extern "C"  int32_t SslStreamBase_get_KeyExchangeAlgorithm_m_582954258_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
extern "C"  int32_t SslStreamBase_get_SecurityProtocol_m_1836525901_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
extern "C"  X509Certificate_t_1468785580_0 * SslStreamBase_get_ServerCertificate_m702547597_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
extern "C"  X509CertificateCollection_t1756554202_0 * SslStreamBase_get_ServerCertificates_m1401009752_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  bool SslStreamBase_BeginNegotiateHandshake_m2029257721_0 (SslStreamBase_t426342583_0 * __this, InternalAsyncResult_t_973600464_0 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_EndNegotiateHandshake_m1732321201_0 (SslStreamBase_t426342583_0 * __this, InternalAsyncResult_t_973600464_0 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * SslStreamBase_BeginRead_m869235395_0 (SslStreamBase_t426342583_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_InternalBeginRead_m707911413_0 (SslStreamBase_t426342583_0 * __this, InternalAsyncResult_t_973600464_0 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_InternalReadCallback_m_1770049710_0 (SslStreamBase_t426342583_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C"  void SslStreamBase_InternalBeginWrite_m_534194928_0 (SslStreamBase_t426342583_0 * __this, InternalAsyncResult_t_973600464_0 * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
extern "C"  void SslStreamBase_InternalWriteCallback_m_1742301649_0 (SslStreamBase_t426342583_0 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C"  Object_t * SslStreamBase_BeginWrite_m270524114_0 (SslStreamBase_t426342583_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
extern "C"  int32_t SslStreamBase_EndRead_m1072850679_0 (SslStreamBase_t426342583_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
extern "C"  void SslStreamBase_EndWrite_m1091701856_0 (SslStreamBase_t426342583_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
extern "C"  void SslStreamBase_Close_m_1532230425_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
extern "C"  void SslStreamBase_Flush_m_1532322891_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
extern "C"  int32_t SslStreamBase_Read_m1663229390_0 (SslStreamBase_t426342583_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
extern "C"  int32_t SslStreamBase_Read_m1036897444_0 (SslStreamBase_t426342583_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
extern "C"  int64_t SslStreamBase_Seek_m_689654203_0 (SslStreamBase_t426342583_0 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
extern "C"  void SslStreamBase_SetLength_m_1012481255_0 (SslStreamBase_t426342583_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
extern "C"  void SslStreamBase_Write_m_902259577_0 (SslStreamBase_t426342583_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void SslStreamBase_Write_m1135856379_0 (SslStreamBase_t426342583_0 * __this, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
extern "C"  bool SslStreamBase_get_CanRead_m_1233100614_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
extern "C"  bool SslStreamBase_get_CanSeek_m1596790394_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
extern "C"  bool SslStreamBase_get_CanWrite_m2069502593_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
extern "C"  int64_t SslStreamBase_get_Length_m763159069_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
extern "C"  int64_t SslStreamBase_get_Position_m_1769530124_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
extern "C"  void SslStreamBase_set_Position_m598220223_0 (SslStreamBase_t426342583_0 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
extern "C"  void SslStreamBase_Finalize_m_1764338461_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
extern "C"  void SslStreamBase_Dispose_m747909841_0 (SslStreamBase_t426342583_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
extern "C"  void SslStreamBase_resetBuffer_m_1266924934_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
extern "C"  void SslStreamBase_checkDisposed_m_1744777120_0 (SslStreamBase_t426342583_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

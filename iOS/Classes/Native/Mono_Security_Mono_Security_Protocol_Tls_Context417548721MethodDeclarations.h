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

// Mono.Security.Protocol.Tls.Context
struct Context_t417548721_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t1444244089_0;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t678024933_0;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t233867723_0;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t_1403108319_0;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1347956653_0;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t_2005050320_0;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Security_1315242508.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC_960609666.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2037140648.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshak_1989273988.h"

// System.Void Mono.Security.Protocol.Tls.Context::.ctor(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void Context__ctor_m_331025833_0 (Context_t417548721_0 * __this, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_AbbreviatedHandshake()
extern "C"  bool Context_get_AbbreviatedHandshake_m_1322129606_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_AbbreviatedHandshake(System.Boolean)
extern "C"  void Context_set_AbbreviatedHandshake_m_214595969_0 (Context_t417548721_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ProtocolNegotiated()
extern "C"  bool Context_get_ProtocolNegotiated_m624488778_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ProtocolNegotiated(System.Boolean)
extern "C"  void Context_set_ProtocolNegotiated_m1177527245_0 (Context_t417548721_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocol()
extern "C"  int32_t Context_get_SecurityProtocol_m1600902905_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SecurityProtocol(Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C"  void Context_set_SecurityProtocol_m_141743984_0 (Context_t417548721_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::get_SecurityProtocolFlags()
extern "C"  int32_t Context_get_SecurityProtocolFlags_m_999415500_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Mono.Security.Protocol.Tls.Context::get_Protocol()
extern "C"  int16_t Context_get_Protocol_m1537476188_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_SessionId()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_SessionId_m1296338025_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SessionId(System.Byte[])
extern "C"  void Context_set_SessionId_m1229908268_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::get_CompressionMethod()
extern "C"  int32_t Context_get_CompressionMethod_m1938328556_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_CompressionMethod(Mono.Security.Protocol.Tls.SecurityCompressionType)
extern "C"  void Context_set_CompressionMethod_m_1446483737_0 (Context_t417548721_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::get_ServerSettings()
extern "C"  TlsServerSettings_t1444244089_0 * Context_get_ServerSettings_m225713600_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::get_ClientSettings()
extern "C"  TlsClientSettings_t678024933_0 * Context_get_ClientSettings_m1185615112_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::get_LastHandshakeMsg()
extern "C"  uint8_t Context_get_LastHandshakeMsg_m873777031_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_LastHandshakeMsg(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void Context_set_LastHandshakeMsg_m_1132408710_0 (Context_t417548721_0 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::get_HandshakeState()
extern "C"  int32_t Context_get_HandshakeState_m_851813559_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_HandshakeState(Mono.Security.Protocol.Tls.HandshakeState)
extern "C"  void Context_set_HandshakeState_m1586089840_0 (Context_t417548721_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_ReceivedConnectionEnd()
extern "C"  bool Context_get_ReceivedConnectionEnd_m_925611020_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReceivedConnectionEnd(System.Boolean)
extern "C"  void Context_set_ReceivedConnectionEnd_m213831275_0 (Context_t417548721_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Context::get_SentConnectionEnd()
extern "C"  bool Context_get_SentConnectionEnd_m_1180776429_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SentConnectionEnd(System.Boolean)
extern "C"  void Context_set_SentConnectionEnd_m_1653508454_0 (Context_t417548721_0 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::get_SupportedCiphers()
extern "C"  CipherSuiteCollection_t233867723_0 * Context_get_SupportedCiphers_m_2122139998_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_SupportedCiphers(Mono.Security.Protocol.Tls.CipherSuiteCollection)
extern "C"  void Context_set_SupportedCiphers_m_300001769_0 (Context_t417548721_0 * __this, CipherSuiteCollection_t233867723_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::get_HandshakeMessages()
extern "C"  TlsStream_t_1403108319_0 * Context_get_HandshakeMessages_m_1529054707_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_WriteSequenceNumber()
extern "C"  uint64_t Context_get_WriteSequenceNumber_m243492531_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_WriteSequenceNumber(System.UInt64)
extern "C"  void Context_set_WriteSequenceNumber_m_938714586_0 (Context_t417548721_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Mono.Security.Protocol.Tls.Context::get_ReadSequenceNumber()
extern "C"  uint64_t Context_get_ReadSequenceNumber_m_1708285686_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ReadSequenceNumber(System.UInt64)
extern "C"  void Context_set_ReadSequenceNumber_m_991512837_0 (Context_t417548721_0 * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientRandom()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_ClientRandom_m697914474_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientRandom(System.Byte[])
extern "C"  void Context_set_ClientRandom_m631392719_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerRandom()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_ServerRandom_m_768408274_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerRandom(System.Byte[])
extern "C"  void Context_set_ServerRandom_m173601139_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomCS()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_RandomCS_m_348947187_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomCS(System.Byte[])
extern "C"  void Context_set_RandomCS_m_1960142258_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_RandomSC()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_RandomSC_m1687420621_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RandomSC(System.Byte[])
extern "C"  void Context_set_RandomSC_m2057392782_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_MasterSecret()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_MasterSecret_m231851308_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_MasterSecret(System.Byte[])
extern "C"  void Context_set_MasterSecret_m1422386411_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteKey()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_ClientWriteKey_m_2059361959_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteKey(System.Byte[])
extern "C"  void Context_set_ClientWriteKey_m1137238126_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteKey()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_ServerWriteKey_m1780148437_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteKey(System.Byte[])
extern "C"  void Context_set_ServerWriteKey_m_1977221878_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ClientWriteIV()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_ClientWriteIV_m_2123210179_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ClientWriteIV(System.Byte[])
extern "C"  void Context_set_ClientWriteIV_m70615452_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::get_ServerWriteIV()
extern "C"  ByteU5BU5D_t1362406281_0* Context_get_ServerWriteIV_m_1334266647_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_ServerWriteIV(System.Byte[])
extern "C"  void Context_set_ServerWriteIV_m_903490176_0 (Context_t417548721_0 * __this, ByteU5BU5D_t1362406281_0* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::get_RecordProtocol()
extern "C"  RecordProtocol_t1347956653_0 * Context_get_RecordProtocol_m1527823481_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::set_RecordProtocol(Mono.Security.Protocol.Tls.RecordProtocol)
extern "C"  void Context_set_RecordProtocol_m1968834768_0 (Context_t417548721_0 * __this, RecordProtocol_t1347956653_0 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.Context::GetUnixTime()
extern "C"  int32_t Context_GetUnixTime_m_517172116_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Context::GetSecureRandomBytes(System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* Context_GetSecureRandomBytes_m1065353673_0 (Context_t417548721_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::Clear()
extern "C"  void Context_Clear_m_294630226_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo()
extern "C"  void Context_ClearKeyInfo_m205678623_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::DecodeProtocolCode(System.Int16)
extern "C"  int32_t Context_DecodeProtocolCode_m_243613736_0 (Context_t417548721_0 * __this, int16_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::ChangeProtocol(System.Int16)
extern "C"  void Context_ChangeProtocol_m46663628_0 (Context_t417548721_0 * __this, int16_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Current()
extern "C"  SecurityParameters_t_2005050320_0 * Context_get_Current_m_1577921972_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Negotiating()
extern "C"  SecurityParameters_t_2005050320_0 * Context_get_Negotiating_m_348491186_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Read()
extern "C"  SecurityParameters_t_2005050320_0 * Context_get_Read_m171585211_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::get_Write()
extern "C"  SecurityParameters_t_2005050320_0 * Context_get_Write_m_1995605670_0 (Context_t417548721_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::StartSwitchingSecurityParameters(System.Boolean)
extern "C"  void Context_StartSwitchingSecurityParameters_m373522596_0 (Context_t417548721_0 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Context::EndSwitchingSecurityParameters(System.Boolean)
extern "C"  void Context_EndSwitchingSecurityParameters_m1613076777_0 (Context_t417548721_0 * __this, bool ___client, const MethodInfo* method) IL2CPP_METHOD_ATTR;

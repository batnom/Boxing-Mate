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

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t_1349401084_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t2099064576_0;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t149389175_0;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t_1403108319_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2037140648.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C"  void ClientRecordProtocol__ctor_m648586559_0 (ClientRecordProtocol_t_1349401084_0 * __this, Stream_t_500356931_0 * ___innerStream, ClientContext_t2099064576_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t149389175_0 * ClientRecordProtocol_GetMessage_m_1645697497_0 (ClientRecordProtocol_t_1349401084_0 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C"  void ClientRecordProtocol_ProcessHandshakeMessage_m_704450704_0 (ClientRecordProtocol_t_1349401084_0 * __this, TlsStream_t_1403108319_0 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t149389175_0 * ClientRecordProtocol_createClientHandshakeMessage_m811708715_0 (ClientRecordProtocol_t_1349401084_0 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  HandshakeMessage_t149389175_0 * ClientRecordProtocol_createServerHandshakeMessage_m_355176430_0 (ClientRecordProtocol_t_1349401084_0 * __this, uint8_t ___type, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

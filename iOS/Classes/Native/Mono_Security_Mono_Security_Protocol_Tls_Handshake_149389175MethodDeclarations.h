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

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t149389175_0;
// Mono.Security.Protocol.Tls.Context
struct Context_t417548721_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2037140648.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy_360357497.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void HandshakeMessage__ctor_m_511808706_0 (HandshakeMessage_t149389175_0 * __this, Context_t417548721_0 * ___context, uint8_t ___handshakeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
extern "C"  void HandshakeMessage__ctor_m_1567221363_0 (HandshakeMessage_t149389175_0 * __this, Context_t417548721_0 * ___context, uint8_t ___handshakeType, uint8_t ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C"  void HandshakeMessage__ctor_m1431757899_0 (HandshakeMessage_t149389175_0 * __this, Context_t417548721_0 * ___context, uint8_t ___handshakeType, ByteU5BU5D_t1362406281_0* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
extern "C"  Context_t417548721_0 * HandshakeMessage_get_Context_m_938671585_0 (HandshakeMessage_t149389175_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
extern "C"  uint8_t HandshakeMessage_get_HandshakeType_m2104271474_0 (HandshakeMessage_t149389175_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
extern "C"  uint8_t HandshakeMessage_get_ContentType_m760670911_0 (HandshakeMessage_t149389175_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
extern "C"  void HandshakeMessage_Process_m_1606891178_0 (HandshakeMessage_t149389175_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
extern "C"  void HandshakeMessage_Update_m1733566706_0 (HandshakeMessage_t149389175_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
extern "C"  ByteU5BU5D_t1362406281_0* HandshakeMessage_EncodeMessage_m_1569808366_0 (HandshakeMessage_t149389175_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
extern "C"  bool HandshakeMessage_Compare_m2025941142_0 (Object_t * __this /* static, unused */, ByteU5BU5D_t1362406281_0* ___buffer1, ByteU5BU5D_t1362406281_0* ___buffer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

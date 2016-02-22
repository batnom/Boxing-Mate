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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct TlsServerKeyExchange_t1905923378_0;
// Mono.Security.Protocol.Tls.Context
struct Context_t417548721_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsServerKeyExchange__ctor_m247733406_0 (TlsServerKeyExchange_t1905923378_0 * __this, Context_t417548721_0 * ___context, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern "C"  void TlsServerKeyExchange_Update_m467765633_0 (TlsServerKeyExchange_t1905923378_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern "C"  void TlsServerKeyExchange_ProcessAsSsl3_m462106368_0 (TlsServerKeyExchange_t1905923378_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern "C"  void TlsServerKeyExchange_ProcessAsTls1_m1879578643_0 (TlsServerKeyExchange_t1905923378_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern "C"  void TlsServerKeyExchange_verifySignature_m_653432733_0 (TlsServerKeyExchange_t1905923378_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

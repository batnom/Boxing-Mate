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

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct TlsServerHelloDone_t1401245952_0;
// Mono.Security.Protocol.Tls.Context
struct Context_t417548721_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C"  void TlsServerHelloDone__ctor_m2125611008_0 (TlsServerHelloDone_t1401245952_0 * __this, Context_t417548721_0 * ___context, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern "C"  void TlsServerHelloDone_ProcessAsSsl3_m_1942399634_0 (TlsServerHelloDone_t1401245952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern "C"  void TlsServerHelloDone_ProcessAsTls1_m_1509516887_0 (TlsServerHelloDone_t1401245952_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

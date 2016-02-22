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

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct ClientSessionInfo_t2008275383_0;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// Mono.Security.Protocol.Tls.Context
struct Context_t417548721_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.ctor(System.String,System.Byte[])
extern "C"  void ClientSessionInfo__ctor_m759726440_0 (ClientSessionInfo_t2008275383_0 * __this, String_t* ___hostname, ByteU5BU5D_t1362406281_0* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::.cctor()
extern "C"  void ClientSessionInfo__cctor_m1353980836_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Finalize()
extern "C"  void ClientSessionInfo_Finalize_m1198775539_0 (ClientSessionInfo_t2008275383_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::get_HostName()
extern "C"  String_t* ClientSessionInfo_get_HostName_m759522668_0 (ClientSessionInfo_t2008275383_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::get_Id()
extern "C"  ByteU5BU5D_t1362406281_0* ClientSessionInfo_get_Id_m_1248336327_0 (ClientSessionInfo_t2008275383_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::get_Valid()
extern "C"  bool ClientSessionInfo_get_Valid_m_705143988_0 (ClientSessionInfo_t2008275383_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::GetContext(Mono.Security.Protocol.Tls.Context)
extern "C"  void ClientSessionInfo_GetContext_m301320023_0 (ClientSessionInfo_t2008275383_0 * __this, Context_t417548721_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::SetContext(Mono.Security.Protocol.Tls.Context)
extern "C"  void ClientSessionInfo_SetContext_m_1645609405_0 (ClientSessionInfo_t2008275383_0 * __this, Context_t417548721_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::KeepAlive()
extern "C"  void ClientSessionInfo_KeepAlive_m_1169558915_0 (ClientSessionInfo_t2008275383_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose()
extern "C"  void ClientSessionInfo_Dispose_m_979125172_0 (ClientSessionInfo_t2008275383_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::Dispose(System.Boolean)
extern "C"  void ClientSessionInfo_Dispose_m_1723539271_0 (ClientSessionInfo_t2008275383_0 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientSessionInfo::CheckDisposed()
extern "C"  void ClientSessionInfo_CheckDisposed_m1394638186_0 (ClientSessionInfo_t2008275383_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

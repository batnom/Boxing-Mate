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

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct SendRecordAsyncResult_t1280362364_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t149389175_0;
// System.Exception
struct Exception_t_116002698_0;
// System.Threading.WaitHandle
struct WaitHandle_t1307179416_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,Mono.Security.Protocol.Tls.Handshake.HandshakeMessage)
extern "C"  void SendRecordAsyncResult__ctor_m_1295062251_0 (SendRecordAsyncResult_t1280362364_0 * __this, AsyncCallback_t2110631700_0 * ___userCallback, Object_t * ___userState, HandshakeMessage_t149389175_0 * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_Message()
extern "C"  HandshakeMessage_t149389175_0 * SendRecordAsyncResult_get_Message_m_1953988680_0 (SendRecordAsyncResult_t1280362364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncState()
extern "C"  Object_t * SendRecordAsyncResult_get_AsyncState_m_1995513877_0 (SendRecordAsyncResult_t1280362364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncException()
extern "C"  Exception_t_116002698_0 * SendRecordAsyncResult_get_AsyncException_m2088364821_0 (SendRecordAsyncResult_t1280362364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_CompletedWithError()
extern "C"  bool SendRecordAsyncResult_get_CompletedWithError_m349920476_0 (SendRecordAsyncResult_t1280362364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1307179416_0 * SendRecordAsyncResult_get_AsyncWaitHandle_m_762591471_0 (SendRecordAsyncResult_t1280362364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::get_IsCompleted()
extern "C"  bool SendRecordAsyncResult_get_IsCompleted_m_1628839604_0 (SendRecordAsyncResult_t1280362364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete(System.Exception)
extern "C"  void SendRecordAsyncResult_SetComplete_m425796521_0 (SendRecordAsyncResult_t1280362364_0 * __this, Exception_t_116002698_0 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::SetComplete()
extern "C"  void SendRecordAsyncResult_SetComplete_m_1288694151_0 (SendRecordAsyncResult_t1280362364_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

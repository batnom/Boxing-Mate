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

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t_1701654625_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// System.Exception
struct Exception_t_116002698_0;
// System.Threading.WaitHandle
struct WaitHandle_t1307179416_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C"  void ReceiveRecordAsyncResult__ctor_m109339899_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, AsyncCallback_t2110631700_0 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1362406281_0* ___initialBuffer, Stream_t_500356931_0 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C"  Stream_t_500356931_0 * ReceiveRecordAsyncResult_get_Record_m1336421357_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C"  ByteU5BU5D_t1362406281_0* ReceiveRecordAsyncResult_get_ResultingBuffer_m_2141605923_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C"  ByteU5BU5D_t1362406281_0* ReceiveRecordAsyncResult_get_InitialBuffer_m1245345098_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C"  Object_t * ReceiveRecordAsyncResult_get_AsyncState_m2086535212_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C"  Exception_t_116002698_0 * ReceiveRecordAsyncResult_get_AsyncException_m1835236292_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C"  bool ReceiveRecordAsyncResult_get_CompletedWithError_m_1624570745_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1307179416_0 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m1602093076_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C"  bool ReceiveRecordAsyncResult_get_IsCompleted_m_1967692849_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m_1853859631_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, Exception_t_116002698_0 * ___ex, ByteU5BU5D_t1362406281_0* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m494147202_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, Exception_t_116002698_0 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C"  void ReceiveRecordAsyncResult_SetComplete_m_239551783_0 (ReceiveRecordAsyncResult_t_1701654625_0 * __this, ByteU5BU5D_t1362406281_0* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

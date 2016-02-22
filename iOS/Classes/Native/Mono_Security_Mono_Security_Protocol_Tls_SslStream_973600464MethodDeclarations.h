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

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t_973600464_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Exception
struct Exception_t_116002698_0;
// System.Threading.WaitHandle
struct WaitHandle_t1307179416_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C"  void InternalAsyncResult__ctor_m_1530112601_0 (InternalAsyncResult_t_973600464_0 * __this, AsyncCallback_t2110631700_0 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1362406281_0* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
extern "C"  bool InternalAsyncResult_get_ProceedAfterHandshake_m552962842_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
extern "C"  bool InternalAsyncResult_get_FromWrite_m_1401558872_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
extern "C"  ByteU5BU5D_t1362406281_0* InternalAsyncResult_get_Buffer_m163794679_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
extern "C"  int32_t InternalAsyncResult_get_Offset_m_836519844_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
extern "C"  int32_t InternalAsyncResult_get_Count_m1291942796_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
extern "C"  int32_t InternalAsyncResult_get_BytesRead_m_51074948_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
extern "C"  Object_t * InternalAsyncResult_get_AsyncState_m42006015_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
extern "C"  Exception_t_116002698_0 * InternalAsyncResult_get_AsyncException_m_358306859_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
extern "C"  bool InternalAsyncResult_get_CompletedWithError_m_301011974_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
extern "C"  WaitHandle_t1307179416_0 * InternalAsyncResult_get_AsyncWaitHandle_m_1997697427_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
extern "C"  bool InternalAsyncResult_get_IsCompleted_m1463732458_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C"  void InternalAsyncResult_SetComplete_m_283373380_0 (InternalAsyncResult_t_973600464_0 * __this, Exception_t_116002698_0 * ___ex, int32_t ___bytesRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
extern "C"  void InternalAsyncResult_SetComplete_m_2107807599_0 (InternalAsyncResult_t_973600464_0 * __this, Exception_t_116002698_0 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
extern "C"  void InternalAsyncResult_SetComplete_m200761170_0 (InternalAsyncResult_t_973600464_0 * __this, int32_t ___bytesRead, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
extern "C"  void InternalAsyncResult_SetComplete_m35987153_0 (InternalAsyncResult_t_973600464_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

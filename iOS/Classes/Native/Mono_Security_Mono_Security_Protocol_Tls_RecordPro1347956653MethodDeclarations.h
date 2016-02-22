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

// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t1347956653_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// Mono.Security.Protocol.Tls.Context
struct Context_t417548721_0;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t149389175_0;
// System.IAsyncResult
struct IAsyncResult_t_87838773_0;
// System.AsyncCallback
struct AsyncCallback_t2110631700_0;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t_188480248_0;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t_41731615_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2037140648.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve_323270146.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDes_1431919490.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTy_360357497.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Security_1315242508.h"

// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.Context)
extern "C"  void RecordProtocol__ctor_m168945279_0 (RecordProtocol_t1347956653_0 * __this, Stream_t_500356931_0 * ___innerStream, Context_t417548721_0 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::.cctor()
extern "C"  void RecordProtocol__cctor_m1255542758_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::get_Context()
extern "C"  Context_t417548721_0 * RecordProtocol_get_Context_m_1606473767_0 (RecordProtocol_t1347956653_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  void RecordProtocol_SendRecord_m_1317078046_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessChangeCipherSpec()
extern "C"  void RecordProtocol_ProcessChangeCipherSpec_m_1061007434_0 (RecordProtocol_t1347956653_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C"  HandshakeMessage_t149389175_0 * RecordProtocol_GetMessage_m594970728_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginReceiveRecord(System.IO.Stream,System.AsyncCallback,System.Object)
extern "C"  Object_t * RecordProtocol_BeginReceiveRecord_m2023581433_0 (RecordProtocol_t1347956653_0 * __this, Stream_t_500356931_0 * ___record, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalReceiveRecordCallback(System.IAsyncResult)
extern "C"  void RecordProtocol_InternalReceiveRecordCallback_m_2066045804_0 (RecordProtocol_t1347956653_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EndReceiveRecord(System.IAsyncResult)
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_EndReceiveRecord_m_248987141_0 (RecordProtocol_t1347956653_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReceiveRecord(System.IO.Stream)
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_ReceiveRecord_m_622382480_0 (RecordProtocol_t1347956653_0 * __this, Stream_t_500356931_0 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadRecordBuffer(System.Int32,System.IO.Stream)
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_ReadRecordBuffer_m1307297230_0 (RecordProtocol_t1347956653_0 * __this, int32_t ___contentType, Stream_t_500356931_0 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadClientHelloV2(System.IO.Stream)
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_ReadClientHelloV2_m103475177_0 (RecordProtocol_t1347956653_0 * __this, Stream_t_500356931_0 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::ReadStandardRecordBuffer(System.IO.Stream)
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_ReadStandardRecordBuffer_m_748482818_0 (RecordProtocol_t1347956653_0 * __this, Stream_t_500356931_0 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_ProcessAlert_m_1644719552_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___alertLevel, uint8_t ___alertDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_SendAlert_m_1672213531_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C"  void RecordProtocol_SendAlert_m_1765404627_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendAlert(Mono.Security.Protocol.Tls.Alert)
extern "C"  void RecordProtocol_SendAlert_m_1478158773_0 (RecordProtocol_t1347956653_0 * __this, Alert_t_188480248_0 * ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendChangeCipherSpec()
extern "C"  void RecordProtocol_SendChangeCipherSpec_m_752965955_0 (RecordProtocol_t1347956653_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.AsyncCallback,System.Object)
extern "C"  Object_t * RecordProtocol_BeginSendRecord_m_1114009481_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___handshakeType, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::InternalSendRecordCallback(System.IAsyncResult)
extern "C"  void RecordProtocol_InternalSendRecordCallback_m_310202439_0 (RecordProtocol_t1347956653_0 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.RecordProtocol::BeginSendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Object_t * RecordProtocol_BeginSendRecord_m166940611_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___contentType, ByteU5BU5D_t1362406281_0* ___recordData, AsyncCallback_t2110631700_0 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::EndSendRecord(System.IAsyncResult)
extern "C"  void RecordProtocol_EndSendRecord_m_990003630_0 (RecordProtocol_t1347956653_0 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  void RecordProtocol_SendRecord_m132002114_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___contentType, ByteU5BU5D_t1362406281_0* ___recordData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_EncodeRecord_m1215442978_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___contentType, ByteU5BU5D_t1362406281_0* ___recordData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::EncodeRecord(Mono.Security.Protocol.Tls.ContentType,System.Byte[],System.Int32,System.Int32)
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_EncodeRecord_m_410696944_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___contentType, ByteU5BU5D_t1362406281_0* ___recordData, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::encryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_encryptRecordFragment_m1241873183_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___contentType, ByteU5BU5D_t1362406281_0* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol::decryptRecordFragment(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern "C"  ByteU5BU5D_t1362406281_0* RecordProtocol_decryptRecordFragment_m_1784107807_0 (RecordProtocol_t1347956653_0 * __this, uint8_t ___contentType, ByteU5BU5D_t1362406281_0* ___fragment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol::Compare(System.Byte[],System.Byte[])
extern "C"  bool RecordProtocol_Compare_m216902730_0 (RecordProtocol_t1347956653_0 * __this, ByteU5BU5D_t1362406281_0* ___array1, ByteU5BU5D_t1362406281_0* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol::ProcessCipherSpecV2Buffer(Mono.Security.Protocol.Tls.SecurityProtocolType,System.Byte[])
extern "C"  void RecordProtocol_ProcessCipherSpecV2Buffer_m1895848015_0 (RecordProtocol_t1347956653_0 * __this, int32_t ___protocol, ByteU5BU5D_t1362406281_0* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.RecordProtocol::MapV2CipherCode(System.String,System.Int32)
extern "C"  CipherSuite_t_41731615_0 * RecordProtocol_MapV2CipherCode_m_230755692_0 (RecordProtocol_t1347956653_0 * __this, String_t* ___prefix, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;

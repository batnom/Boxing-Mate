#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Threading.ManualResetEvent
struct ManualResetEvent_t_1294467456_0;
// System.IO.Stream
struct Stream_t_500356931_0;
// Mono.Security.Protocol.Tls.Context
struct Context_t417548721_0;

#include "mscorlib_System_Object_1786876978.h"

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t1347956653_0  : public Object_t
{
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t_500356931_0 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t417548721_0 * ___context_2;
};
struct RecordProtocol_t1347956653_0_StaticFields{
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t_1294467456_0 * ___record_processing_0;
};

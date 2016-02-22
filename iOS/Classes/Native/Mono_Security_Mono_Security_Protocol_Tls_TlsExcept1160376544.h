#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.Alert
struct Alert_t_188480248_0;

#include "mscorlib_System_Exception_116002698.h"

// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t1160376544_0  : public Exception_t_116002698_0
{
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t_188480248_0 * ___alert_11;
};

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t_41731615_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "mscorlib_System_Object_1786876978.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct  SecurityParameters_t_2005050320_0  : public Object_t
{
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::cipher
	CipherSuite_t_41731615_0 * ___cipher_0;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::clientWriteMAC
	ByteU5BU5D_t1362406281_0* ___clientWriteMAC_1;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::serverWriteMAC
	ByteU5BU5D_t1362406281_0* ___serverWriteMAC_2;
};

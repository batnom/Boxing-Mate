#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_149389175.h"
#include "mscorlib_System_Security_Cryptography_RSAParamete_1794859837.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct  TlsServerKeyExchange_t1905923378_0  : public HandshakeMessage_t149389175_0
{
	// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::rsaParams
	RSAParameters_t_1794859837_0  ___rsaParams_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::signedParams
	ByteU5BU5D_t1362406281_0* ___signedParams_10;
};

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
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t_41731615_0;

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_149389175.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC_960609666.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct  TlsServerHello_t1640434692_0  : public HandshakeMessage_t149389175_0
{
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::compressionMethod
	int32_t ___compressionMethod_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::random
	ByteU5BU5D_t1362406281_0* ___random_10;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::sessionId
	ByteU5BU5D_t1362406281_0* ___sessionId_11;
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::cipherSuite
	CipherSuite_t_41731615_0 * ___cipherSuite_12;
};

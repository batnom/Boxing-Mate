#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t235744847_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;

#include "mscorlib_System_Object_1786876978.h"

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t_1255800904_0  : public Object_t
{
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t235744847_0 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t235744847_0 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t1362406281_0* ____encrypted_3;
};

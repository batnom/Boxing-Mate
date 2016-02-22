#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.SecurityElement
struct SecurityElement_t1503839097_0;
// System.Collections.Stack
struct Stack_t751102184_0;

#include "mscorlib_Mono_Xml_SmallXmlParser2041912417.h"

// Mono.Xml.SecurityParser
struct  SecurityParser_t_1329638915_0  : public SmallXmlParser_t2041912417_0
{
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t1503839097_0 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t1503839097_0 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t751102184_0 * ___stack_15;
};

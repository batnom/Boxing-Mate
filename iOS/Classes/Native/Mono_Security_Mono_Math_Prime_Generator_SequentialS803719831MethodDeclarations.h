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

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t803719831_0;
// Mono.Math.BigInteger
struct BigInteger_t361548807_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C"  void SequentialSearchPrimeGeneratorBase__ctor_m_312938827_0 (SequentialSearchPrimeGeneratorBase_t803719831_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C"  BigInteger_t361548807_0 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m_1364502098_0 (SequentialSearchPrimeGeneratorBase_t803719831_0 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C"  BigInteger_t361548807_0 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m_2039030816_0 (SequentialSearchPrimeGeneratorBase_t803719831_0 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C"  BigInteger_t361548807_0 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m296245934_0 (SequentialSearchPrimeGeneratorBase_t803719831_0 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C"  bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m_616747767_0 (SequentialSearchPrimeGeneratorBase_t803719831_0 * __this, BigInteger_t361548807_0 * ___bi, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;

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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t860148051_0;
// Mono.Math.BigInteger
struct BigInteger_t361548807_0;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C"  void ModulusRing__ctor_m630117946_0 (ModulusRing_t860148051_0 * __this, BigInteger_t361548807_0 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C"  void ModulusRing_BarrettReduction_m_1492866197_0 (ModulusRing_t860148051_0 * __this, BigInteger_t361548807_0 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t361548807_0 * ModulusRing_Multiply_m_1181042553_0 (ModulusRing_t860148051_0 * __this, BigInteger_t361548807_0 * ___a, BigInteger_t361548807_0 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t361548807_0 * ModulusRing_Difference_m662924064_0 (ModulusRing_t860148051_0 * __this, BigInteger_t361548807_0 * ___a, BigInteger_t361548807_0 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t361548807_0 * ModulusRing_Pow_m_1805701861_0 (ModulusRing_t860148051_0 * __this, BigInteger_t361548807_0 * ___a, BigInteger_t361548807_0 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C"  BigInteger_t361548807_0 * ModulusRing_Pow_m661630322_0 (ModulusRing_t860148051_0 * __this, uint32_t ___b, BigInteger_t361548807_0 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;

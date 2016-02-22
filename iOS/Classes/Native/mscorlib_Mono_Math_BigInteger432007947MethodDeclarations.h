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

// Mono.Math.BigInteger
struct BigInteger_t432007947_0;
// System.Byte[]
struct ByteU5BU5D_t1362406281_0;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t_940353368_0;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger_Sign24670183.h"

// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger/Sign,System.UInt32)
extern "C"  void BigInteger__ctor_m2087647354_0 (BigInteger_t432007947_0 * __this, int32_t ___sign, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger)
extern "C"  void BigInteger__ctor_m582670464_0 (BigInteger_t432007947_0 * __this, BigInteger_t432007947_0 * ___bi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(Mono.Math.BigInteger,System.UInt32)
extern "C"  void BigInteger__ctor_m_1744309752_0 (BigInteger_t432007947_0 * __this, BigInteger_t432007947_0 * ___bi, uint32_t ___len, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.Byte[])
extern "C"  void BigInteger__ctor_m_2061441242_0 (BigInteger_t432007947_0 * __this, ByteU5BU5D_t1362406281_0* ___inData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.ctor(System.UInt32)
extern "C"  void BigInteger__ctor_m_1349184135_0 (BigInteger_t432007947_0 * __this, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::.cctor()
extern "C"  void BigInteger__cctor_m_1960334542_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Math.BigInteger::get_Rng()
extern "C"  RandomNumberGenerator_t_940353368_0 * BigInteger_get_Rng_m1268152318_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32,System.Security.Cryptography.RandomNumberGenerator)
extern "C"  BigInteger_t432007947_0 * BigInteger_GenerateRandom_m1785549398_0 (Object_t * __this /* static, unused */, int32_t ___bits, RandomNumberGenerator_t_940353368_0 * ___rng, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GenerateRandom(System.Int32)
extern "C"  BigInteger_t432007947_0 * BigInteger_GenerateRandom_m_1787658528_0 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize(System.Security.Cryptography.RandomNumberGenerator)
extern "C"  void BigInteger_Randomize_m_672923004_0 (BigInteger_t432007947_0 * __this, RandomNumberGenerator_t_940353368_0 * ___rng, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Randomize()
extern "C"  void BigInteger_Randomize_m_57454736_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::BitCount()
extern "C"  int32_t BigInteger_BitCount_m_974539829_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.UInt32)
extern "C"  bool BigInteger_TestBit_m2116575810_0 (BigInteger_t432007947_0 * __this, uint32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::TestBit(System.Int32)
extern "C"  bool BigInteger_TestBit_m_1503816119_0 (BigInteger_t432007947_0 * __this, int32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32)
extern "C"  void BigInteger_SetBit_m_642152118_0 (BigInteger_t432007947_0 * __this, uint32_t ___bitNum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::SetBit(System.UInt32,System.Boolean)
extern "C"  void BigInteger_SetBit_m_586371921_0 (BigInteger_t432007947_0 * __this, uint32_t ___bitNum, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::LowestSetBit()
extern "C"  int32_t BigInteger_LowestSetBit_m_58690082_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Math.BigInteger::GetBytes()
extern "C"  ByteU5BU5D_t1362406281_0* BigInteger_GetBytes_m_1359685048_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32)
extern "C"  String_t* BigInteger_ToString_m1239856588_0 (BigInteger_t432007947_0 * __this, uint32_t ___radix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString(System.UInt32,System.String)
extern "C"  String_t* BigInteger_ToString_m_457183072_0 (BigInteger_t432007947_0 * __this, uint32_t ___radix, String_t* ___characterSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Normalize()
extern "C"  void BigInteger_Normalize_m62229468_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Clear()
extern "C"  void BigInteger_Clear_m433805134_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.BigInteger::GetHashCode()
extern "C"  int32_t BigInteger_GetHashCode_m_251364590_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Math.BigInteger::ToString()
extern "C"  String_t* BigInteger_ToString_m377176314_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::Equals(System.Object)
extern "C"  bool BigInteger_Equals_m562026250_0 (BigInteger_t432007947_0 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModInverse(Mono.Math.BigInteger)
extern "C"  BigInteger_t432007947_0 * BigInteger_ModInverse_m506185746_0 (BigInteger_t432007947_0 * __this, BigInteger_t432007947_0 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::ModPow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t432007947_0 * BigInteger_ModPow_m887553845_0 (BigInteger_t432007947_0 * __this, BigInteger_t432007947_0 * ___exp, BigInteger_t432007947_0 * ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::IsProbablePrime()
extern "C"  bool BigInteger_IsProbablePrime_m_349164547_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::GeneratePseudoPrime(System.Int32)
extern "C"  BigInteger_t432007947_0 * BigInteger_GeneratePseudoPrime_m_1688605856_0 (Object_t * __this /* static, unused */, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger::Incr2()
extern "C"  void BigInteger_Incr2_m_222322895_0 (BigInteger_t432007947_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.UInt32)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_Implicit_m799073176_0 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Implicit(System.Int32)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_Implicit_m_262105039_0 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Addition(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_Addition_m1196561843_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Subtraction(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_Subtraction_m_1353403789_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,System.UInt32)
extern "C"  uint32_t BigInteger_op_Modulus_m582549828_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Modulus(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_Modulus_m_506565548_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Division(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_Division_m1581119694_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_Multiply_m_1005505357_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_Multiply(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_Multiply_m142859783_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_LeftShift_m1612425812_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger::op_RightShift(Mono.Math.BigInteger,System.Int32)
extern "C"  BigInteger_t432007947_0 * BigInteger_op_RightShift_m1619744615_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, int32_t ___shiftVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Equality_m_688148220_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,System.UInt32)
extern "C"  bool BigInteger_op_Inequality_m628223799_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, uint32_t ___ui, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Equality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Equality_m366854173_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_Inequality(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_Inequality_m1442635028_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThan_m2125509286_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThan(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThan_m_719146909_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_GreaterThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_GreaterThanOrEqual_m1998498565_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.BigInteger::op_LessThanOrEqual(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C"  bool BigInteger_op_LessThanOrEqual_m1986506530_0 (Object_t * __this /* static, unused */, BigInteger_t432007947_0 * ___bi1, BigInteger_t432007947_0 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

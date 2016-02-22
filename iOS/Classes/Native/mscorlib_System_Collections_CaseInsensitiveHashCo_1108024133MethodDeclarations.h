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

// System.Collections.CaseInsensitiveHashCodeProvider
struct CaseInsensitiveHashCodeProvider_t_1108024133_0;
// System.Globalization.CultureInfo
struct CultureInfo_t1283181710_0;
// System.Globalization.TextInfo
struct TextInfo_t_308632779_0;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor()
extern "C"  void CaseInsensitiveHashCodeProvider__ctor_m_519568463_0 (CaseInsensitiveHashCodeProvider_t_1108024133_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.ctor(System.Globalization.CultureInfo)
extern "C"  void CaseInsensitiveHashCodeProvider__ctor_m_1894067929_0 (CaseInsensitiveHashCodeProvider_t_1108024133_0 * __this, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CaseInsensitiveHashCodeProvider::.cctor()
extern "C"  void CaseInsensitiveHashCodeProvider__cctor_m_1656288990_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.CultureInfo,System.Globalization.CultureInfo)
extern "C"  bool CaseInsensitiveHashCodeProvider_AreEqual_m_1838349941_0 (Object_t * __this /* static, unused */, CultureInfo_t1283181710_0 * ___a, CultureInfo_t1283181710_0 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CaseInsensitiveHashCodeProvider::AreEqual(System.Globalization.TextInfo,System.Globalization.CultureInfo)
extern "C"  bool CaseInsensitiveHashCodeProvider_AreEqual_m_1127314984_0 (Object_t * __this /* static, unused */, TextInfo_t_308632779_0 * ___info, CultureInfo_t1283181710_0 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.CaseInsensitiveHashCodeProvider System.Collections.CaseInsensitiveHashCodeProvider::get_DefaultInvariant()
extern "C"  CaseInsensitiveHashCodeProvider_t_1108024133_0 * CaseInsensitiveHashCodeProvider_get_DefaultInvariant_m1293455465_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CaseInsensitiveHashCodeProvider::GetHashCode(System.Object)
extern "C"  int32_t CaseInsensitiveHashCodeProvider_GetHashCode_m_568654818_0 (CaseInsensitiveHashCodeProvider_t_1108024133_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;

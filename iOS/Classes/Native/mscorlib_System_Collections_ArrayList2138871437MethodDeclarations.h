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

// System.Collections.ArrayList
struct ArrayList_t2138871437_0;
// System.Collections.ICollection
struct ICollection_t140887709_0;
// System.Object[]
struct ObjectU5BU5D_t_591698798_0;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Collections.IComparer
struct IComparer_t_1964796564_0;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m_282792917_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
extern "C"  void ArrayList__ctor_m194094802_0 (ArrayList_t2138871437_0 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
extern "C"  void ArrayList__ctor_m1467563650_0 (ArrayList_t2138871437_0 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
extern "C"  void ArrayList__ctor_m1909233271_0 (ArrayList_t2138871437_0 * __this, ObjectU5BU5D_t_591698798_0* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
extern "C"  void ArrayList__cctor_m2090802806_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
extern "C"  Object_t * ArrayList_get_Item_m_1498816305_0 (ArrayList_t2138871437_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
extern "C"  void ArrayList_set_Item_m1858827078_0 (ArrayList_t2138871437_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
extern "C"  int32_t ArrayList_get_Count_m523955479_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Capacity()
extern "C"  int32_t ArrayList_get_Capacity_m1776194914_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Capacity(System.Int32)
extern "C"  void ArrayList_set_Capacity_m592558035_0 (ArrayList_t2138871437_0 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
extern "C"  bool ArrayList_get_IsFixedSize_m1344869099_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
extern "C"  bool ArrayList_get_IsReadOnly_m_1588423384_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
extern "C"  bool ArrayList_get_IsSynchronized_m481976864_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
extern "C"  Object_t * ArrayList_get_SyncRoot_m_1434812482_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
extern "C"  void ArrayList_EnsureCapacity_m_1525538872_0 (ArrayList_t2138871437_0 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
extern "C"  void ArrayList_Shift_m_1398201797_0 (ArrayList_t2138871437_0 * __this, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
extern "C"  int32_t ArrayList_Add_m1719188324_0 (ArrayList_t2138871437_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
extern "C"  void ArrayList_Clear_m_460363162_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
extern "C"  bool ArrayList_Contains_m1505633338_0 (ArrayList_t2138871437_0 * __this, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
extern "C"  int32_t ArrayList_IndexOf_m2092981366_0 (ArrayList_t2138871437_0 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
extern "C"  int32_t ArrayList_IndexOf_m_1138679667_0 (ArrayList_t2138871437_0 * __this, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
extern "C"  int32_t ArrayList_IndexOf_m_259019400_0 (ArrayList_t2138871437_0 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
extern "C"  void ArrayList_Insert_m351709155_0 (ArrayList_t2138871437_0 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
extern "C"  void ArrayList_InsertRange_m1478230997_0 (ArrayList_t2138871437_0 * __this, int32_t ___index, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
extern "C"  void ArrayList_Remove_m_353186557_0 (ArrayList_t2138871437_0 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
extern "C"  void ArrayList_RemoveAt_m_1716038963_0 (ArrayList_t2138871437_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
extern "C"  void ArrayList_CopyTo_m1348662971_0 (ArrayList_t2138871437_0 * __this, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
extern "C"  void ArrayList_CopyTo_m_1941334508_0 (ArrayList_t2138871437_0 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void ArrayList_CopyTo_m835998412_0 (ArrayList_t2138871437_0 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
extern "C"  Object_t * ArrayList_GetEnumerator_m_1602741949_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
extern "C"  void ArrayList_AddRange_m579674390_0 (ArrayList_t2138871437_0 * __this, Object_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
extern "C"  void ArrayList_Sort_m_1516907783_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
extern "C"  void ArrayList_Sort_m923359189_0 (ArrayList_t2138871437_0 * __this, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
extern "C"  ObjectU5BU5D_t_591698798_0* ArrayList_ToArray_m_863612344_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
extern "C"  Array_t * ArrayList_ToArray_m_1916079089_0 (ArrayList_t2138871437_0 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
extern "C"  Object_t * ArrayList_Clone_m118277485_0 (ArrayList_t2138871437_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  void ArrayList_ThrowNewArgumentOutOfRangeException_m_498993761_0 (Object_t * __this /* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
extern "C"  ArrayList_t2138871437_0 * ArrayList_Synchronized_m_1899895316_0 (Object_t * __this /* static, unused */, ArrayList_t2138871437_0 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
extern "C"  ArrayList_t2138871437_0 * ArrayList_ReadOnly_m_1167786004_0 (Object_t * __this /* static, unused */, ArrayList_t2138871437_0 * ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;

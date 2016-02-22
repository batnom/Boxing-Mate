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

// System.Array
struct Array_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// System.Type
struct Type_t;
// System.Collections.IEnumerator
struct IEnumerator_t435631375_0;
// System.Int64[]
struct Int64U5BU5D_t756757484_0;
// System.Collections.IComparer
struct IComparer_t_1964796564_0;
// System.Array/Swapper
struct Swapper_t400183785_0;
// System.Double[]
struct DoubleU5BU5D_t785289008_0;
// System.Char[]
struct CharU5BU5D_t2048601427_0;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Array::.ctor()
extern "C"  void Array__ctor_m531674930_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::System.Collections.IList.get_Item(System.Int32)
extern "C"  Object_t * Array_System_Collections_IList_get_Item_m2088124007_0 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void Array_System_Collections_IList_set_Item_m_4496904_0 (Array_t * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.Add(System.Object)
extern "C"  int32_t Array_System_Collections_IList_Add_m1693837354_0 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Clear()
extern "C"  void Array_System_Collections_IList_Clear_m_2110776416_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::System.Collections.IList.Contains(System.Object)
extern "C"  bool Array_System_Collections_IList_Contains_m_1298348276_0 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t Array_System_Collections_IList_IndexOf_m_769342236_0 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void Array_System_Collections_IList_Insert_m756977623_0 (Array_t * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.Remove(System.Object)
extern "C"  void Array_System_Collections_IList_Remove_m_1856074921_0 (Array_t * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void Array_System_Collections_IList_RemoveAt_m_1082058643_0 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::System.Collections.ICollection.get_Count()
extern "C"  int32_t Array_System_Collections_ICollection_get_Count_m_1397770769_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::InternalArray__ICollection_get_Count()
extern "C"  int32_t Array_InternalArray__ICollection_get_Count_m_1701453480_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::InternalArray__ICollection_get_IsReadOnly()
extern "C"  bool Array_InternalArray__ICollection_get_IsReadOnly_m_513682251_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__ICollection_Clear()
extern "C"  void Array_InternalArray__ICollection_Clear_m1939687317_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::InternalArray__RemoveAt(System.Int32)
extern "C"  void Array_InternalArray__RemoveAt_m1126483634_0 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m1498215565_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::get_LongLength()
extern "C"  int64_t Array_get_LongLength_m_1756668758_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Rank()
extern "C"  int32_t Array_get_Rank_m_457716601_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetRank()
extern "C"  int32_t Array_GetRank_m_165817736_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLength(System.Int32)
extern "C"  int32_t Array_GetLength_m2083296647_0 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Array::GetLongLength(System.Int32)
extern "C"  int64_t Array_GetLongLength_m_1289607110_0 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetLowerBound(System.Int32)
extern "C"  int32_t Array_GetLowerBound_m_561730092_0 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32[])
extern "C"  Object_t * Array_GetValue_m_744272355_0 (Array_t * __this, Int32U5BU5D_t1496069209_0* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32[])
extern "C"  void Array_SetValue_m_1873529254_0 (Array_t * __this, Object_t * ___value, Int32U5BU5D_t1496069209_0* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValueImpl(System.Int32)
extern "C"  Object_t * Array_GetValueImpl_m_1615318197_0 (Array_t * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValueImpl(System.Object,System.Int32)
extern "C"  void Array_SetValueImpl_m1292741952_0 (Array_t * __this, Object_t * ___value, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::FastCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  bool Array_FastCopy_m933468106_0 (Object_t * __this /* static, unused */, Array_t * ___source, int32_t ___source_idx, Array_t * ___dest, int32_t ___dest_idx, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstanceImpl(System.Type,System.Int32[],System.Int32[])
extern "C"  Array_t * Array_CreateInstanceImpl_m614034505_0 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1496069209_0* ___lengths, Int32U5BU5D_t1496069209_0* ___bounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsSynchronized()
extern "C"  bool Array_get_IsSynchronized_m1423050723_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::get_SyncRoot()
extern "C"  Object_t * Array_get_SyncRoot_m2127481503_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsFixedSize()
extern "C"  bool Array_get_IsFixedSize_m_2044089450_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Array::get_IsReadOnly()
extern "C"  bool Array_get_IsReadOnly_m1341198107_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C"  Object_t * Array_GetEnumerator_m_2010562338_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::GetUpperBound(System.Int32)
extern "C"  int32_t Array_GetUpperBound_m1352329707_0 (Array_t * __this, int32_t ___dimension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32)
extern "C"  Object_t * Array_GetValue_m_1010597225_0 (Array_t * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32)
extern "C"  Object_t * Array_GetValue_m_863428522_0 (Array_t * __this, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int32,System.Int32,System.Int32)
extern "C"  Object_t * Array_GetValue_m1302935803_0 (Array_t * __this, int32_t ___index1, int32_t ___index2, int32_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64)
extern "C"  Object_t * Array_GetValue_m152202090_0 (Array_t * __this, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64)
extern "C"  Object_t * Array_GetValue_m518505780_0 (Array_t * __this, int64_t ___index1, int64_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64,System.Int64,System.Int64)
extern "C"  Object_t * Array_GetValue_m_1112814858_0 (Array_t * __this, int64_t ___index1, int64_t ___index2, int64_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64)
extern "C"  void Array_SetValue_m1489959987_0 (Array_t * __this, Object_t * ___value, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64)
extern "C"  void Array_SetValue_m_1623828591_0 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64,System.Int64,System.Int64)
extern "C"  void Array_SetValue_m2039608971_0 (Array_t * __this, Object_t * ___value, int64_t ___index1, int64_t ___index2, int64_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32)
extern "C"  void Array_SetValue_m_1642207730_0 (Array_t * __this, Object_t * ___value, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32)
extern "C"  void Array_SetValue_m_1824987167_0 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int32,System.Int32,System.Int32)
extern "C"  void Array_SetValue_m_993275272_0 (Array_t * __this, Object_t * ___value, int32_t ___index1, int32_t ___index2, int32_t ___index3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
extern "C"  Array_t * Array_CreateInstance_m138919384_0 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32)
extern "C"  Array_t * Array_CreateInstance_m15016505_0 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32,System.Int32,System.Int32)
extern "C"  Array_t * Array_CreateInstance_m_984950826_0 (Object_t * __this /* static, unused */, Type_t * ___elementType, int32_t ___length1, int32_t ___length2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[])
extern "C"  Array_t * Array_CreateInstance_m_967277076_0 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1496069209_0* ___lengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int32[],System.Int32[])
extern "C"  Array_t * Array_CreateInstance_m1054139389_0 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int32U5BU5D_t1496069209_0* ___lengths, Int32U5BU5D_t1496069209_0* ___lowerBounds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Array::GetIntArray(System.Int64[])
extern "C"  Int32U5BU5D_t1496069209_0* Array_GetIntArray_m71808116_0 (Object_t * __this /* static, unused */, Int64U5BU5D_t756757484_0* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Array::CreateInstance(System.Type,System.Int64[])
extern "C"  Array_t * Array_CreateInstance_m679102425_0 (Object_t * __this /* static, unused */, Type_t * ___elementType, Int64U5BU5D_t756757484_0* ___lengths, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::GetValue(System.Int64[])
extern "C"  Object_t * Array_GetValue_m1507415734_0 (Array_t * __this, Int64U5BU5D_t756757484_0* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::SetValue(System.Object,System.Int64[])
extern "C"  void Array_SetValue_m169741241_0 (Array_t * __this, Object_t * ___value, Int64U5BU5D_t756757484_0* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object)
extern "C"  int32_t Array_BinarySearch_m_772656303_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_BinarySearch_m1368352453_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object)
extern "C"  int32_t Array_BinarySearch_m_2007539459_0 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::BinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_BinarySearch_m_1024722199_0 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::DoBinarySearch(System.Array,System.Int32,System.Int32,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_DoBinarySearch_m_250071384_0 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___value, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Clear_m782967417_0 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ClearInternal(System.Array,System.Int32,System.Int32)
extern "C"  void Array_ClearInternal_m_119341782_0 (Object_t * __this /* static, unused */, Array_t * ___a, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Array::Clone()
extern "C"  Object_t * Array_Clone_m768574314_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C"  void Array_Copy_m_1931227224_0 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m_486649800_0 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int64,System.Array,System.Int64,System.Int64)
extern "C"  void Array_Copy_m1969461849_0 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int64_t ___sourceIndex, Array_t * ___destinationArray, int64_t ___destinationIndex, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int64)
extern "C"  void Array_Copy_m1557170853_0 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, Array_t * ___destinationArray, int64_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object)
extern "C"  int32_t Array_IndexOf_m77084779_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32)
extern "C"  int32_t Array_IndexOf_m_1475334822_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::IndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C"  int32_t Array_IndexOf_m_1847665865_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Initialize()
extern "C"  void Array_Initialize_m_1208867570_0 (Array_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object)
extern "C"  int32_t Array_LastIndexOf_m229510321_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32)
extern "C"  int32_t Array_LastIndexOf_m_198432098_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::LastIndexOf(System.Array,System.Object,System.Int32,System.Int32)
extern "C"  int32_t Array_LastIndexOf_m512887013_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___value, int32_t ___startIndex, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array/Swapper System.Array::get_swapper(System.Array)
extern "C"  Swapper_t400183785_0 * Array_get_swapper_m_1367363193_0 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
extern "C"  void Array_Reverse_m_411674770_0 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Reverse_m_861619368_0 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array)
extern "C"  void Array_Sort_m_1300712642_0 (Object_t * __this /* static, unused */, Array_t * ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array)
extern "C"  void Array_Sort_m_1292818638_0 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Collections.IComparer)
extern "C"  void Array_Sort_m1417611156_0 (Object_t * __this /* static, unused */, Array_t * ___array, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32)
extern "C"  void Array_Sort_m_649200684_0 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Collections.IComparer)
extern "C"  void Array_Sort_m_198024484_0 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Sort_m_794456812_0 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_Sort_m_1971949474_0 (Object_t * __this /* static, unused */, Array_t * ___array, int32_t ___index, int32_t ___length, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Sort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_Sort_m_552183030_0 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___index, int32_t ___length, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::int_swapper(System.Int32,System.Int32)
extern "C"  void Array_int_swapper_m_1796337534_0 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::obj_swapper(System.Int32,System.Int32)
extern "C"  void Array_obj_swapper_m_2138685002_0 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::slow_swapper(System.Int32,System.Int32)
extern "C"  void Array_slow_swapper_m1728818032_0 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::double_swapper(System.Int32,System.Int32)
extern "C"  void Array_double_swapper_m1175307080_0 (Array_t * __this, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::new_gap(System.Int32)
extern "C"  int32_t Array_new_gap_m_356705078_0 (Object_t * __this /* static, unused */, int32_t ___gap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Double[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m2084527518_0 (Object_t * __this /* static, unused */, DoubleU5BU5D_t785289008_0* ___array, int32_t ___start, int32_t ___size, Swapper_t400183785_0 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Int32[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m_1318344289_0 (Object_t * __this /* static, unused */, Int32U5BU5D_t1496069209_0* ___array, int32_t ___start, int32_t ___size, Swapper_t400183785_0 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::combsort(System.Char[],System.Int32,System.Int32,System.Array/Swapper)
extern "C"  void Array_combsort_m_1808323727_0 (Object_t * __this /* static, unused */, CharU5BU5D_t2048601427_0* ___array, int32_t ___start, int32_t ___size, Swapper_t400183785_0 * ___swap_items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::qsort(System.Array,System.Array,System.Int32,System.Int32,System.Collections.IComparer)
extern "C"  void Array_qsort_m_1570650587_0 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___low0, int32_t ___high0, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::swap(System.Array,System.Array,System.Int32,System.Int32)
extern "C"  void Array_swap_m_1394971237_0 (Object_t * __this /* static, unused */, Array_t * ___keys, Array_t * ___items, int32_t ___i, int32_t ___j, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::compare(System.Object,System.Object,System.Collections.IComparer)
extern "C"  int32_t Array_compare_m1449679507_0 (Object_t * __this /* static, unused */, Object_t * ___value1, Object_t * ___value2, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
extern "C"  void Array_CopyTo_m_233933981_0 (Array_t * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::CopyTo(System.Array,System.Int64)
extern "C"  void Array_CopyTo_m1950502352_0 (Array_t * __this, Array_t * ___array, int64_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::ConstrainedCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_ConstrainedCopy_m1922927602_0 (Object_t * __this /* static, unused */, Array_t * ___sourceArray, int32_t ___sourceIndex, Array_t * ___destinationArray, int32_t ___destinationIndex, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;

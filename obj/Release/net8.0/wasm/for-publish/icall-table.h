#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
228,
240,
241,
242,
243,
244,
245,
246,
247,
248,
251,
252,
253,
426,
427,
428,
457,
458,
459,
479,
480,
481,
482,
599,
600,
601,
604,
643,
644,
645,
648,
650,
652,
654,
659,
667,
668,
669,
670,
671,
672,
673,
674,
675,
676,
677,
678,
679,
680,
681,
682,
683,
685,
686,
687,
688,
689,
690,
691,
783,
784,
785,
786,
787,
788,
789,
790,
791,
792,
793,
794,
795,
796,
797,
798,
799,
801,
802,
803,
804,
805,
806,
807,
874,
875,
943,
950,
953,
955,
960,
961,
963,
964,
968,
969,
971,
973,
974,
977,
978,
979,
982,
984,
987,
989,
991,
1000,
1067,
1069,
1071,
1081,
1082,
1083,
1084,
1086,
1093,
1094,
1095,
1096,
1097,
1105,
1106,
1107,
1111,
1112,
1114,
1118,
1119,
1120,
1404,
1594,
1595,
9618,
9619,
9621,
9622,
9623,
9624,
9625,
9627,
9629,
9631,
9632,
9643,
9645,
9650,
9652,
9654,
9656,
9707,
9708,
9710,
9711,
9712,
9713,
9714,
9716,
9718,
10793,
10797,
10799,
10800,
10801,
10802,
11063,
11064,
11065,
11066,
11084,
11085,
11086,
11088,
11131,
11192,
11194,
11196,
11205,
11206,
11207,
11208,
11209,
11646,
11647,
11652,
11653,
11687,
11707,
11714,
11721,
11732,
11736,
11761,
11841,
11843,
11854,
11856,
11857,
11858,
11865,
11879,
11899,
11900,
11908,
11910,
11917,
11918,
11921,
11923,
11928,
11934,
11935,
11942,
11944,
11956,
11959,
11960,
11961,
11972,
11981,
11987,
11988,
11989,
11991,
11992,
12009,
12011,
12025,
12046,
12047,
12072,
12077,
12107,
12108,
12649,
12663,
12758,
12759,
12974,
12975,
12982,
12983,
12984,
12990,
13087,
13588,
13589,
14039,
14040,
14045,
14055,
14985,
15006,
15008,
15010,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_IsValueOfElementTypeInternal (int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_InitializeInternal_raw (int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 228,
ves_icall_System_Array_InternalCreate,
// token 240,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 241,
ves_icall_System_Array_IsValueOfElementTypeInternal,
// token 242,
ves_icall_System_Array_CanChangePrimitive,
// token 243,
ves_icall_System_Array_FastCopy,
// token 244,
ves_icall_System_Array_GetLengthInternal_raw,
// token 245,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 246,
ves_icall_System_Array_GetGenericValue_icall,
// token 247,
ves_icall_System_Array_GetValueImpl_raw,
// token 248,
ves_icall_System_Array_SetGenericValue_icall,
// token 251,
ves_icall_System_Array_SetValueImpl_raw,
// token 252,
ves_icall_System_Array_InitializeInternal_raw,
// token 253,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 426,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 427,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 428,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 457,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 458,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 459,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 479,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 480,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 481,
ves_icall_System_Enum_InternalGetCorElementType,
// token 482,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 599,
ves_icall_System_Environment_get_ProcessorCount,
// token 600,
ves_icall_System_Environment_get_TickCount,
// token 601,
ves_icall_System_Environment_get_TickCount64,
// token 604,
ves_icall_System_Environment_FailFast_raw,
// token 643,
ves_icall_System_GC_GetCollectionCount,
// token 644,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 645,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 648,
ves_icall_System_GC_SuppressFinalize_raw,
// token 650,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 652,
ves_icall_System_GC_GetGCMemoryInfo,
// token 654,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 659,
ves_icall_System_Object_MemberwiseClone_raw,
// token 667,
ves_icall_System_Math_Acos,
// token 668,
ves_icall_System_Math_Acosh,
// token 669,
ves_icall_System_Math_Asin,
// token 670,
ves_icall_System_Math_Asinh,
// token 671,
ves_icall_System_Math_Atan,
// token 672,
ves_icall_System_Math_Atan2,
// token 673,
ves_icall_System_Math_Atanh,
// token 674,
ves_icall_System_Math_Cbrt,
// token 675,
ves_icall_System_Math_Ceiling,
// token 676,
ves_icall_System_Math_Cos,
// token 677,
ves_icall_System_Math_Cosh,
// token 678,
ves_icall_System_Math_Exp,
// token 679,
ves_icall_System_Math_Floor,
// token 680,
ves_icall_System_Math_Log,
// token 681,
ves_icall_System_Math_Log10,
// token 682,
ves_icall_System_Math_Pow,
// token 683,
ves_icall_System_Math_Sin,
// token 685,
ves_icall_System_Math_Sinh,
// token 686,
ves_icall_System_Math_Sqrt,
// token 687,
ves_icall_System_Math_Tan,
// token 688,
ves_icall_System_Math_Tanh,
// token 689,
ves_icall_System_Math_FusedMultiplyAdd,
// token 690,
ves_icall_System_Math_Log2,
// token 691,
ves_icall_System_Math_ModF,
// token 783,
ves_icall_System_MathF_Acos,
// token 784,
ves_icall_System_MathF_Acosh,
// token 785,
ves_icall_System_MathF_Asin,
// token 786,
ves_icall_System_MathF_Asinh,
// token 787,
ves_icall_System_MathF_Atan,
// token 788,
ves_icall_System_MathF_Atan2,
// token 789,
ves_icall_System_MathF_Atanh,
// token 790,
ves_icall_System_MathF_Cbrt,
// token 791,
ves_icall_System_MathF_Ceiling,
// token 792,
ves_icall_System_MathF_Cos,
// token 793,
ves_icall_System_MathF_Cosh,
// token 794,
ves_icall_System_MathF_Exp,
// token 795,
ves_icall_System_MathF_Floor,
// token 796,
ves_icall_System_MathF_Log,
// token 797,
ves_icall_System_MathF_Log10,
// token 798,
ves_icall_System_MathF_Pow,
// token 799,
ves_icall_System_MathF_Sin,
// token 801,
ves_icall_System_MathF_Sinh,
// token 802,
ves_icall_System_MathF_Sqrt,
// token 803,
ves_icall_System_MathF_Tan,
// token 804,
ves_icall_System_MathF_Tanh,
// token 805,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 806,
ves_icall_System_MathF_Log2,
// token 807,
ves_icall_System_MathF_ModF,
// token 874,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 875,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 943,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 950,
ves_icall_RuntimeType_make_array_type_raw,
// token 953,
ves_icall_RuntimeType_make_byref_type_raw,
// token 955,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 960,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 961,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 963,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 964,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 968,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 969,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 971,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 973,
ves_icall_System_RuntimeType_getFullName_raw,
// token 974,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 977,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 978,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 979,
ves_icall_RuntimeType_GetFields_native_raw,
// token 982,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 984,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 987,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 989,
ves_icall_RuntimeType_GetName_raw,
// token 991,
ves_icall_RuntimeType_GetNamespace_raw,
// token 1000,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 1067,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 1069,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 1071,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 1081,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 1082,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 1083,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 1084,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 1086,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 1093,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 1094,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1095,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1096,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1097,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1105,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1106,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 1107,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1111,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 1112,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1114,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1118,
ves_icall_System_String_FastAllocateString_raw,
// token 1119,
ves_icall_System_String_InternalIsInterned_raw,
// token 1120,
ves_icall_System_String_InternalIntern_raw,
// token 1404,
ves_icall_System_Type_internal_from_handle_raw,
// token 1594,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1595,
ves_icall_System_ValueType_Equals_raw,
// token 9618,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 9619,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 9621,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 9622,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 9623,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 9624,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 9625,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 9627,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 9629,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 9631,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 9632,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 9643,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 9645,
mono_monitor_exit_icall_raw,
// token 9650,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 9652,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 9654,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 9656,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 9707,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 9708,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 9710,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 9711,
ves_icall_System_Threading_Thread_GetState_raw,
// token 9712,
ves_icall_System_Threading_Thread_SetState_raw,
// token 9713,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 9714,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 9716,
ves_icall_System_Threading_Thread_YieldInternal,
// token 9718,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 10793,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 10797,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 10799,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 10800,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 10801,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 10802,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 11063,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 11064,
ves_icall_System_GCHandle_InternalFree_raw,
// token 11065,
ves_icall_System_GCHandle_InternalGet_raw,
// token 11066,
ves_icall_System_GCHandle_InternalSet_raw,
// token 11084,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 11085,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 11086,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 11088,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 11131,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 11192,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 11194,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 11196,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 11205,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 11206,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 11207,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 11208,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 11209,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 11646,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 11647,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 11652,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 11653,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 11687,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 11707,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 11714,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 11721,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 11732,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 11736,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 11761,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 11841,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 11843,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 11854,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 11856,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 11857,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 11858,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 11865,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 11879,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 11899,
ves_icall_reflection_get_token_raw,
// token 11900,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 11908,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 11910,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 11917,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 11918,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 11921,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 11923,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 11928,
ves_icall_reflection_get_token_raw,
// token 11934,
ves_icall_get_method_info_raw,
// token 11935,
ves_icall_get_method_attributes,
// token 11942,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 11944,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 11956,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 11959,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 11960,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 11961,
ves_icall_reflection_get_token_raw,
// token 11972,
ves_icall_InternalInvoke_raw,
// token 11981,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 11987,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 11988,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 11989,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 11991,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 11992,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 12009,
ves_icall_InvokeClassConstructor_raw,
// token 12011,
ves_icall_InternalInvoke_raw,
// token 12025,
ves_icall_reflection_get_token_raw,
// token 12046,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 12047,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 12072,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 12077,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 12107,
ves_icall_reflection_get_token_raw,
// token 12108,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 12649,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 12663,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 12758,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 12759,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 12974,
ves_icall_ModuleBuilder_basic_init_raw,
// token 12975,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 12982,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 12983,
ves_icall_ModuleBuilder_getToken_raw,
// token 12984,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 12990,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 13087,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 13588,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 13589,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 14039,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 14040,
ves_icall_System_Diagnostics_Debugger_Log,
// token 14045,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 14055,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 14985,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 15006,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 15008,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 15010,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
0,
4,
4,
0,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
0,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
};

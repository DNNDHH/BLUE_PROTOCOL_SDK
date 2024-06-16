#pragma once

 

// Package: CraftResultWeaponMulti

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.ExecuteUbergraph_CraftResultWeaponMulti
// 0x0170 (0x0170 - 0x0000)
struct CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_683D[0x2];                                     // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_683E[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCraftMasterData                       K2Node_CustomEvent_Recepi;                         // 0x0020(0x0088)()
	TArray<class FString>                         K2Node_CustomEvent_UIDs;                           // 0x00A8(0x0010)(ConstParm, ReferenceParm)
	int32                                         K2Node_CustomEvent_StorageNo;                      // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_683F[0x4];                                     // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  K2Node_CustomEvent_Criticals;                      // 0x00C0(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_Array_Get_Item;                           // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Array_IsValidIndex_ReturnValue;           // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6840[0x5];                                     // 0x00D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Array_Get_Item_1;                         // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x00E8(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0100(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6841[0x7];                                     // 0x0101(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0108(0x0018)()
	class FString                                 CallFunc_GetNameText_ReturnValue;                  // 0x0120(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0130(0x0018)()
	bool                                          Temp_bool_Variable_3;                              // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6842[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCraftedWeaponLIstitem_C*               CallFunc_Create_ReturnValue;                       // 0x0150(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Select_Default_1;                           // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6843[0x7];                                     // 0x0159(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0160(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                K2Node_Select_Default_2;                           // 0x0168(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti) == 0x000008, "Wrong alignment on CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti");
static_assert(sizeof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti) == 0x000170, "Wrong size on CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, EntryPoint) == 0x000000, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::EntryPoint' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, Temp_bool_Variable) == 0x000004, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, Temp_bool_Variable_1) == 0x000005, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, Temp_int_Variable) == 0x000008, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, Temp_int_Variable_1) == 0x00000C, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, Temp_bool_Variable_2) == 0x000010, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, Temp_int_Array_Index_Variable) == 0x000014, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, K2Node_CustomEvent_Recepi) == 0x000020, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::K2Node_CustomEvent_Recepi' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, K2Node_CustomEvent_UIDs) == 0x0000A8, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::K2Node_CustomEvent_UIDs' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, K2Node_CustomEvent_StorageNo) == 0x0000B8, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::K2Node_CustomEvent_StorageNo' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, K2Node_CustomEvent_Criticals) == 0x0000C0, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::K2Node_CustomEvent_Criticals' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Array_Get_Item) == 0x0000D0, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Array_IsValidIndex_ReturnValue) == 0x0000D1, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Array_IsValidIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000D2, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Array_Get_Item_1) == 0x0000D8, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, K2Node_Select_Default) == 0x0000E8, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Array_Length_ReturnValue) == 0x0000EC, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_GetTextFromAsset_ReturnValue) == 0x0000F0, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Less_IntInt_ReturnValue) == 0x000100, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Conv_StringToText_ReturnValue) == 0x000108, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_GetNameText_ReturnValue) == 0x000120, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_GetNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000130, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, Temp_bool_Variable_3) == 0x000148, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::Temp_bool_Variable_3' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_Create_ReturnValue) == 0x000150, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, K2Node_Select_Default_1) == 0x000158, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, CallFunc_AddChild_ReturnValue) == 0x000160, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::CallFunc_AddChild_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti, K2Node_Select_Default_2) == 0x000168, "Member 'CraftResultWeaponMulti_C_ExecuteUbergraph_CraftResultWeaponMulti::K2Node_Select_Default_2' has a wrong offset!");

// Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.Set Result
// 0x00B0 (0x00B0 - 0x0000)
struct CraftResultWeaponMulti_C_Set_Result final
{
public:
	struct FCraftMasterData                       Recepi;                                            // 0x0000(0x0088)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class FString>                         Uids;                                              // 0x0088(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         StorageNo;                                         // 0x0098(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6844[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  Criticals;                                         // 0x00A0(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CraftResultWeaponMulti_C_Set_Result) == 0x000008, "Wrong alignment on CraftResultWeaponMulti_C_Set_Result");
static_assert(sizeof(CraftResultWeaponMulti_C_Set_Result) == 0x0000B0, "Wrong size on CraftResultWeaponMulti_C_Set_Result");
static_assert(offsetof(CraftResultWeaponMulti_C_Set_Result, Recepi) == 0x000000, "Member 'CraftResultWeaponMulti_C_Set_Result::Recepi' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_Set_Result, Uids) == 0x000088, "Member 'CraftResultWeaponMulti_C_Set_Result::Uids' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_Set_Result, StorageNo) == 0x000098, "Member 'CraftResultWeaponMulti_C_Set_Result::StorageNo' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_Set_Result, Criticals) == 0x0000A0, "Member 'CraftResultWeaponMulti_C_Set_Result::Criticals' has a wrong offset!");

// Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.UpdateCriticalCount
// 0x00D8 (0x00D8 - 0x0000)
struct CraftResultWeaponMulti_C_UpdateCriticalCount final
{
public:
	TArray<bool>                                  CriticalCount;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         TmpCount;                                          // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6845[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<bool>                                  TmpCriticalCount;                                  // 0x0018(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0088(0x0018)()
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A0(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0018)()
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Get_Item;                           // 0x00CC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6846[0x3];                                     // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CraftResultWeaponMulti_C_UpdateCriticalCount) == 0x000008, "Wrong alignment on CraftResultWeaponMulti_C_UpdateCriticalCount");
static_assert(sizeof(CraftResultWeaponMulti_C_UpdateCriticalCount) == 0x0000D8, "Wrong size on CraftResultWeaponMulti_C_UpdateCriticalCount");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CriticalCount) == 0x000000, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CriticalCount' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, TmpCount) == 0x000010, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::TmpCount' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, TmpCriticalCount) == 0x000018, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::TmpCriticalCount' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, Temp_int_Loop_Counter_Variable) == 0x000028, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, Temp_int_Array_Index_Variable) == 0x000030, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, Temp_int_Variable) == 0x000034, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CallFunc_GetTextFromAsset_ReturnValue) == 0x000038, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CallFunc_Conv_StringToText_ReturnValue) == 0x000088, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, K2Node_MakeArray_Array) == 0x0000A0, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000C8, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CallFunc_Array_Get_Item) == 0x0000CC, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CallFunc_Array_Length_ReturnValue) == 0x0000D0, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CraftResultWeaponMulti_C_UpdateCriticalCount, CallFunc_Less_IntInt_ReturnValue) == 0x0000D4, "Member 'CraftResultWeaponMulti_C_UpdateCriticalCount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function CraftResultWeaponMulti.CraftResultWeaponMulti_C.PlayAnimIn
// 0x0008 (0x0008 - 0x0000)
struct CraftResultWeaponMulti_C_PlayAnimIn final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CraftResultWeaponMulti_C_PlayAnimIn) == 0x000008, "Wrong alignment on CraftResultWeaponMulti_C_PlayAnimIn");
static_assert(sizeof(CraftResultWeaponMulti_C_PlayAnimIn) == 0x000008, "Wrong size on CraftResultWeaponMulti_C_PlayAnimIn");
static_assert(offsetof(CraftResultWeaponMulti_C_PlayAnimIn, CallFunc_PlayAnimationForward_ReturnValue) == 0x000000, "Member 'CraftResultWeaponMulti_C_PlayAnimIn::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}


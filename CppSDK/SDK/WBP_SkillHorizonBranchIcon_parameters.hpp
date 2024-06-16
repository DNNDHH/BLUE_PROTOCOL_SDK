#pragma once

 

// Package: WBP_SkillHorizonBranchIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature) == 0x000008, "Wrong size on WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature, SkillId) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature, SkillLV) == 0x000004, "Member 'WBP_SkillHorizonBranchIcon_C_OnClick__DelegateSignature::SkillLV' has a wrong offset!");

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.ExecuteUbergraph_WBP_SkillHorizonBranchIcon
// 0x0090 (0x0090 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E12[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E13[0x2];                                     // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_SkillID_4;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SkillLv_4;              // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SkillID_3;              // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SkillLv_3;              // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SkillID_2;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SkillLv_2;              // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FCharaSkillMasteryInfo>         K2Node_CustomEvent_InSkillList;                    // 0x0038(0x0010)(ConstParm, ReferenceParm)
	ESkillTreeHorizonBranchType                   K2Node_CustomEvent_Brunch;                         // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E14[0x2];                                     // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_ComponentBoundEvent_SkillID_1;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SkillLv_1;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SkillID;                // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_ComponentBoundEvent_SkillLv;                // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchInteger_CmpSuccess;                   // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E15[0x7];                                     // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetSwitcher*                        CallFunc_Array_Get_Item;                           // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E16[0x3];                                     // 0x0075(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidgetSwitcher*>                K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E17[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon) == 0x000008, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon) == 0x000090, "Wrong size on WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, EntryPoint) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, Temp_bool_Variable) == 0x000004, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, Temp_int_Variable) == 0x000008, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_Event_IsDesignTime) == 0x00001C, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_SwitchEnum_CmpSuccess) == 0x00001D, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillID_4) == 0x000020, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillID_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillLv_4) == 0x000024, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillLv_4' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillID_3) == 0x000028, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillID_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillLv_3) == 0x00002C, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillLv_3' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillID_2) == 0x000030, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillID_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillLv_2) == 0x000034, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillLv_2' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_CustomEvent_InSkillList) == 0x000038, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_CustomEvent_InSkillList' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_CustomEvent_Brunch) == 0x000048, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_CustomEvent_Brunch' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000049, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillID_1) == 0x00004C, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillID_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillLv_1) == 0x000050, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillLv_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillID) == 0x000054, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillID' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_ComponentBoundEvent_SkillLv) == 0x000058, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_ComponentBoundEvent_SkillLv' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, CallFunc_Array_Length_ReturnValue) == 0x00005C, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_SwitchInteger_CmpSuccess) == 0x000060, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_SwitchInteger_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, CallFunc_Array_Get_Item) == 0x000068, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, CallFunc_Array_Length_ReturnValue_1) == 0x000070, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, CallFunc_Less_IntInt_ReturnValue) == 0x000074, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_MakeArray_Array) == 0x000078, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000088, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon, K2Node_Select_Default) == 0x00008C, "Member 'WBP_SkillHorizonBranchIcon_C_ExecuteUbergraph_WBP_SkillHorizonBranchIcon::K2Node_Select_Default' has a wrong offset!");

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature) == 0x000008, "Wrong size on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature, SkillId) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature, SkillLV) == 0x000004, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_K2Node_ComponentBoundEvent_14_OnClick__DelegateSignature::SkillLV' has a wrong offset!");

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature) == 0x000008, "Wrong size on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature, SkillId) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature, SkillLV) == 0x000004, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_1_1_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature::SkillLV' has a wrong offset!");

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.Init
// 0x0018 (0x0018 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_Init final
{
public:
	TArray<struct FCharaSkillMasteryInfo>         InSkillList;                                       // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESkillTreeHorizonBranchType                   Brunch;                                            // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_Init) == 0x000008, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_Init");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_Init) == 0x000018, "Wrong size on WBP_SkillHorizonBranchIcon_C_Init");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_Init, InSkillList) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_Init::InSkillList' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_Init, Brunch) == 0x000010, "Member 'WBP_SkillHorizonBranchIcon_C_Init::Brunch' has a wrong offset!");

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature) == 0x000008, "Wrong size on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature, SkillId) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature, SkillLV) == 0x000004, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_206_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature::SkillLV' has a wrong offset!");

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong size on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, SkillId) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, SkillLV) == 0x000004, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_110_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::SkillLV' has a wrong offset!");

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000004, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, SkillId) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::SkillId' has a wrong offset!");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, SkillLV) == 0x000004, "Member 'WBP_SkillHorizonBranchIcon_C_BndEvt__WBP_SkillHorizonBranchIcon_WBP_SkillIconSwitcher_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::SkillLV' has a wrong offset!");

// Function WBP_SkillHorizonBranchIcon.WBP_SkillHorizonBranchIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct WBP_SkillHorizonBranchIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(WBP_SkillHorizonBranchIcon_C_PreConstruct) == 0x000001, "Wrong alignment on WBP_SkillHorizonBranchIcon_C_PreConstruct");
static_assert(sizeof(WBP_SkillHorizonBranchIcon_C_PreConstruct) == 0x000001, "Wrong size on WBP_SkillHorizonBranchIcon_C_PreConstruct");
static_assert(offsetof(WBP_SkillHorizonBranchIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'WBP_SkillHorizonBranchIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

}


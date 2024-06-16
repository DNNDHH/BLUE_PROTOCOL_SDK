#pragma once

 

// Package: StackBPerkRarityView

#include "Basic.hpp"


namespace SDK::Params
{

// Function StackBPerkRarityView.StackBPerkRarityView_C.ExecuteUbergraph_StackBPerkRarityView
// 0x0038 (0x0038 - 0x0000)
struct StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6945[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStackBPerkRarityItem_C*                K2Node_DynamicCast_AsStack_BPerk_Rarity_Item;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6946[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRarity;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView) == 0x000008, "Wrong alignment on StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView");
static_assert(sizeof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView) == 0x000038, "Wrong size on StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, EntryPoint) == 0x000000, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::EntryPoint' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, Temp_int_Variable) == 0x000008, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, K2Node_DynamicCast_AsStack_BPerk_Rarity_Item) == 0x000020, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::K2Node_DynamicCast_AsStack_BPerk_Rarity_Item' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, K2Node_CustomEvent_InRarity) == 0x000030, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::K2Node_CustomEvent_InRarity' has a wrong offset!");
static_assert(offsetof(StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'StackBPerkRarityView_C_ExecuteUbergraph_StackBPerkRarityView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function StackBPerkRarityView.StackBPerkRarityView_C.SetRarity
// 0x0004 (0x0004 - 0x0000)
struct StackBPerkRarityView_C_SetRarity final
{
public:
	int32                                         InRarity;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StackBPerkRarityView_C_SetRarity) == 0x000004, "Wrong alignment on StackBPerkRarityView_C_SetRarity");
static_assert(sizeof(StackBPerkRarityView_C_SetRarity) == 0x000004, "Wrong size on StackBPerkRarityView_C_SetRarity");
static_assert(offsetof(StackBPerkRarityView_C_SetRarity, InRarity) == 0x000000, "Member 'StackBPerkRarityView_C_SetRarity::InRarity' has a wrong offset!");

}


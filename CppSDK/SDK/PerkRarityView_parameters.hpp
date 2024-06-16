#pragma once

 

// Package: PerkRarityView

#include "Basic.hpp"


namespace SDK::Params
{

// Function PerkRarityView.PerkRarityView_C.ExecuteUbergraph_PerkRarityView
// 0x0060 (0x0060 - 0x0000)
struct PerkRarityView_C_ExecuteUbergraph_PerkRarityView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D0C[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPerkRarityItem_C*                      K2Node_DynamicCast_AsPerk_Rarity_Item;             // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D0D[0x3];                                     // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRarity;                       // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetChildrenCount_ReturnValue_1;           // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D0E[0x3];                                     // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D0F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue_1;                 // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPerkRarityItem_C*                      K2Node_DynamicCast_AsPerk_Rarity_Item_1;           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D10[0x2];                                     // 0x005A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView) == 0x000008, "Wrong alignment on PerkRarityView_C_ExecuteUbergraph_PerkRarityView");
static_assert(sizeof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView) == 0x000060, "Wrong size on PerkRarityView_C_ExecuteUbergraph_PerkRarityView");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, EntryPoint) == 0x000000, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::EntryPoint' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_GetChildrenCount_ReturnValue) == 0x000004, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, Temp_int_Variable) == 0x000008, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_Subtract_IntInt_ReturnValue) == 0x00000C, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000018, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, K2Node_DynamicCast_AsPerk_Rarity_Item) == 0x000020, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::K2Node_DynamicCast_AsPerk_Rarity_Item' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, K2Node_CustomEvent_InRarity) == 0x000030, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::K2Node_CustomEvent_InRarity' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_GetChildrenCount_ReturnValue_1) == 0x000034, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_GetChildrenCount_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x00003C, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, Temp_int_Variable_1) == 0x000040, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_GetChildAt_ReturnValue_1) == 0x000048, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_GetChildAt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, K2Node_DynamicCast_AsPerk_Rarity_Item_1) == 0x000050, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::K2Node_DynamicCast_AsPerk_Rarity_Item_1' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, K2Node_DynamicCast_bSuccess_1) == 0x000058, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_LessEqual_IntInt_ReturnValue_1) == 0x000059, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_LessEqual_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PerkRarityView_C_ExecuteUbergraph_PerkRarityView, CallFunc_Add_IntInt_ReturnValue_1) == 0x00005C, "Member 'PerkRarityView_C_ExecuteUbergraph_PerkRarityView::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");

// Function PerkRarityView.PerkRarityView_C.SetRarity
// 0x0004 (0x0004 - 0x0000)
struct PerkRarityView_C_SetRarity final
{
public:
	int32                                         InRarity;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PerkRarityView_C_SetRarity) == 0x000004, "Wrong alignment on PerkRarityView_C_SetRarity");
static_assert(sizeof(PerkRarityView_C_SetRarity) == 0x000004, "Wrong size on PerkRarityView_C_SetRarity");
static_assert(offsetof(PerkRarityView_C_SetRarity, InRarity) == 0x000000, "Member 'PerkRarityView_C_SetRarity::InRarity' has a wrong offset!");

}


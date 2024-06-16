#pragma once

 

// Package: EquipLevelView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function EquipLevelView.EquipLevelView_C.ExecuteUbergraph_EquipLevelView
// 0x0140 (0x0140 - 0x0000)
struct EquipLevelView_C_ExecuteUbergraph_EquipLevelView final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D2F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           K2Node_CustomEvent_ItemData;                       // 0x0008(0x0118)()
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0120(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D30[0x4];                                     // 0x0124(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0128(0x0018)()
};
static_assert(alignof(EquipLevelView_C_ExecuteUbergraph_EquipLevelView) == 0x000008, "Wrong alignment on EquipLevelView_C_ExecuteUbergraph_EquipLevelView");
static_assert(sizeof(EquipLevelView_C_ExecuteUbergraph_EquipLevelView) == 0x000140, "Wrong size on EquipLevelView_C_ExecuteUbergraph_EquipLevelView");
static_assert(offsetof(EquipLevelView_C_ExecuteUbergraph_EquipLevelView, EntryPoint) == 0x000000, "Member 'EquipLevelView_C_ExecuteUbergraph_EquipLevelView::EntryPoint' has a wrong offset!");
static_assert(offsetof(EquipLevelView_C_ExecuteUbergraph_EquipLevelView, K2Node_CustomEvent_ItemData) == 0x000008, "Member 'EquipLevelView_C_ExecuteUbergraph_EquipLevelView::K2Node_CustomEvent_ItemData' has a wrong offset!");
static_assert(offsetof(EquipLevelView_C_ExecuteUbergraph_EquipLevelView, CallFunc_GetItemLevel_ReturnValue) == 0x000120, "Member 'EquipLevelView_C_ExecuteUbergraph_EquipLevelView::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(EquipLevelView_C_ExecuteUbergraph_EquipLevelView, CallFunc_Conv_IntToText_ReturnValue) == 0x000128, "Member 'EquipLevelView_C_ExecuteUbergraph_EquipLevelView::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

// Function EquipLevelView.EquipLevelView_C.SetOwnItemData
// 0x0118 (0x0118 - 0x0000)
struct EquipLevelView_C_SetOwnItemData final
{
public:
	struct FOwnItemInfo                           ItemData;                                          // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(EquipLevelView_C_SetOwnItemData) == 0x000008, "Wrong alignment on EquipLevelView_C_SetOwnItemData");
static_assert(sizeof(EquipLevelView_C_SetOwnItemData) == 0x000118, "Wrong size on EquipLevelView_C_SetOwnItemData");
static_assert(offsetof(EquipLevelView_C_SetOwnItemData, ItemData) == 0x000000, "Member 'EquipLevelView_C_SetOwnItemData::ItemData' has a wrong offset!");

}


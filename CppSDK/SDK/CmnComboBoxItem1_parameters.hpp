#pragma once

 

// Package: CmnComboBoxItem1

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function CmnComboBoxItem1.CmnComboBoxItem1_C.ExecuteUbergraph_CmnComboBoxItem1
// 0x0018 (0x0018 - 0x0000)
struct CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_909D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1) == 0x000008, "Wrong alignment on CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1");
static_assert(sizeof(CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1) == 0x000018, "Wrong size on CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1");
static_assert(offsetof(CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1, EntryPoint) == 0x000000, "Member 'CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1::EntryPoint' has a wrong offset!");
static_assert(offsetof(CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1, CallFunc_MakeVector2D_ReturnValue) == 0x000010, "Member 'CmnComboBoxItem1_C_ExecuteUbergraph_CmnComboBoxItem1::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");

}


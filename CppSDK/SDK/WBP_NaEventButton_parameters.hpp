#pragma once

 

// Package: WBP_NaEventButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function WBP_NaEventButton.WBP_NaEventButton_C.ExecuteUbergraph_WBP_NaEventButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D67[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommandMenu_C*                         K2Node_CustomEvent_Owner;                          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton) == 0x000008, "Wrong alignment on WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton");
static_assert(sizeof(WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton) == 0x000010, "Wrong size on WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton");
static_assert(offsetof(WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton, EntryPoint) == 0x000000, "Member 'WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton, K2Node_CustomEvent_Owner) == 0x000008, "Member 'WBP_NaEventButton_C_ExecuteUbergraph_WBP_NaEventButton::K2Node_CustomEvent_Owner' has a wrong offset!");

// Function WBP_NaEventButton.WBP_NaEventButton_C.Init
// 0x0008 (0x0008 - 0x0000)
struct WBP_NaEventButton_C_Init final
{
public:
	class UCommandMenu_C*                         Owner;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_NaEventButton_C_Init) == 0x000008, "Wrong alignment on WBP_NaEventButton_C_Init");
static_assert(sizeof(WBP_NaEventButton_C_Init) == 0x000008, "Wrong size on WBP_NaEventButton_C_Init");
static_assert(offsetof(WBP_NaEventButton_C_Init, Owner) == 0x000000, "Member 'WBP_NaEventButton_C_Init::Owner' has a wrong offset!");

}


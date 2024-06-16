#pragma once

 

// Package: SmasherBoostCartridgeIcon

#include "Basic.hpp"

#include "ECartridgeType_structs.hpp"


namespace SDK::Params
{

// Function SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C.ExecuteUbergraph_SmasherBoostCartridgeIcon
// 0x0008 (0x0008 - 0x0000)
struct SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECartridgeType                                K2Node_CustomEvent_eCartridgeType;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon) == 0x000004, "Wrong alignment on SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon");
static_assert(sizeof(SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon) == 0x000008, "Wrong size on SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon");
static_assert(offsetof(SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon, EntryPoint) == 0x000000, "Member 'SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon, K2Node_CustomEvent_eCartridgeType) == 0x000004, "Member 'SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon::K2Node_CustomEvent_eCartridgeType' has a wrong offset!");
static_assert(offsetof(SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon, K2Node_SwitchEnum_CmpSuccess) == 0x000005, "Member 'SmasherBoostCartridgeIcon_C_ExecuteUbergraph_SmasherBoostCartridgeIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function SmasherBoostCartridgeIcon.SmasherBoostCartridgeIcon_C.SetCartridge
// 0x0001 (0x0001 - 0x0000)
struct SmasherBoostCartridgeIcon_C_SetCartridge final
{
public:
	ECartridgeType                                ECartridgeType;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SmasherBoostCartridgeIcon_C_SetCartridge) == 0x000001, "Wrong alignment on SmasherBoostCartridgeIcon_C_SetCartridge");
static_assert(sizeof(SmasherBoostCartridgeIcon_C_SetCartridge) == 0x000001, "Wrong size on SmasherBoostCartridgeIcon_C_SetCartridge");
static_assert(offsetof(SmasherBoostCartridgeIcon_C_SetCartridge, ECartridgeType) == 0x000000, "Member 'SmasherBoostCartridgeIcon_C_SetCartridge::ECartridgeType' has a wrong offset!");

}


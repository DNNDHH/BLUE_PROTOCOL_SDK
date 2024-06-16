#pragma once

 

// Package: ProbabilityDisplay_WeaponTuningTopItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function ProbabilityDisplay_WeaponTuningTopItem.ProbabilityDisplay_WeaponTuningTopItem_C.ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem
// 0x0020 (0x0020 - 0x0000)
struct ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D71[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0008(0x0018)()
};
static_assert(alignof(ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem) == 0x000008, "Wrong alignment on ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem");
static_assert(sizeof(ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem) == 0x000020, "Wrong size on ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem");
static_assert(offsetof(ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem, EntryPoint) == 0x000000, "Member 'ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem, CallFunc_Conv_StringToText_ReturnValue) == 0x000008, "Member 'ProbabilityDisplay_WeaponTuningTopItem_C_ExecuteUbergraph_ProbabilityDisplay_WeaponTuningTopItem::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}


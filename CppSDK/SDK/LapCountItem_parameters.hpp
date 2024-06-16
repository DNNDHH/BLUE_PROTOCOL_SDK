#pragma once

 

// Package: LapCountItem

#include "Basic.hpp"


namespace SDK::Params
{

// Function LapCountItem.LapCountItem_C.SetCount
// 0x0020 (0x0020 - 0x0000)
struct LapCountItem_C_SetCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_928E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(LapCountItem_C_SetCount) == 0x000008, "Wrong alignment on LapCountItem_C_SetCount");
static_assert(sizeof(LapCountItem_C_SetCount) == 0x000020, "Wrong size on LapCountItem_C_SetCount");
static_assert(offsetof(LapCountItem_C_SetCount, Count) == 0x000000, "Member 'LapCountItem_C_SetCount::Count' has a wrong offset!");
static_assert(offsetof(LapCountItem_C_SetCount, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'LapCountItem_C_SetCount::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}


#pragma once

 

// Package: SBButton

#include "Basic.hpp"


namespace SDK::Params
{

// Function SBButton.SBButton_C.ExecuteUbergraph_SBButton
// 0x0004 (0x0004 - 0x0000)
struct SBButton_C_ExecuteUbergraph_SBButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SBButton_C_ExecuteUbergraph_SBButton) == 0x000004, "Wrong alignment on SBButton_C_ExecuteUbergraph_SBButton");
static_assert(sizeof(SBButton_C_ExecuteUbergraph_SBButton) == 0x000004, "Wrong size on SBButton_C_ExecuteUbergraph_SBButton");
static_assert(offsetof(SBButton_C_ExecuteUbergraph_SBButton, EntryPoint) == 0x000000, "Member 'SBButton_C_ExecuteUbergraph_SBButton::EntryPoint' has a wrong offset!");

}


#pragma once

 

// Package: IconNamedEnemy

#include "Basic.hpp"


namespace SDK::Params
{

// Function IconNamedEnemy.IconNamedEnemy_C.OnSetInside
// 0x0010 (0x0010 - 0x0000)
struct IconNamedEnemy_C_OnSetInside final
{
public:
	bool                                          IsInSide;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_708C[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                K2Node_Select_Default;                             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(IconNamedEnemy_C_OnSetInside) == 0x000008, "Wrong alignment on IconNamedEnemy_C_OnSetInside");
static_assert(sizeof(IconNamedEnemy_C_OnSetInside) == 0x000010, "Wrong size on IconNamedEnemy_C_OnSetInside");
static_assert(offsetof(IconNamedEnemy_C_OnSetInside, IsInSide) == 0x000000, "Member 'IconNamedEnemy_C_OnSetInside::IsInSide' has a wrong offset!");
static_assert(offsetof(IconNamedEnemy_C_OnSetInside, Temp_bool_Variable) == 0x000001, "Member 'IconNamedEnemy_C_OnSetInside::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(IconNamedEnemy_C_OnSetInside, K2Node_Select_Default) == 0x000008, "Member 'IconNamedEnemy_C_OnSetInside::K2Node_Select_Default' has a wrong offset!");

}


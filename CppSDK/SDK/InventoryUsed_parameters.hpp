#pragma once

 

// Package: InventoryUsed

#include "Basic.hpp"


namespace SDK::Params
{

// Function InventoryUsed.InventoryUsed_C.SetUsed
// 0x0001 (0x0001 - 0x0000)
struct InventoryUsed_C_SetUsed final
{
public:
	bool                                          bUsed;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(InventoryUsed_C_SetUsed) == 0x000001, "Wrong alignment on InventoryUsed_C_SetUsed");
static_assert(sizeof(InventoryUsed_C_SetUsed) == 0x000001, "Wrong size on InventoryUsed_C_SetUsed");
static_assert(offsetof(InventoryUsed_C_SetUsed, bUsed) == 0x000000, "Member 'InventoryUsed_C_SetUsed::bUsed' has a wrong offset!");

}


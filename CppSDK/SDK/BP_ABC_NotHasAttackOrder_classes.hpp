#pragma once

 

// Package: BP_ABC_NotHasAttackOrder

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ABC_NotHasAttackOrder.BP_ABC_NotHasAttackOrder_C
// 0x0000 (0x0038 - 0x0038)
class UBP_ABC_NotHasAttackOrder_C final : public USBAbilityConditionEnemyHasAttackOrder
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ABC_NotHasAttackOrder_C">();
	}
	static class UBP_ABC_NotHasAttackOrder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ABC_NotHasAttackOrder_C>();
	}
};
static_assert(alignof(UBP_ABC_NotHasAttackOrder_C) == 0x000008, "Wrong alignment on UBP_ABC_NotHasAttackOrder_C");
static_assert(sizeof(UBP_ABC_NotHasAttackOrder_C) == 0x000038, "Wrong size on UBP_ABC_NotHasAttackOrder_C");

}


#pragma once

 

// Package: BP_ABC_DynamicTrigger_DodgeAttack

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ABC_DynamicTrigger_DodgeAttack.BP_ABC_DynamicTrigger_DodgeAttack_C
// 0x0000 (0x0040 - 0x0040)
class UBP_ABC_DynamicTrigger_DodgeAttack_C final : public USBAbilityConditionDynamicTrigger
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ABC_DynamicTrigger_DodgeAttack_C">();
	}
	static class UBP_ABC_DynamicTrigger_DodgeAttack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ABC_DynamicTrigger_DodgeAttack_C>();
	}
};
static_assert(alignof(UBP_ABC_DynamicTrigger_DodgeAttack_C) == 0x000008, "Wrong alignment on UBP_ABC_DynamicTrigger_DodgeAttack_C");
static_assert(sizeof(UBP_ABC_DynamicTrigger_DodgeAttack_C) == 0x000040, "Wrong size on UBP_ABC_DynamicTrigger_DodgeAttack_C");

}


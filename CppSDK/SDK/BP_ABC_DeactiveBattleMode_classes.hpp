#pragma once

 

// Package: BP_ABC_DeactiveBattleMode

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ABC_DeactiveBattleMode.BP_ABC_DeactiveBattleMode_C
// 0x0000 (0x0038 - 0x0038)
class UBP_ABC_DeactiveBattleMode_C final : public USBAbilityConditionActiveBattleMode
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ABC_DeactiveBattleMode_C">();
	}
	static class UBP_ABC_DeactiveBattleMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ABC_DeactiveBattleMode_C>();
	}
};
static_assert(alignof(UBP_ABC_DeactiveBattleMode_C) == 0x000008, "Wrong alignment on UBP_ABC_DeactiveBattleMode_C");
static_assert(sizeof(UBP_ABC_DeactiveBattleMode_C) == 0x000038, "Wrong size on UBP_ABC_DeactiveBattleMode_C");

}


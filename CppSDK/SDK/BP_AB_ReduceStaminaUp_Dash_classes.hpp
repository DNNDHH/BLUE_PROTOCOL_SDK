#pragma once

 

// Package: BP_AB_ReduceStaminaUp_Dash

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_ReduceStaminaUp_Dash.BP_AB_ReduceStaminaUp_Dash_C
// 0x0000 (0x0090 - 0x0090)
class UBP_AB_ReduceStaminaUp_Dash_C final : public USBAbilitySkillReduceStaminaByAction
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_ReduceStaminaUp_Dash_C">();
	}
	static class UBP_AB_ReduceStaminaUp_Dash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_ReduceStaminaUp_Dash_C>();
	}
};
static_assert(alignof(UBP_AB_ReduceStaminaUp_Dash_C) == 0x000008, "Wrong alignment on UBP_AB_ReduceStaminaUp_Dash_C");
static_assert(sizeof(UBP_AB_ReduceStaminaUp_Dash_C) == 0x000090, "Wrong size on UBP_AB_ReduceStaminaUp_Dash_C");

}


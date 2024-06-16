#pragma once

 

// Package: BP_AB_TacticalSkillIDGiveDamageUp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_TacticalSkillIDGiveDamageUp.BP_AB_TacticalSkillIDGiveDamageUp_C
// 0x0000 (0x0088 - 0x0088)
class UBP_AB_TacticalSkillIDGiveDamageUp_C final : public USBAbilityStatusTacticalSkillIDGiveDamage
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_TacticalSkillIDGiveDamageUp_C">();
	}
	static class UBP_AB_TacticalSkillIDGiveDamageUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_TacticalSkillIDGiveDamageUp_C>();
	}
};
static_assert(alignof(UBP_AB_TacticalSkillIDGiveDamageUp_C) == 0x000008, "Wrong alignment on UBP_AB_TacticalSkillIDGiveDamageUp_C");
static_assert(sizeof(UBP_AB_TacticalSkillIDGiveDamageUp_C) == 0x000088, "Wrong size on UBP_AB_TacticalSkillIDGiveDamageUp_C");

}


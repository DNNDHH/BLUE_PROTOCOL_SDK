#pragma once

 

// Package: BP_AB_SkillActionGiveDamageUp_Sub

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_SkillActionGiveDamageUp_Sub.BP_AB_SkillActionGiveDamageUp_Sub_C
// 0x0000 (0x0098 - 0x0098)
class UBP_AB_SkillActionGiveDamageUp_Sub_C final : public USBAbilityStatusSkillActionGiveDamage
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_SkillActionGiveDamageUp_Sub_C">();
	}
	static class UBP_AB_SkillActionGiveDamageUp_Sub_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_SkillActionGiveDamageUp_Sub_C>();
	}
};
static_assert(alignof(UBP_AB_SkillActionGiveDamageUp_Sub_C) == 0x000008, "Wrong alignment on UBP_AB_SkillActionGiveDamageUp_Sub_C");
static_assert(sizeof(UBP_AB_SkillActionGiveDamageUp_Sub_C) == 0x000098, "Wrong size on UBP_AB_SkillActionGiveDamageUp_Sub_C");

}


#pragma once

 

// Package: Skill_RBL_ShieldDash

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_ShieldDash.Skill_RBL_ShieldDash_C
// 0x0000 (0x0310 - 0x0310)
class USkill_RBL_ShieldDash_C final : public USBRebellionShieldDashSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_ShieldDash_C">();
	}
	static class USkill_RBL_ShieldDash_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_ShieldDash_C>();
	}
};
static_assert(alignof(USkill_RBL_ShieldDash_C) == 0x000008, "Wrong alignment on USkill_RBL_ShieldDash_C");
static_assert(sizeof(USkill_RBL_ShieldDash_C) == 0x000310, "Wrong size on USkill_RBL_ShieldDash_C");

}


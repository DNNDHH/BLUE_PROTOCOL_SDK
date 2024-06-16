#pragma once

 

// Package: Skill_PFM_GuitarSwing

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_PFM_GuitarSwing.Skill_PFM_GuitarSwing_C
// 0x0000 (0x0338 - 0x0338)
class USkill_PFM_GuitarSwing_C final : public USBPerformerMeleeChargeSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_PFM_GuitarSwing_C">();
	}
	static class USkill_PFM_GuitarSwing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_PFM_GuitarSwing_C>();
	}
};
static_assert(alignof(USkill_PFM_GuitarSwing_C) == 0x000008, "Wrong alignment on USkill_PFM_GuitarSwing_C");
static_assert(sizeof(USkill_PFM_GuitarSwing_C) == 0x000338, "Wrong size on USkill_PFM_GuitarSwing_C");

}


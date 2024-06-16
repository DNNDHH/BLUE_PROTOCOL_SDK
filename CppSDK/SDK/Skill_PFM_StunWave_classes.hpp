#pragma once

 

// Package: Skill_PFM_StunWave

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_PFM_StunWave.Skill_PFM_StunWave_C
// 0x0000 (0x0328 - 0x0328)
class USkill_PFM_StunWave_C final : public USBPerformerChargeSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_PFM_StunWave_C">();
	}
	static class USkill_PFM_StunWave_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_PFM_StunWave_C>();
	}
};
static_assert(alignof(USkill_PFM_StunWave_C) == 0x000008, "Wrong alignment on USkill_PFM_StunWave_C");
static_assert(sizeof(USkill_PFM_StunWave_C) == 0x000328, "Wrong size on USkill_PFM_StunWave_C");

}


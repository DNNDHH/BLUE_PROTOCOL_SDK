#pragma once

 

// Package: Skill_SMA_JudgementHammer

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_JudgementHammer.Skill_SMA_JudgementHammer_C
// 0x0000 (0x0348 - 0x0348)
class USkill_SMA_JudgementHammer_C final : public USBSmasherJudgementHammerSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_JudgementHammer_C">();
	}
	static class USkill_SMA_JudgementHammer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_JudgementHammer_C>();
	}
};
static_assert(alignof(USkill_SMA_JudgementHammer_C) == 0x000008, "Wrong alignment on USkill_SMA_JudgementHammer_C");
static_assert(sizeof(USkill_SMA_JudgementHammer_C) == 0x000348, "Wrong size on USkill_SMA_JudgementHammer_C");

}


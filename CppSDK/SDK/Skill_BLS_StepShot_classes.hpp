#pragma once

 

// Package: Skill_BLS_StepShot

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_StepShot.Skill_BLS_StepShot_C
// 0x0000 (0x02F0 - 0x02F0)
class USkill_BLS_StepShot_C final : public USBBlasterStepShotSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_StepShot_C">();
	}
	static class USkill_BLS_StepShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_StepShot_C>();
	}
};
static_assert(alignof(USkill_BLS_StepShot_C) == 0x000008, "Wrong alignment on USkill_BLS_StepShot_C");
static_assert(sizeof(USkill_BLS_StepShot_C) == 0x0002F0, "Wrong size on USkill_BLS_StepShot_C");

}


#pragma once

 

// Package: Skill_BLS_SleepingArrow

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_SleepingArrow.Skill_BLS_SleepingArrow_C
// 0x0000 (0x0318 - 0x0318)
class USkill_BLS_SleepingArrow_C final : public USBBlasterChargeShootSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_SleepingArrow_C">();
	}
	static class USkill_BLS_SleepingArrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_SleepingArrow_C>();
	}
};
static_assert(alignof(USkill_BLS_SleepingArrow_C) == 0x000008, "Wrong alignment on USkill_BLS_SleepingArrow_C");
static_assert(sizeof(USkill_BLS_SleepingArrow_C) == 0x000318, "Wrong size on USkill_BLS_SleepingArrow_C");

}


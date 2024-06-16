#pragma once

 

// Package: Skill_BLS_ComboShot

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_ComboShot.Skill_BLS_ComboShot_C
// 0x0000 (0x02D8 - 0x02D8)
class USkill_BLS_ComboShot_C final : public USBBlasterShootSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_ComboShot_C">();
	}
	static class USkill_BLS_ComboShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_ComboShot_C>();
	}
};
static_assert(alignof(USkill_BLS_ComboShot_C) == 0x000008, "Wrong alignment on USkill_BLS_ComboShot_C");
static_assert(sizeof(USkill_BLS_ComboShot_C) == 0x0002D8, "Wrong size on USkill_BLS_ComboShot_C");

}


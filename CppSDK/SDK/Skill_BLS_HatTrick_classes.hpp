#pragma once

 

// Package: Skill_BLS_HatTrick

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_HatTrick.Skill_BLS_HatTrick_C
// 0x0000 (0x02E0 - 0x02E0)
class USkill_BLS_HatTrick_C final : public USBBlasterHatTrickSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_HatTrick_C">();
	}
	static class USkill_BLS_HatTrick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_HatTrick_C>();
	}
};
static_assert(alignof(USkill_BLS_HatTrick_C) == 0x000008, "Wrong alignment on USkill_BLS_HatTrick_C");
static_assert(sizeof(USkill_BLS_HatTrick_C) == 0x0002E0, "Wrong size on USkill_BLS_HatTrick_C");

}

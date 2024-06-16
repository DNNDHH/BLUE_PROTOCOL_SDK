#pragma once

 

// Package: Skill_BSK_HavocStomp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BSK_HavocStomp.Skill_BSK_HavocStomp_C
// 0x0000 (0x02D8 - 0x02D8)
class USkill_BSK_HavocStomp_C final : public USBBerserkerSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BSK_HavocStomp_C">();
	}
	static class USkill_BSK_HavocStomp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BSK_HavocStomp_C>();
	}
};
static_assert(alignof(USkill_BSK_HavocStomp_C) == 0x000008, "Wrong alignment on USkill_BSK_HavocStomp_C");
static_assert(sizeof(USkill_BSK_HavocStomp_C) == 0x0002D8, "Wrong size on USkill_BSK_HavocStomp_C");

}


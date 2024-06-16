#pragma once

 

// Package: Skill_SMA_GravityDive

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_GravityDive.Skill_SMA_GravityDive_C
// 0x0000 (0x0720 - 0x0720)
class USkill_SMA_GravityDive_C final : public USBSmasherGravityDiveSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_GravityDive_C">();
	}
	static class USkill_SMA_GravityDive_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_GravityDive_C>();
	}
};
static_assert(alignof(USkill_SMA_GravityDive_C) == 0x000008, "Wrong alignment on USkill_SMA_GravityDive_C");
static_assert(sizeof(USkill_SMA_GravityDive_C) == 0x000720, "Wrong size on USkill_SMA_GravityDive_C");

}


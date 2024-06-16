#pragma once

 

// Package: Skill_SMA_JumpingHammer

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_JumpingHammer.Skill_SMA_JumpingHammer_C
// 0x0000 (0x0348 - 0x0348)
class USkill_SMA_JumpingHammer_C final : public USBSmasherJumpingHammerSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_JumpingHammer_C">();
	}
	static class USkill_SMA_JumpingHammer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_JumpingHammer_C>();
	}
};
static_assert(alignof(USkill_SMA_JumpingHammer_C) == 0x000008, "Wrong alignment on USkill_SMA_JumpingHammer_C");
static_assert(sizeof(USkill_SMA_JumpingHammer_C) == 0x000348, "Wrong size on USkill_SMA_JumpingHammer_C");

}


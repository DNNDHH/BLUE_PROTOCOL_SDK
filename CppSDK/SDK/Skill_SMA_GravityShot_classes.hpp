#pragma once

 

// Package: Skill_SMA_GravityShot

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_GravityShot.Skill_SMA_GravityShot_C
// 0x0000 (0x06F8 - 0x06F8)
class USkill_SMA_GravityShot_C final : public USBSmasherGravityShotSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_GravityShot_C">();
	}
	static class USkill_SMA_GravityShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_GravityShot_C>();
	}
};
static_assert(alignof(USkill_SMA_GravityShot_C) == 0x000008, "Wrong alignment on USkill_SMA_GravityShot_C");
static_assert(sizeof(USkill_SMA_GravityShot_C) == 0x0006F8, "Wrong size on USkill_SMA_GravityShot_C");

}


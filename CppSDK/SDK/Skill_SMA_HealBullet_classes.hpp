#pragma once

 

// Package: Skill_SMA_HealBullet

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_HealBullet.Skill_SMA_HealBullet_C
// 0x0000 (0x0378 - 0x0378)
class USkill_SMA_HealBullet_C final : public USBSmasherHealBulletSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_HealBullet_C">();
	}
	static class USkill_SMA_HealBullet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_HealBullet_C>();
	}
};
static_assert(alignof(USkill_SMA_HealBullet_C) == 0x000008, "Wrong alignment on USkill_SMA_HealBullet_C");
static_assert(sizeof(USkill_SMA_HealBullet_C) == 0x000378, "Wrong size on USkill_SMA_HealBullet_C");

}


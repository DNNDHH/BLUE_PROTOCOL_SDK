#pragma once

 

// Package: Skill_SMA_QuickShot

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_QuickShot.Skill_SMA_QuickShot_C
// 0x0000 (0x0770 - 0x0770)
class USkill_SMA_QuickShot_C final : public USBSmasherQuickShotSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_QuickShot_C">();
	}
	static class USkill_SMA_QuickShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_QuickShot_C>();
	}
};
static_assert(alignof(USkill_SMA_QuickShot_C) == 0x000008, "Wrong alignment on USkill_SMA_QuickShot_C");
static_assert(sizeof(USkill_SMA_QuickShot_C) == 0x000770, "Wrong size on USkill_SMA_QuickShot_C");

}


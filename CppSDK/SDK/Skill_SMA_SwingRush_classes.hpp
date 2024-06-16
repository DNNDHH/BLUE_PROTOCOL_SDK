#pragma once

 

// Package: Skill_SMA_SwingRush

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_SwingRush.Skill_SMA_SwingRush_C
// 0x0000 (0x0748 - 0x0748)
class USkill_SMA_SwingRush_C final : public USBSmasherSwingRushSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_SwingRush_C">();
	}
	static class USkill_SMA_SwingRush_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_SwingRush_C>();
	}
};
static_assert(alignof(USkill_SMA_SwingRush_C) == 0x000008, "Wrong alignment on USkill_SMA_SwingRush_C");
static_assert(sizeof(USkill_SMA_SwingRush_C) == 0x000748, "Wrong size on USkill_SMA_SwingRush_C");

}


#pragma once

 

// Package: Skill_SMA_AerialAction

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_AerialAction.Skill_SMA_AerialAction_C
// 0x0000 (0x02C0 - 0x02C0)
class USkill_SMA_AerialAction_C final : public USBPlayerAerialSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_AerialAction_C">();
	}
	static class USkill_SMA_AerialAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_AerialAction_C>();
	}
};
static_assert(alignof(USkill_SMA_AerialAction_C) == 0x000008, "Wrong alignment on USkill_SMA_AerialAction_C");
static_assert(sizeof(USkill_SMA_AerialAction_C) == 0x0002C0, "Wrong size on USkill_SMA_AerialAction_C");

}


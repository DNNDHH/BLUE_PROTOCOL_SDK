#pragma once

 

// Package: Skill_SMA_SubAction

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_SubAction.Skill_SMA_SubAction_C
// 0x0000 (0x0710 - 0x0710)
class USkill_SMA_SubAction_C final : public USBSmasherSubActionSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_SubAction_C">();
	}
	static class USkill_SMA_SubAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_SubAction_C>();
	}
};
static_assert(alignof(USkill_SMA_SubAction_C) == 0x000008, "Wrong alignment on USkill_SMA_SubAction_C");
static_assert(sizeof(USkill_SMA_SubAction_C) == 0x000710, "Wrong size on USkill_SMA_SubAction_C");

}


#pragma once

 

// Package: Skill_PFM_MainAction

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_PFM_MainAction.Skill_PFM_MainAction_C
// 0x0000 (0x0330 - 0x0330)
class USkill_PFM_MainAction_C final : public USBPerformerMainActionSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_PFM_MainAction_C">();
	}
	static class USkill_PFM_MainAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_PFM_MainAction_C>();
	}
};
static_assert(alignof(USkill_PFM_MainAction_C) == 0x000008, "Wrong alignment on USkill_PFM_MainAction_C");
static_assert(sizeof(USkill_PFM_MainAction_C) == 0x000330, "Wrong size on USkill_PFM_MainAction_C");

}


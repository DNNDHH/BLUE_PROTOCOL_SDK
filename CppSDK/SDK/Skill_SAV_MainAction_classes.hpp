#pragma once

 

// Package: Skill_SAV_MainAction

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SAV_MainAction.Skill_SAV_MainAction_C
// 0x0000 (0x02D8 - 0x02D8)
class USkill_SAV_MainAction_C final : public USBRebellionSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SAV_MainAction_C">();
	}
	static class USkill_SAV_MainAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SAV_MainAction_C>();
	}
};
static_assert(alignof(USkill_SAV_MainAction_C) == 0x000008, "Wrong alignment on USkill_SAV_MainAction_C");
static_assert(sizeof(USkill_SAV_MainAction_C) == 0x0002D8, "Wrong size on USkill_SAV_MainAction_C");

}


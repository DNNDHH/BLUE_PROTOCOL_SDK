#pragma once

 

// Package: Skill_PFM_RaiseSonic

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_PFM_RaiseSonic.Skill_PFM_RaiseSonic_C
// 0x0000 (0x02F8 - 0x02F8)
class USkill_PFM_RaiseSonic_C final : public USBPerformerSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_PFM_RaiseSonic_C">();
	}
	static class USkill_PFM_RaiseSonic_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_PFM_RaiseSonic_C>();
	}
};
static_assert(alignof(USkill_PFM_RaiseSonic_C) == 0x000008, "Wrong alignment on USkill_PFM_RaiseSonic_C");
static_assert(sizeof(USkill_PFM_RaiseSonic_C) == 0x0002F8, "Wrong size on USkill_PFM_RaiseSonic_C");

}

#pragma once

 

// Package: Skill_PFM_AmpField

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_PFM_AmpField.Skill_PFM_AmpField_C
// 0x0000 (0x03A0 - 0x03A0)
class USkill_PFM_AmpField_C final : public USBPerformerChargeMarkerSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_PFM_AmpField_C">();
	}
	static class USkill_PFM_AmpField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_PFM_AmpField_C>();
	}
};
static_assert(alignof(USkill_PFM_AmpField_C) == 0x000008, "Wrong alignment on USkill_PFM_AmpField_C");
static_assert(sizeof(USkill_PFM_AmpField_C) == 0x0003A0, "Wrong size on USkill_PFM_AmpField_C");

}


#pragma once

 

// Package: Skill_MGC_Meteor

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_Meteor.Skill_MGC_Meteor_C
// 0x0000 (0x0358 - 0x0358)
class USkill_MGC_Meteor_C final : public USBMagicianMeteorSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_Meteor_C">();
	}
	static class USkill_MGC_Meteor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_Meteor_C>();
	}
};
static_assert(alignof(USkill_MGC_Meteor_C) == 0x000008, "Wrong alignment on USkill_MGC_Meteor_C");
static_assert(sizeof(USkill_MGC_Meteor_C) == 0x000358, "Wrong size on USkill_MGC_Meteor_C");

}


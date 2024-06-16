#pragma once

 

// Package: Skill_Dodge

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Dodge.Skill_Dodge_C
// 0x0000 (0x02E8 - 0x02E8)
class USkill_Dodge_C : public USBDodgeSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Dodge_C">();
	}
	static class USkill_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Dodge_C>();
	}
};
static_assert(alignof(USkill_Dodge_C) == 0x000008, "Wrong alignment on USkill_Dodge_C");
static_assert(sizeof(USkill_Dodge_C) == 0x0002E8, "Wrong size on USkill_Dodge_C");

}


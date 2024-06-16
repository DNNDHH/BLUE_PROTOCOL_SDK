#pragma once

 

// Package: Skill_Ukemi

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_Ukemi.Skill_Ukemi_C
// 0x0000 (0x02C8 - 0x02C8)
class USkill_Ukemi_C : public USBUkemiSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_Ukemi_C">();
	}
	static class USkill_Ukemi_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_Ukemi_C>();
	}
};
static_assert(alignof(USkill_Ukemi_C) == 0x000008, "Wrong alignment on USkill_Ukemi_C");
static_assert(sizeof(USkill_Ukemi_C) == 0x0002C8, "Wrong size on USkill_Ukemi_C");

}


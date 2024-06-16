#pragma once

 

// Package: Skill_BLS_Dodge

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_Dodge.Skill_BLS_Dodge_C
// 0x0000 (0x0310 - 0x0310)
class USkill_BLS_Dodge_C final : public USBBlasterDodgeSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_Dodge_C">();
	}
	static class USkill_BLS_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_Dodge_C>();
	}
};
static_assert(alignof(USkill_BLS_Dodge_C) == 0x000008, "Wrong alignment on USkill_BLS_Dodge_C");
static_assert(sizeof(USkill_BLS_Dodge_C) == 0x000310, "Wrong size on USkill_BLS_Dodge_C");

}


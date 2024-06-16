#pragma once

 

// Package: Skill_BLS_FireUp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_FireUp.Skill_BLS_FireUp_C
// 0x0000 (0x02C0 - 0x02C0)
class USkill_BLS_FireUp_C final : public USBBlasterSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_FireUp_C">();
	}
	static class USkill_BLS_FireUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_FireUp_C>();
	}
};
static_assert(alignof(USkill_BLS_FireUp_C) == 0x000008, "Wrong alignment on USkill_BLS_FireUp_C");
static_assert(sizeof(USkill_BLS_FireUp_C) == 0x0002C0, "Wrong size on USkill_BLS_FireUp_C");

}


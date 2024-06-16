#pragma once

 

// Package: Skill_MGC_Dodge

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_Dodge.Skill_MGC_Dodge_C
// 0x0000 (0x0300 - 0x0300)
class USkill_MGC_Dodge_C final : public USBMagicianDodgeSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_Dodge_C">();
	}
	static class USkill_MGC_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_Dodge_C>();
	}
};
static_assert(alignof(USkill_MGC_Dodge_C) == 0x000008, "Wrong alignment on USkill_MGC_Dodge_C");
static_assert(sizeof(USkill_MGC_Dodge_C) == 0x000300, "Wrong size on USkill_MGC_Dodge_C");

}


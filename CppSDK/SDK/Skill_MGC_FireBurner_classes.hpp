#pragma once

 

// Package: Skill_MGC_FireBurner

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_FireBurner.Skill_MGC_FireBurner_C
// 0x0000 (0x06A8 - 0x06A8)
class USkill_MGC_FireBurner_C final : public USBMagicianFireBurnerSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_FireBurner_C">();
	}
	static class USkill_MGC_FireBurner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_FireBurner_C>();
	}
};
static_assert(alignof(USkill_MGC_FireBurner_C) == 0x000008, "Wrong alignment on USkill_MGC_FireBurner_C");
static_assert(sizeof(USkill_MGC_FireBurner_C) == 0x0006A8, "Wrong size on USkill_MGC_FireBurner_C");

}


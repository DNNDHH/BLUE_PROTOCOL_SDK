#pragma once

 

// Package: Skill_MGC_FireSpark

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_FireSpark.Skill_MGC_FireSpark_C
// 0x0000 (0x0310 - 0x0310)
class USkill_MGC_FireSpark_C final : public USBMagicianFireBallSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_FireSpark_C">();
	}
	static class USkill_MGC_FireSpark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_FireSpark_C>();
	}
};
static_assert(alignof(USkill_MGC_FireSpark_C) == 0x000008, "Wrong alignment on USkill_MGC_FireSpark_C");
static_assert(sizeof(USkill_MGC_FireSpark_C) == 0x000310, "Wrong size on USkill_MGC_FireSpark_C");

}


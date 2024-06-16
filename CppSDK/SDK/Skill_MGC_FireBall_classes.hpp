#pragma once

 

// Package: Skill_MGC_FireBall

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_FireBall.Skill_MGC_FireBall_C
// 0x0000 (0x0310 - 0x0310)
class USkill_MGC_FireBall_C final : public USBMagicianFireBallSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_FireBall_C">();
	}
	static class USkill_MGC_FireBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_FireBall_C>();
	}
};
static_assert(alignof(USkill_MGC_FireBall_C) == 0x000008, "Wrong alignment on USkill_MGC_FireBall_C");
static_assert(sizeof(USkill_MGC_FireBall_C) == 0x000310, "Wrong size on USkill_MGC_FireBall_C");

}


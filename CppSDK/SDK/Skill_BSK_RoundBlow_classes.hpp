#pragma once

 

// Package: Skill_BSK_RoundBlow

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BSK_RoundBlow.Skill_BSK_RoundBlow_C
// 0x0000 (0x02F0 - 0x02F0)
class USkill_BSK_RoundBlow_C final : public USBBerserkerRoundBlowSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BSK_RoundBlow_C">();
	}
	static class USkill_BSK_RoundBlow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BSK_RoundBlow_C>();
	}
};
static_assert(alignof(USkill_BSK_RoundBlow_C) == 0x000008, "Wrong alignment on USkill_BSK_RoundBlow_C");
static_assert(sizeof(USkill_BSK_RoundBlow_C) == 0x0002F0, "Wrong size on USkill_BSK_RoundBlow_C");

}


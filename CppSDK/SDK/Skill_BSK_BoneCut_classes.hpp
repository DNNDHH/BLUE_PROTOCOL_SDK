#pragma once

 

// Package: Skill_BSK_BoneCut

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BSK_BoneCut.Skill_BSK_BoneCut_C
// 0x0000 (0x0308 - 0x0308)
class USkill_BSK_BoneCut_C final : public USBBerserkerBoneCutSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BSK_BoneCut_C">();
	}
	static class USkill_BSK_BoneCut_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BSK_BoneCut_C>();
	}
};
static_assert(alignof(USkill_BSK_BoneCut_C) == 0x000008, "Wrong alignment on USkill_BSK_BoneCut_C");
static_assert(sizeof(USkill_BSK_BoneCut_C) == 0x000308, "Wrong size on USkill_BSK_BoneCut_C");

}


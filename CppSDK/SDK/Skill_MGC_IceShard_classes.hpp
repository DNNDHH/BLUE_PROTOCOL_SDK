#pragma once

 

// Package: Skill_MGC_IceShard

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_IceShard.Skill_MGC_IceShard_C
// 0x0000 (0x02E0 - 0x02E0)
class USkill_MGC_IceShard_C final : public USBMagicianSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_IceShard_C">();
	}
	static class USkill_MGC_IceShard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_IceShard_C>();
	}
};
static_assert(alignof(USkill_MGC_IceShard_C) == 0x000008, "Wrong alignment on USkill_MGC_IceShard_C");
static_assert(sizeof(USkill_MGC_IceShard_C) == 0x0002E0, "Wrong size on USkill_MGC_IceShard_C");

}


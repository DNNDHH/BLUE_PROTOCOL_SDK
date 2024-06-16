#pragma once

 

// Package: Skill_MGC_IceStorm

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_IceStorm.Skill_MGC_IceStorm_C
// 0x0000 (0x0388 - 0x0388)
class USkill_MGC_IceStorm_C final : public USBMagicianHailSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_IceStorm_C">();
	}
	static class USkill_MGC_IceStorm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_IceStorm_C>();
	}
};
static_assert(alignof(USkill_MGC_IceStorm_C) == 0x000008, "Wrong alignment on USkill_MGC_IceStorm_C");
static_assert(sizeof(USkill_MGC_IceStorm_C) == 0x000388, "Wrong size on USkill_MGC_IceStorm_C");

}


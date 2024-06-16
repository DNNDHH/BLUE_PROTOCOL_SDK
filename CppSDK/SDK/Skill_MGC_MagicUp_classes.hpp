#pragma once

 

// Package: Skill_MGC_MagicUp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_MagicUp.Skill_MGC_MagicUp_C
// 0x0000 (0x02E0 - 0x02E0)
class USkill_MGC_MagicUp_C final : public USBMagicianSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_MagicUp_C">();
	}
	static class USkill_MGC_MagicUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_MagicUp_C>();
	}
};
static_assert(alignof(USkill_MGC_MagicUp_C) == 0x000008, "Wrong alignment on USkill_MGC_MagicUp_C");
static_assert(sizeof(USkill_MGC_MagicUp_C) == 0x0002E0, "Wrong size on USkill_MGC_MagicUp_C");

}


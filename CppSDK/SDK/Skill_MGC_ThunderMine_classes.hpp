#pragma once

 

// Package: Skill_MGC_ThunderMine

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_ThunderMine.Skill_MGC_ThunderMine_C
// 0x0000 (0x0320 - 0x0320)
class USkill_MGC_ThunderMine_C final : public USBMagicianThunderMineSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_ThunderMine_C">();
	}
	static class USkill_MGC_ThunderMine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_ThunderMine_C>();
	}
};
static_assert(alignof(USkill_MGC_ThunderMine_C) == 0x000008, "Wrong alignment on USkill_MGC_ThunderMine_C");
static_assert(sizeof(USkill_MGC_ThunderMine_C) == 0x000320, "Wrong size on USkill_MGC_ThunderMine_C");

}


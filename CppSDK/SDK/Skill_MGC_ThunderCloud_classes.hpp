#pragma once

 

// Package: Skill_MGC_ThunderCloud

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_ThunderCloud.Skill_MGC_ThunderCloud_C
// 0x0000 (0x04E8 - 0x04E8)
class USkill_MGC_ThunderCloud_C final : public USBMagicianThunderCloudSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_ThunderCloud_C">();
	}
	static class USkill_MGC_ThunderCloud_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_ThunderCloud_C>();
	}
};
static_assert(alignof(USkill_MGC_ThunderCloud_C) == 0x000008, "Wrong alignment on USkill_MGC_ThunderCloud_C");
static_assert(sizeof(USkill_MGC_ThunderCloud_C) == 0x0004E8, "Wrong size on USkill_MGC_ThunderCloud_C");

}


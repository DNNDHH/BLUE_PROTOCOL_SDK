#pragma once

 

// Package: Skill_SMA_PowerShot

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_PowerShot.Skill_SMA_PowerShot_C
// 0x0000 (0x0728 - 0x0728)
class USkill_SMA_PowerShot_C final : public USBSmasherPowerShotSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_PowerShot_C">();
	}
	static class USkill_SMA_PowerShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_PowerShot_C>();
	}
};
static_assert(alignof(USkill_SMA_PowerShot_C) == 0x000008, "Wrong alignment on USkill_SMA_PowerShot_C");
static_assert(sizeof(USkill_SMA_PowerShot_C) == 0x000728, "Wrong size on USkill_SMA_PowerShot_C");

}


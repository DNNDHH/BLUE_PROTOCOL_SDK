#pragma once

 

// Package: Skill_SMA_DustStorm

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_DustStorm.Skill_SMA_DustStorm_C
// 0x0000 (0x03A0 - 0x03A0)
class USkill_SMA_DustStorm_C final : public USBSmasherDustStormSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_DustStorm_C">();
	}
	static class USkill_SMA_DustStorm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_DustStorm_C>();
	}
};
static_assert(alignof(USkill_SMA_DustStorm_C) == 0x000008, "Wrong alignment on USkill_SMA_DustStorm_C");
static_assert(sizeof(USkill_SMA_DustStorm_C) == 0x0003A0, "Wrong size on USkill_SMA_DustStorm_C");

}


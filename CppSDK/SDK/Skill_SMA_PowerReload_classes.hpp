#pragma once

 

// Package: Skill_SMA_PowerReload

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_PowerReload.Skill_SMA_PowerReload_C
// 0x0000 (0x0548 - 0x0548)
class USkill_SMA_PowerReload_C final : public USBSmasherPowerReloadSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_PowerReload_C">();
	}
	static class USkill_SMA_PowerReload_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_PowerReload_C>();
	}
};
static_assert(alignof(USkill_SMA_PowerReload_C) == 0x000008, "Wrong alignment on USkill_SMA_PowerReload_C");
static_assert(sizeof(USkill_SMA_PowerReload_C) == 0x000548, "Wrong size on USkill_SMA_PowerReload_C");

}


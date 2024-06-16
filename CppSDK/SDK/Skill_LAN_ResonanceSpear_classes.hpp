#pragma once

 

// Package: Skill_LAN_ResonanceSpear

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_LAN_ResonanceSpear.Skill_LAN_ResonanceSpear_C
// 0x0000 (0x04C0 - 0x04C0)
class USkill_LAN_ResonanceSpear_C final : public USBLancerResonanceSpearSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_LAN_ResonanceSpear_C">();
	}
	static class USkill_LAN_ResonanceSpear_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_LAN_ResonanceSpear_C>();
	}
};
static_assert(alignof(USkill_LAN_ResonanceSpear_C) == 0x000008, "Wrong alignment on USkill_LAN_ResonanceSpear_C");
static_assert(sizeof(USkill_LAN_ResonanceSpear_C) == 0x0004C0, "Wrong size on USkill_LAN_ResonanceSpear_C");

}


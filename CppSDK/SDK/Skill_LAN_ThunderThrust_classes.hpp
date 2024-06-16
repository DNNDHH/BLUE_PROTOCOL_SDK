#pragma once

 

// Package: Skill_LAN_ThunderThrust

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_LAN_ThunderThrust.Skill_LAN_ThunderThrust_C
// 0x0000 (0x02E8 - 0x02E8)
class USkill_LAN_ThunderThrust_C final : public USBLancerThunderThrustSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_LAN_ThunderThrust_C">();
	}
	static class USkill_LAN_ThunderThrust_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_LAN_ThunderThrust_C>();
	}
};
static_assert(alignof(USkill_LAN_ThunderThrust_C) == 0x000008, "Wrong alignment on USkill_LAN_ThunderThrust_C");
static_assert(sizeof(USkill_LAN_ThunderThrust_C) == 0x0002E8, "Wrong size on USkill_LAN_ThunderThrust_C");

}


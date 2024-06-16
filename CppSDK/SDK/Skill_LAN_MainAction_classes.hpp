#pragma once

 

// Package: Skill_LAN_MainAction

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_LAN_MainAction.Skill_LAN_MainAction_C
// 0x0000 (0x02E0 - 0x02E0)
class USkill_LAN_MainAction_C final : public USBLancerMainActionSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_LAN_MainAction_C">();
	}
	static class USkill_LAN_MainAction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_LAN_MainAction_C>();
	}
};
static_assert(alignof(USkill_LAN_MainAction_C) == 0x000008, "Wrong alignment on USkill_LAN_MainAction_C");
static_assert(sizeof(USkill_LAN_MainAction_C) == 0x0002E0, "Wrong size on USkill_LAN_MainAction_C");

}


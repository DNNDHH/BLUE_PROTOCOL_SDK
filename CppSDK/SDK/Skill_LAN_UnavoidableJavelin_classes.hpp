#pragma once

 

// Package: Skill_LAN_UnavoidableJavelin

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_LAN_UnavoidableJavelin.Skill_LAN_UnavoidableJavelin_C
// 0x0000 (0x02B8 - 0x02B8)
class USkill_LAN_UnavoidableJavelin_C final : public USBLancerSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_LAN_UnavoidableJavelin_C">();
	}
	static class USkill_LAN_UnavoidableJavelin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_LAN_UnavoidableJavelin_C>();
	}
};
static_assert(alignof(USkill_LAN_UnavoidableJavelin_C) == 0x000008, "Wrong alignment on USkill_LAN_UnavoidableJavelin_C");
static_assert(sizeof(USkill_LAN_UnavoidableJavelin_C) == 0x0002B8, "Wrong size on USkill_LAN_UnavoidableJavelin_C");

}


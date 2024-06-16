#pragma once

 

// Package: Skill_LAN_ThrowingStyle

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_LAN_ThrowingStyle.Skill_LAN_ThrowingStyle_C
// 0x0000 (0x02B0 - 0x02B0)
class USkill_LAN_ThrowingStyle_C final : public USBSkillInfoClass
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_LAN_ThrowingStyle_C">();
	}
	static class USkill_LAN_ThrowingStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_LAN_ThrowingStyle_C>();
	}
};
static_assert(alignof(USkill_LAN_ThrowingStyle_C) == 0x000008, "Wrong alignment on USkill_LAN_ThrowingStyle_C");
static_assert(sizeof(USkill_LAN_ThrowingStyle_C) == 0x0002B0, "Wrong size on USkill_LAN_ThrowingStyle_C");

}


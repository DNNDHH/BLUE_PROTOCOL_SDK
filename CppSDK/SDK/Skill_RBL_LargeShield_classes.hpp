#pragma once

 

// Package: Skill_RBL_LargeShield

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_LargeShield.Skill_RBL_LargeShield_C
// 0x0000 (0x03A0 - 0x03A0)
class USkill_RBL_LargeShield_C final : public USBRebellionLargeShieldSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_LargeShield_C">();
	}
	static class USkill_RBL_LargeShield_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_LargeShield_C>();
	}
};
static_assert(alignof(USkill_RBL_LargeShield_C) == 0x000008, "Wrong alignment on USkill_RBL_LargeShield_C");
static_assert(sizeof(USkill_RBL_LargeShield_C) == 0x0003A0, "Wrong size on USkill_RBL_LargeShield_C");

}


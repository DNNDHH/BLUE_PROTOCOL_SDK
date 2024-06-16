#pragma once

 

// Package: Skill_RBL_ShieldPressure

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_ShieldPressure.Skill_RBL_ShieldPressure_C
// 0x0000 (0x02E8 - 0x02E8)
class USkill_RBL_ShieldPressure_C final : public USBRebellionShieldPressureSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_ShieldPressure_C">();
	}
	static class USkill_RBL_ShieldPressure_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_ShieldPressure_C>();
	}
};
static_assert(alignof(USkill_RBL_ShieldPressure_C) == 0x000008, "Wrong alignment on USkill_RBL_ShieldPressure_C");
static_assert(sizeof(USkill_RBL_ShieldPressure_C) == 0x0002E8, "Wrong size on USkill_RBL_ShieldPressure_C");

}


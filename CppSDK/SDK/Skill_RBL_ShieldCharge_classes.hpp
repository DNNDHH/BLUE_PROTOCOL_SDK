#pragma once

 

// Package: Skill_RBL_ShieldCharge

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_ShieldCharge.Skill_RBL_ShieldCharge_C
// 0x0000 (0x02D8 - 0x02D8)
class USkill_RBL_ShieldCharge_C final : public USBRebellionSkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_ShieldCharge_C">();
	}
	static class USkill_RBL_ShieldCharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_ShieldCharge_C>();
	}
};
static_assert(alignof(USkill_RBL_ShieldCharge_C) == 0x000008, "Wrong alignment on USkill_RBL_ShieldCharge_C");
static_assert(sizeof(USkill_RBL_ShieldCharge_C) == 0x0002D8, "Wrong size on USkill_RBL_ShieldCharge_C");

}

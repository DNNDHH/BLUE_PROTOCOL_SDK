#pragma once

 

// Package: Skill_RBL_Taunt

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_Taunt.Skill_RBL_Taunt_C
// 0x0000 (0x02F0 - 0x02F0)
class USkill_RBL_Taunt_C final : public USBRebellionTauntSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_Taunt_C">();
	}
	static class USkill_RBL_Taunt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_Taunt_C>();
	}
};
static_assert(alignof(USkill_RBL_Taunt_C) == 0x000008, "Wrong alignment on USkill_RBL_Taunt_C");
static_assert(sizeof(USkill_RBL_Taunt_C) == 0x0002F0, "Wrong size on USkill_RBL_Taunt_C");

}


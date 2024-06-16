#pragma once

 

// Package: Skill_RBL_Guard

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_Guard.Skill_RBL_Guard_C
// 0x0000 (0x02E0 - 0x02E0)
class USkill_RBL_Guard_C final : public USBRebellionGuardSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_Guard_C">();
	}
	static class USkill_RBL_Guard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_Guard_C>();
	}
};
static_assert(alignof(USkill_RBL_Guard_C) == 0x000008, "Wrong alignment on USkill_RBL_Guard_C");
static_assert(sizeof(USkill_RBL_Guard_C) == 0x0002E0, "Wrong size on USkill_RBL_Guard_C");

}


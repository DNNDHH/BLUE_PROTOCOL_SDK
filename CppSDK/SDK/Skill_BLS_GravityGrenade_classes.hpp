#pragma once

 

// Package: Skill_BLS_GravityGrenade

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_GravityGrenade.Skill_BLS_GravityGrenade_C
// 0x0000 (0x0328 - 0x0328)
class USkill_BLS_GravityGrenade_C final : public USBBlasterGravityGrenadeSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_GravityGrenade_C">();
	}
	static class USkill_BLS_GravityGrenade_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_GravityGrenade_C>();
	}
};
static_assert(alignof(USkill_BLS_GravityGrenade_C) == 0x000008, "Wrong alignment on USkill_BLS_GravityGrenade_C");
static_assert(sizeof(USkill_BLS_GravityGrenade_C) == 0x000328, "Wrong size on USkill_BLS_GravityGrenade_C");

}


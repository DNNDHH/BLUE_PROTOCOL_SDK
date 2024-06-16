#pragma once

 

// Package: Skill_RBL_Protection

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_Protection.Skill_RBL_Protection_C
// 0x0000 (0x04B8 - 0x04B8)
class USkill_RBL_Protection_C final : public USBRebellionProtectionSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_Protection_C">();
	}
	static class USkill_RBL_Protection_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_Protection_C>();
	}
};
static_assert(alignof(USkill_RBL_Protection_C) == 0x000008, "Wrong alignment on USkill_RBL_Protection_C");
static_assert(sizeof(USkill_RBL_Protection_C) == 0x0004B8, "Wrong size on USkill_RBL_Protection_C");

}


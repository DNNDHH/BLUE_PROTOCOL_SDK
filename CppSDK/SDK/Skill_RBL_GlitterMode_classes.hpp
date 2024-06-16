#pragma once

 

// Package: Skill_RBL_GlitterMode

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_GlitterMode.Skill_RBL_GlitterMode_C
// 0x0000 (0x0318 - 0x0318)
class USkill_RBL_GlitterMode_C final : public USBRebellionGlitterModeSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_GlitterMode_C">();
	}
	static class USkill_RBL_GlitterMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_GlitterMode_C>();
	}
};
static_assert(alignof(USkill_RBL_GlitterMode_C) == 0x000008, "Wrong alignment on USkill_RBL_GlitterMode_C");
static_assert(sizeof(USkill_RBL_GlitterMode_C) == 0x000318, "Wrong size on USkill_RBL_GlitterMode_C");

}


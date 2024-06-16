#pragma once

 

// Package: Skill_RBL_Attract

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_Attract.Skill_RBL_Attract_C
// 0x0000 (0x0390 - 0x0390)
class USkill_RBL_Attract_C final : public USBRebellionAttractSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_Attract_C">();
	}
	static class USkill_RBL_Attract_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_Attract_C>();
	}
};
static_assert(alignof(USkill_RBL_Attract_C) == 0x000008, "Wrong alignment on USkill_RBL_Attract_C");
static_assert(sizeof(USkill_RBL_Attract_C) == 0x000390, "Wrong size on USkill_RBL_Attract_C");

}


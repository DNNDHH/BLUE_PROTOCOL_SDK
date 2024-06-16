#pragma once

 

// Package: Skill_BLS_ElementSpreadShot

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_ElementSpreadShot.Skill_BLS_ElementSpreadShot_C
// 0x0000 (0x0358 - 0x0358)
class USkill_BLS_ElementSpreadShot_C final : public USBBlasterElementSpreadShotSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_ElementSpreadShot_C">();
	}
	static class USkill_BLS_ElementSpreadShot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_ElementSpreadShot_C>();
	}
};
static_assert(alignof(USkill_BLS_ElementSpreadShot_C) == 0x000008, "Wrong alignment on USkill_BLS_ElementSpreadShot_C");
static_assert(sizeof(USkill_BLS_ElementSpreadShot_C) == 0x000358, "Wrong size on USkill_BLS_ElementSpreadShot_C");

}


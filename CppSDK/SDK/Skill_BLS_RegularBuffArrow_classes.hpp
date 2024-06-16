#pragma once

 

// Package: Skill_BLS_RegularBuffArrow

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_RegularBuffArrow.Skill_BLS_RegularBuffArrow_C
// 0x0000 (0x03A8 - 0x03A8)
class USkill_BLS_RegularBuffArrow_C final : public USBBlasterRegularBuffArrowSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_RegularBuffArrow_C">();
	}
	static class USkill_BLS_RegularBuffArrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_RegularBuffArrow_C>();
	}
};
static_assert(alignof(USkill_BLS_RegularBuffArrow_C) == 0x000008, "Wrong alignment on USkill_BLS_RegularBuffArrow_C");
static_assert(sizeof(USkill_BLS_RegularBuffArrow_C) == 0x0003A8, "Wrong size on USkill_BLS_RegularBuffArrow_C");

}


#pragma once

 

// Package: Skill_RBL_MightyField

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_MightyField.Skill_RBL_MightyField_C
// 0x0000 (0x02B0 - 0x02B0)
class USkill_RBL_MightyField_C final : public USBSkillInfoClass
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_MightyField_C">();
	}
	static class USkill_RBL_MightyField_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_MightyField_C>();
	}
};
static_assert(alignof(USkill_RBL_MightyField_C) == 0x000008, "Wrong alignment on USkill_RBL_MightyField_C");
static_assert(sizeof(USkill_RBL_MightyField_C) == 0x0002B0, "Wrong size on USkill_RBL_MightyField_C");

}


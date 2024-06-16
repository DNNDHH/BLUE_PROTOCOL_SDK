#pragma once

 

// Package: Skill_BSK_Dodge

#include "Basic.hpp"

#include "Skill_Dodge_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BSK_Dodge.Skill_BSK_Dodge_C
// 0x0000 (0x02E8 - 0x02E8)
class USkill_BSK_Dodge_C final : public USkill_Dodge_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BSK_Dodge_C">();
	}
	static class USkill_BSK_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BSK_Dodge_C>();
	}
};
static_assert(alignof(USkill_BSK_Dodge_C) == 0x000008, "Wrong alignment on USkill_BSK_Dodge_C");
static_assert(sizeof(USkill_BSK_Dodge_C) == 0x0002E8, "Wrong size on USkill_BSK_Dodge_C");

}


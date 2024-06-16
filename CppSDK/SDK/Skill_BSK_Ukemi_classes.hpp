#pragma once

 

// Package: Skill_BSK_Ukemi

#include "Basic.hpp"

#include "Skill_Ukemi_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BSK_Ukemi.Skill_BSK_Ukemi_C
// 0x0000 (0x02C8 - 0x02C8)
class USkill_BSK_Ukemi_C final : public USkill_Ukemi_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BSK_Ukemi_C">();
	}
	static class USkill_BSK_Ukemi_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BSK_Ukemi_C>();
	}
};
static_assert(alignof(USkill_BSK_Ukemi_C) == 0x000008, "Wrong alignment on USkill_BSK_Ukemi_C");
static_assert(sizeof(USkill_BSK_Ukemi_C) == 0x0002C8, "Wrong size on USkill_BSK_Ukemi_C");

}


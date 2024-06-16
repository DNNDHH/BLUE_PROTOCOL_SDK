#pragma once

 

// Package: Skill_SMA_Dodge

#include "Basic.hpp"

#include "Skill_Dodge_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_Dodge.Skill_SMA_Dodge_C
// 0x0000 (0x02E8 - 0x02E8)
class USkill_SMA_Dodge_C final : public USkill_Dodge_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_Dodge_C">();
	}
	static class USkill_SMA_Dodge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_Dodge_C>();
	}
};
static_assert(alignof(USkill_SMA_Dodge_C) == 0x000008, "Wrong alignment on USkill_SMA_Dodge_C");
static_assert(sizeof(USkill_SMA_Dodge_C) == 0x0002E8, "Wrong size on USkill_SMA_Dodge_C");

}


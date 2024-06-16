#pragma once

 

// Package: Skill_SMA_StoneBody

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_SMA_StoneBody.Skill_SMA_StoneBody_C
// 0x0000 (0x0380 - 0x0380)
class USkill_SMA_StoneBody_C final : public USBSmasherStoneBodySkillInfo
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_SMA_StoneBody_C">();
	}
	static class USkill_SMA_StoneBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_SMA_StoneBody_C>();
	}
};
static_assert(alignof(USkill_SMA_StoneBody_C) == 0x000008, "Wrong alignment on USkill_SMA_StoneBody_C");
static_assert(sizeof(USkill_SMA_StoneBody_C) == 0x000380, "Wrong size on USkill_SMA_StoneBody_C");

}


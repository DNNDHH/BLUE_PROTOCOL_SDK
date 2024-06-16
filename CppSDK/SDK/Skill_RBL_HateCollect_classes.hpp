#pragma once

 

// Package: Skill_RBL_HateCollect

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_HateCollect.Skill_RBL_HateCollect_C
// 0x0000 (0x03A8 - 0x03A8)
class USkill_RBL_HateCollect_C final : public USBRebellionHateCollectSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_HateCollect_C">();
	}
	static class USkill_RBL_HateCollect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_HateCollect_C>();
	}
};
static_assert(alignof(USkill_RBL_HateCollect_C) == 0x000008, "Wrong alignment on USkill_RBL_HateCollect_C");
static_assert(sizeof(USkill_RBL_HateCollect_C) == 0x0003A8, "Wrong size on USkill_RBL_HateCollect_C");

}


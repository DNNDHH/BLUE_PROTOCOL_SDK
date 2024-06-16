#pragma once

 

// Package: Skill_MGC_EngramAmp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_MGC_EngramAmp.Skill_MGC_EngramAmp_C
// 0x0000 (0x0480 - 0x0480)
class USkill_MGC_EngramAmp_C final : public USBMagicianElementAmpSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_MGC_EngramAmp_C">();
	}
	static class USkill_MGC_EngramAmp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_MGC_EngramAmp_C>();
	}
};
static_assert(alignof(USkill_MGC_EngramAmp_C) == 0x000008, "Wrong alignment on USkill_MGC_EngramAmp_C");
static_assert(sizeof(USkill_MGC_EngramAmp_C) == 0x000480, "Wrong size on USkill_MGC_EngramAmp_C");

}


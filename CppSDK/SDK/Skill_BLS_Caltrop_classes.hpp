#pragma once

 

// Package: Skill_BLS_Caltrop

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_BLS_Caltrop.Skill_BLS_Caltrop_C
// 0x0000 (0x0390 - 0x0390)
class USkill_BLS_Caltrop_C final : public USBBlasterMarkerShootSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_BLS_Caltrop_C">();
	}
	static class USkill_BLS_Caltrop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_BLS_Caltrop_C>();
	}
};
static_assert(alignof(USkill_BLS_Caltrop_C) == 0x000008, "Wrong alignment on USkill_BLS_Caltrop_C");
static_assert(sizeof(USkill_BLS_Caltrop_C) == 0x000390, "Wrong size on USkill_BLS_Caltrop_C");

}


#pragma once

 

// Package: Skill_RBL_CelestePillar

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Skill_RBL_CelestePillar.Skill_RBL_CelestePillar_C
// 0x0000 (0x0380 - 0x0380)
class USkill_RBL_CelestePillar_C final : public USBRebellionMarkerChargeSkill
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Skill_RBL_CelestePillar_C">();
	}
	static class USkill_RBL_CelestePillar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkill_RBL_CelestePillar_C>();
	}
};
static_assert(alignof(USkill_RBL_CelestePillar_C) == 0x000008, "Wrong alignment on USkill_RBL_CelestePillar_C");
static_assert(sizeof(USkill_RBL_CelestePillar_C) == 0x000380, "Wrong size on USkill_RBL_CelestePillar_C");

}


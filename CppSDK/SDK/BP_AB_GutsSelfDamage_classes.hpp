#pragma once

 

// Package: BP_AB_GutsSelfDamage

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_GutsSelfDamage.BP_AB_GutsSelfDamage_C
// 0x0000 (0x0080 - 0x0080)
class UBP_AB_GutsSelfDamage_C final : public USBAbilityGutsSelfDamage
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_GutsSelfDamage_C">();
	}
	static class UBP_AB_GutsSelfDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_GutsSelfDamage_C>();
	}
};
static_assert(alignof(UBP_AB_GutsSelfDamage_C) == 0x000008, "Wrong alignment on UBP_AB_GutsSelfDamage_C");
static_assert(sizeof(UBP_AB_GutsSelfDamage_C) == 0x000080, "Wrong size on UBP_AB_GutsSelfDamage_C");

}


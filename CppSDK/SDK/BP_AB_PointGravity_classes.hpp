#pragma once

 

// Package: BP_AB_PointGravity

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_PointGravity.BP_AB_PointGravity_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_AB_PointGravity_C : public USBAbilityPointGravity
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_PointGravity_C">();
	}
	static class UBP_AB_PointGravity_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_PointGravity_C>();
	}
};
static_assert(alignof(UBP_AB_PointGravity_C) == 0x000008, "Wrong alignment on UBP_AB_PointGravity_C");
static_assert(sizeof(UBP_AB_PointGravity_C) == 0x0000B8, "Wrong size on UBP_AB_PointGravity_C");

}


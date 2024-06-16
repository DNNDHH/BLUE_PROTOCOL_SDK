#pragma once

 

// Package: BP_AB_PointGravity_Movable

#include "Basic.hpp"

#include "BP_AB_PointGravity_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_PointGravity_Movable.BP_AB_PointGravity_Movable_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_AB_PointGravity_Movable_C final : public UBP_AB_PointGravity_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_PointGravity_Movable_C">();
	}
	static class UBP_AB_PointGravity_Movable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_PointGravity_Movable_C>();
	}
};
static_assert(alignof(UBP_AB_PointGravity_Movable_C) == 0x000008, "Wrong alignment on UBP_AB_PointGravity_Movable_C");
static_assert(sizeof(UBP_AB_PointGravity_Movable_C) == 0x0000B8, "Wrong size on UBP_AB_PointGravity_Movable_C");

}


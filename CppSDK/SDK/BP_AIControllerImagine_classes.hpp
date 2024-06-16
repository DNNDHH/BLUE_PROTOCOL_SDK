#pragma once

 

// Package: BP_AIControllerImagine

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AIControllerImagine.BP_AIControllerImagine_C
// 0x0000 (0x0340 - 0x0340)
class ABP_AIControllerImagine_C final : public ASBAIController_Imagine
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIControllerImagine_C">();
	}
	static class ABP_AIControllerImagine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_AIControllerImagine_C>();
	}
};
static_assert(alignof(ABP_AIControllerImagine_C) == 0x000008, "Wrong alignment on ABP_AIControllerImagine_C");
static_assert(sizeof(ABP_AIControllerImagine_C) == 0x000340, "Wrong size on ABP_AIControllerImagine_C");

}


#pragma once

 

// Package: BP_AB_STRUp

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_STRUp.BP_AB_STRUp_C
// 0x0000 (0x0090 - 0x0090)
class UBP_AB_STRUp_C final : public USBAbilityBaseStatusBoost
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_STRUp_C">();
	}
	static class UBP_AB_STRUp_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_STRUp_C>();
	}
};
static_assert(alignof(UBP_AB_STRUp_C) == 0x000008, "Wrong alignment on UBP_AB_STRUp_C");
static_assert(sizeof(UBP_AB_STRUp_C) == 0x000090, "Wrong size on UBP_AB_STRUp_C");

}

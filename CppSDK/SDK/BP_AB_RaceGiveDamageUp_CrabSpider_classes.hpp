#pragma once

 

// Package: BP_AB_RaceGiveDamageUp_CrabSpider

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_RaceGiveDamageUp_CrabSpider.BP_AB_RaceGiveDamageUp_CrabSpider_C
// 0x0000 (0x0090 - 0x0090)
class UBP_AB_RaceGiveDamageUp_CrabSpider_C final : public USBAbilityStatusRaceGiveDamage
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_RaceGiveDamageUp_CrabSpider_C">();
	}
	static class UBP_AB_RaceGiveDamageUp_CrabSpider_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_RaceGiveDamageUp_CrabSpider_C>();
	}
};
static_assert(alignof(UBP_AB_RaceGiveDamageUp_CrabSpider_C) == 0x000008, "Wrong alignment on UBP_AB_RaceGiveDamageUp_CrabSpider_C");
static_assert(sizeof(UBP_AB_RaceGiveDamageUp_CrabSpider_C) == 0x000090, "Wrong size on UBP_AB_RaceGiveDamageUp_CrabSpider_C");

}


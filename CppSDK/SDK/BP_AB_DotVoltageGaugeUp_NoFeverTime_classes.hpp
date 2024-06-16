#pragma once

 

// Package: BP_AB_DotVoltageGaugeUp_NoFeverTime

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_DotVoltageGaugeUp_NoFeverTime.BP_AB_DotVoltageGaugeUp_NoFeverTime_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_AB_DotVoltageGaugeUp_NoFeverTime_C final : public USBAbilityDotVoltageGaugeUp
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_DotVoltageGaugeUp_NoFeverTime_C">();
	}
	static class UBP_AB_DotVoltageGaugeUp_NoFeverTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_DotVoltageGaugeUp_NoFeverTime_C>();
	}
};
static_assert(alignof(UBP_AB_DotVoltageGaugeUp_NoFeverTime_C) == 0x000008, "Wrong alignment on UBP_AB_DotVoltageGaugeUp_NoFeverTime_C");
static_assert(sizeof(UBP_AB_DotVoltageGaugeUp_NoFeverTime_C) == 0x0000A0, "Wrong size on UBP_AB_DotVoltageGaugeUp_NoFeverTime_C");

}


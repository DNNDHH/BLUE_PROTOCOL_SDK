#pragma once

 

// Package: BP_AB_RecoveryHP_Rate

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_RecoveryHP_Rate.BP_AB_RecoveryHP_Rate_C
// 0x0000 (0x0088 - 0x0088)
class UBP_AB_RecoveryHP_Rate_C final : public USBAbilityRecoveryHP
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_RecoveryHP_Rate_C">();
	}
	static class UBP_AB_RecoveryHP_Rate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_RecoveryHP_Rate_C>();
	}
};
static_assert(alignof(UBP_AB_RecoveryHP_Rate_C) == 0x000008, "Wrong alignment on UBP_AB_RecoveryHP_Rate_C");
static_assert(sizeof(UBP_AB_RecoveryHP_Rate_C) == 0x000088, "Wrong size on UBP_AB_RecoveryHP_Rate_C");

}

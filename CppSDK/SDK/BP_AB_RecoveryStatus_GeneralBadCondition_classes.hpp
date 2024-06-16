#pragma once

 

// Package: BP_AB_RecoveryStatus_GeneralBadCondition

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_RecoveryStatus_GeneralBadCondition.BP_AB_RecoveryStatus_GeneralBadCondition_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_AB_RecoveryStatus_GeneralBadCondition_C final : public USBAbilityStatusRecovery
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_RecoveryStatus_GeneralBadCondition_C">();
	}
	static class UBP_AB_RecoveryStatus_GeneralBadCondition_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_RecoveryStatus_GeneralBadCondition_C>();
	}
};
static_assert(alignof(UBP_AB_RecoveryStatus_GeneralBadCondition_C) == 0x000008, "Wrong alignment on UBP_AB_RecoveryStatus_GeneralBadCondition_C");
static_assert(sizeof(UBP_AB_RecoveryStatus_GeneralBadCondition_C) == 0x0000A0, "Wrong size on UBP_AB_RecoveryStatus_GeneralBadCondition_C");

}


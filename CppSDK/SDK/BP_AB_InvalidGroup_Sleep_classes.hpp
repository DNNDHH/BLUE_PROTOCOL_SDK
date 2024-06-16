#pragma once

 

// Package: BP_AB_InvalidGroup_Sleep

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AB_InvalidGroup_Sleep.BP_AB_InvalidGroup_Sleep_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_AB_InvalidGroup_Sleep_C final : public USBAbilityInvalidStatus
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AB_InvalidGroup_Sleep_C">();
	}
	static class UBP_AB_InvalidGroup_Sleep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AB_InvalidGroup_Sleep_C>();
	}
};
static_assert(alignof(UBP_AB_InvalidGroup_Sleep_C) == 0x000008, "Wrong alignment on UBP_AB_InvalidGroup_Sleep_C");
static_assert(sizeof(UBP_AB_InvalidGroup_Sleep_C) == 0x0000A0, "Wrong size on UBP_AB_InvalidGroup_Sleep_C");

}


#pragma once

 

// Package: BP_ABC_PlayerClassBlaster

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ABC_PlayerClassBlaster.BP_ABC_PlayerClassBlaster_C
// 0x0000 (0x0040 - 0x0040)
class UBP_ABC_PlayerClassBlaster_C final : public USBAbilityConditionPlayerClass
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ABC_PlayerClassBlaster_C">();
	}
	static class UBP_ABC_PlayerClassBlaster_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ABC_PlayerClassBlaster_C>();
	}
};
static_assert(alignof(UBP_ABC_PlayerClassBlaster_C) == 0x000008, "Wrong alignment on UBP_ABC_PlayerClassBlaster_C");
static_assert(sizeof(UBP_ABC_PlayerClassBlaster_C) == 0x000040, "Wrong size on UBP_ABC_PlayerClassBlaster_C");

}


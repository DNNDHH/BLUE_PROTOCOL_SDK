#pragma once

 

// Package: BP_ABC_PlayerSolo

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ABC_PlayerSolo.BP_ABC_PlayerSolo_C
// 0x0000 (0x0038 - 0x0038)
class UBP_ABC_PlayerSolo_C final : public USBAbilityConditionInParty
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ABC_PlayerSolo_C">();
	}
	static class UBP_ABC_PlayerSolo_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ABC_PlayerSolo_C>();
	}
};
static_assert(alignof(UBP_ABC_PlayerSolo_C) == 0x000008, "Wrong alignment on UBP_ABC_PlayerSolo_C");
static_assert(sizeof(UBP_ABC_PlayerSolo_C) == 0x000038, "Wrong size on UBP_ABC_PlayerSolo_C");

}


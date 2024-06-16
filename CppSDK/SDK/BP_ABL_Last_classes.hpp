#pragma once

 

// Package: BP_ABL_Last

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ABL_Last.BP_ABL_Last_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_ABL_Last_C final : public USBAbilityLimit
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ABL_Last_C">();
	}
	static class UBP_ABL_Last_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ABL_Last_C>();
	}
};
static_assert(alignof(UBP_ABL_Last_C) == 0x000008, "Wrong alignment on UBP_ABL_Last_C");
static_assert(sizeof(UBP_ABL_Last_C) == 0x0000C8, "Wrong size on UBP_ABL_Last_C");

}


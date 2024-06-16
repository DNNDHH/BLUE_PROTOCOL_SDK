#pragma once

 

// Package: BP_ABL_NoEquipNoBiiling

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ABL_NoEquipNoBiiling.BP_ABL_NoEquipNoBiiling_C
// 0x0000 (0x00C8 - 0x00C8)
class UBP_ABL_NoEquipNoBiiling_C final : public USBAbilityLimit
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ABL_NoEquipNoBiiling_C">();
	}
	static class UBP_ABL_NoEquipNoBiiling_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ABL_NoEquipNoBiiling_C>();
	}
};
static_assert(alignof(UBP_ABL_NoEquipNoBiiling_C) == 0x000008, "Wrong alignment on UBP_ABL_NoEquipNoBiiling_C");
static_assert(sizeof(UBP_ABL_NoEquipNoBiiling_C) == 0x0000C8, "Wrong size on UBP_ABL_NoEquipNoBiiling_C");

}


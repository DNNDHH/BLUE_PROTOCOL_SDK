#pragma once

 

// Package: BP_WeaponManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WeaponManager.BP_WeaponManager_C
// 0x0000 (0x0058 - 0x0058)
class UBP_WeaponManager_C final : public USBWeaponManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponManager_C">();
	}
	static class UBP_WeaponManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WeaponManager_C>();
	}
};
static_assert(alignof(UBP_WeaponManager_C) == 0x000008, "Wrong alignment on UBP_WeaponManager_C");
static_assert(sizeof(UBP_WeaponManager_C) == 0x000058, "Wrong size on UBP_WeaponManager_C");

}


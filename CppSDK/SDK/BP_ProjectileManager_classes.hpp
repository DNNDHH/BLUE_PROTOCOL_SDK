#pragma once

 

// Package: BP_ProjectileManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ProjectileManager.BP_ProjectileManager_C
// 0x0000 (0x00F8 - 0x00F8)
class UBP_ProjectileManager_C final : public USBProjectileManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ProjectileManager_C">();
	}
	static class UBP_ProjectileManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ProjectileManager_C>();
	}
};
static_assert(alignof(UBP_ProjectileManager_C) == 0x000008, "Wrong alignment on UBP_ProjectileManager_C");
static_assert(sizeof(UBP_ProjectileManager_C) == 0x0000F8, "Wrong size on UBP_ProjectileManager_C");

}


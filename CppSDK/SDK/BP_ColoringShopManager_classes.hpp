#pragma once

 

// Package: BP_ColoringShopManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ColoringShopManager.BP_ColoringShopManager_C
// 0x0000 (0x0030 - 0x0030)
class UBP_ColoringShopManager_C final : public USBColoringShopManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ColoringShopManager_C">();
	}
	static class UBP_ColoringShopManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ColoringShopManager_C>();
	}
};
static_assert(alignof(UBP_ColoringShopManager_C) == 0x000008, "Wrong alignment on UBP_ColoringShopManager_C");
static_assert(sizeof(UBP_ColoringShopManager_C) == 0x000030, "Wrong size on UBP_ColoringShopManager_C");

}


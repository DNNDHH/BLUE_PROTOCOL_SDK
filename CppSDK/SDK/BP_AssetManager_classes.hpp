#pragma once

 

// Package: BP_AssetManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AssetManager.BP_AssetManager_C
// 0x0000 (0x0568 - 0x0568)
class UBP_AssetManager_C final : public USBAssetManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AssetManager_C">();
	}
	static class UBP_AssetManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AssetManager_C>();
	}
};
static_assert(alignof(UBP_AssetManager_C) == 0x000008, "Wrong alignment on UBP_AssetManager_C");
static_assert(sizeof(UBP_AssetManager_C) == 0x000568, "Wrong size on UBP_AssetManager_C");

}


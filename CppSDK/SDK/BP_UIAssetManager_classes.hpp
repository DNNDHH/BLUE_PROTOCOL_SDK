#pragma once

 

// Package: BP_UIAssetManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_UIAssetManager.BP_UIAssetManager_C
// 0x0000 (0x00D8 - 0x00D8)
class UBP_UIAssetManager_C final : public USBUIAssetManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIAssetManager_C">();
	}
	static class UBP_UIAssetManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIAssetManager_C>();
	}
};
static_assert(alignof(UBP_UIAssetManager_C) == 0x000008, "Wrong alignment on UBP_UIAssetManager_C");
static_assert(sizeof(UBP_UIAssetManager_C) == 0x0000D8, "Wrong size on UBP_UIAssetManager_C");

}


#pragma once

 

// Package: BP_MakeupManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_MakeupManager.BP_MakeupManager_C
// 0x0000 (0x0060 - 0x0060)
class UBP_MakeupManager_C final : public USBMakeupManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MakeupManager_C">();
	}
	static class UBP_MakeupManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_MakeupManager_C>();
	}
};
static_assert(alignof(UBP_MakeupManager_C) == 0x000008, "Wrong alignment on UBP_MakeupManager_C");
static_assert(sizeof(UBP_MakeupManager_C) == 0x000060, "Wrong size on UBP_MakeupManager_C");

}


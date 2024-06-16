#pragma once

 

// Package: BP_DemoManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DemoManager.BP_DemoManager_C
// 0x0000 (0x00F8 - 0x00F8)
class UBP_DemoManager_C final : public USBDemoManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DemoManager_C">();
	}
	static class UBP_DemoManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DemoManager_C>();
	}
};
static_assert(alignof(UBP_DemoManager_C) == 0x000008, "Wrong alignment on UBP_DemoManager_C");
static_assert(sizeof(UBP_DemoManager_C) == 0x0000F8, "Wrong size on UBP_DemoManager_C");

}


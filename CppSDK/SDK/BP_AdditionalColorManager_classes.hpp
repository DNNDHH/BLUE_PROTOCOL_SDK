#pragma once

 

// Package: BP_AdditionalColorManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_AdditionalColorManager.BP_AdditionalColorManager_C
// 0x0000 (0x0058 - 0x0058)
class UBP_AdditionalColorManager_C final : public USBAdditionalColorManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AdditionalColorManager_C">();
	}
	static class UBP_AdditionalColorManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AdditionalColorManager_C>();
	}
};
static_assert(alignof(UBP_AdditionalColorManager_C) == 0x000008, "Wrong alignment on UBP_AdditionalColorManager_C");
static_assert(sizeof(UBP_AdditionalColorManager_C) == 0x000058, "Wrong size on UBP_AdditionalColorManager_C");

}


#pragma once

 

// Package: BP_SBScreenShotUtils

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBScreenShotUtils.BP_SBScreenShotUtils_C
// 0x0000 (0x00C0 - 0x00C0)
class UBP_SBScreenShotUtils_C final : public USBScreenShotUtils
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBScreenShotUtils_C">();
	}
	static class UBP_SBScreenShotUtils_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SBScreenShotUtils_C>();
	}
};
static_assert(alignof(UBP_SBScreenShotUtils_C) == 0x000008, "Wrong alignment on UBP_SBScreenShotUtils_C");
static_assert(sizeof(UBP_SBScreenShotUtils_C) == 0x0000C0, "Wrong size on UBP_SBScreenShotUtils_C");

}


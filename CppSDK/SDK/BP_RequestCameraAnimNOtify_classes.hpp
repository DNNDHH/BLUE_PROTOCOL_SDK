#pragma once

 

// Package: BP_RequestCameraAnimNOtify

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_RequestCameraAnimNOtify.BP_RequestCameraAnimNotify_C
// 0x0000 (0x0050 - 0x0050)
class UBP_RequestCameraAnimNotify_C final : public USBAnimNotify_RequestCamera
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RequestCameraAnimNotify_C">();
	}
	static class UBP_RequestCameraAnimNotify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_RequestCameraAnimNotify_C>();
	}
};
static_assert(alignof(UBP_RequestCameraAnimNotify_C) == 0x000008, "Wrong alignment on UBP_RequestCameraAnimNotify_C");
static_assert(sizeof(UBP_RequestCameraAnimNotify_C) == 0x000050, "Wrong size on UBP_RequestCameraAnimNotify_C");

}


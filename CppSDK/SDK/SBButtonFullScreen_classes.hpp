#pragma once

 

// Package: SBButtonFullScreen

#include "Basic.hpp"

#include "SBButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBButtonFullScreen.SBButtonFullScreen_C
// 0x0000 (0x0498 - 0x0498)
class USBButtonFullScreen_C final : public USBButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBButtonFullScreen_C">();
	}
	static class USBButtonFullScreen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBButtonFullScreen_C>();
	}
};
static_assert(alignof(USBButtonFullScreen_C) == 0x000008, "Wrong alignment on USBButtonFullScreen_C");
static_assert(sizeof(USBButtonFullScreen_C) == 0x000498, "Wrong size on USBButtonFullScreen_C");

}


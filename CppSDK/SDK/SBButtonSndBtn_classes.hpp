#pragma once

 

// Package: SBButtonSndBtn

#include "Basic.hpp"

#include "SBButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBButtonSndBtn.SBButtonSndBtn_C
// 0x0000 (0x0498 - 0x0498)
class USBButtonSndBtn_C final : public USBButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBButtonSndBtn_C">();
	}
	static class USBButtonSndBtn_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBButtonSndBtn_C>();
	}
};
static_assert(alignof(USBButtonSndBtn_C) == 0x000008, "Wrong alignment on USBButtonSndBtn_C");
static_assert(sizeof(USBButtonSndBtn_C) == 0x000498, "Wrong size on USBButtonSndBtn_C");

}


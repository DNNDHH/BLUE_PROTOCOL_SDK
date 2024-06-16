#pragma once

 

// Package: SBButtonCmn08

#include "Basic.hpp"

#include "SBButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBButtonCmn08.SBButtonCmn08_C
// 0x0000 (0x0498 - 0x0498)
class USBButtonCmn08_C final : public USBButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBButtonCmn08_C">();
	}
	static class USBButtonCmn08_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBButtonCmn08_C>();
	}
};
static_assert(alignof(USBButtonCmn08_C) == 0x000008, "Wrong alignment on USBButtonCmn08_C");
static_assert(sizeof(USBButtonCmn08_C) == 0x000498, "Wrong size on USBButtonCmn08_C");

}


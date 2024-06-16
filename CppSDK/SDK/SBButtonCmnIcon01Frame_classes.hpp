#pragma once

 

// Package: SBButtonCmnIcon01Frame

#include "Basic.hpp"

#include "SBButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBButtonCmnIcon01Frame.SBButtonCmnIcon01Frame_C
// 0x0000 (0x0498 - 0x0498)
class USBButtonCmnIcon01Frame_C final : public USBButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBButtonCmnIcon01Frame_C">();
	}
	static class USBButtonCmnIcon01Frame_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBButtonCmnIcon01Frame_C>();
	}
};
static_assert(alignof(USBButtonCmnIcon01Frame_C) == 0x000008, "Wrong alignment on USBButtonCmnIcon01Frame_C");
static_assert(sizeof(USBButtonCmnIcon01Frame_C) == 0x000498, "Wrong size on USBButtonCmnIcon01Frame_C");

}


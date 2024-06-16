#pragma once

 

// Package: SBTextButtonCmnBtn16

#include "Basic.hpp"

#include "SBTextButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBTextButtonCmnBtn16.SBTextButtonCmnBtn16_C
// 0x0000 (0x04E0 - 0x04E0)
class USBTextButtonCmnBtn16_C final : public USBTextButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBTextButtonCmnBtn16_C">();
	}
	static class USBTextButtonCmnBtn16_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBTextButtonCmnBtn16_C>();
	}
};
static_assert(alignof(USBTextButtonCmnBtn16_C) == 0x000008, "Wrong alignment on USBTextButtonCmnBtn16_C");
static_assert(sizeof(USBTextButtonCmnBtn16_C) == 0x0004E0, "Wrong size on USBTextButtonCmnBtn16_C");

}


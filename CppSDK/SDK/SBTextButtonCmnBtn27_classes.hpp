#pragma once

 

// Package: SBTextButtonCmnBtn27

#include "Basic.hpp"

#include "SBTextButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBTextButtonCmnBtn27.SBTextButtonCmnBtn27_C
// 0x0000 (0x04E0 - 0x04E0)
class USBTextButtonCmnBtn27_C final : public USBTextButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBTextButtonCmnBtn27_C">();
	}
	static class USBTextButtonCmnBtn27_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBTextButtonCmnBtn27_C>();
	}
};
static_assert(alignof(USBTextButtonCmnBtn27_C) == 0x000008, "Wrong alignment on USBTextButtonCmnBtn27_C");
static_assert(sizeof(USBTextButtonCmnBtn27_C) == 0x0004E0, "Wrong size on USBTextButtonCmnBtn27_C");

}


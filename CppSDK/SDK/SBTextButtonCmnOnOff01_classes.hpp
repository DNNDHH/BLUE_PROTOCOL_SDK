#pragma once

 

// Package: SBTextButtonCmnOnOff01

#include "Basic.hpp"

#include "SBTextButton_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBTextButtonCmnOnOff01.SBTextButtonCmnOnOff01_C
// 0x0000 (0x04E0 - 0x04E0)
class USBTextButtonCmnOnOff01_C final : public USBTextButton_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBTextButtonCmnOnOff01_C">();
	}
	static class USBTextButtonCmnOnOff01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBTextButtonCmnOnOff01_C>();
	}
};
static_assert(alignof(USBTextButtonCmnOnOff01_C) == 0x000008, "Wrong alignment on USBTextButtonCmnOnOff01_C");
static_assert(sizeof(USBTextButtonCmnOnOff01_C) == 0x0004E0, "Wrong size on USBTextButtonCmnOnOff01_C");

}


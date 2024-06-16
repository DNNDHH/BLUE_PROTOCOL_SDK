#pragma once

 

// Package: SBCheckBoxCmnCheckBox01

#include "Basic.hpp"

#include "SBCheckBox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBCheckBoxCmnCheckBox01.SBCheckBoxCmnCheckBox01_C
// 0x0000 (0x07E8 - 0x07E8)
class USBCheckBoxCmnCheckBox01_C final : public USBCheckBox_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBCheckBoxCmnCheckBox01_C">();
	}
	static class USBCheckBoxCmnCheckBox01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBCheckBoxCmnCheckBox01_C>();
	}
};
static_assert(alignof(USBCheckBoxCmnCheckBox01_C) == 0x000008, "Wrong alignment on USBCheckBoxCmnCheckBox01_C");
static_assert(sizeof(USBCheckBoxCmnCheckBox01_C) == 0x0007E8, "Wrong size on USBCheckBoxCmnCheckBox01_C");

}


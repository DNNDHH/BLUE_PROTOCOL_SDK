#pragma once

 

// Package: SBComboBox

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBComboBox.SBComboBox_C
// 0x0000 (0x0EA8 - 0x0EA8)
class USBComboBox_C : public USBComboBoxStringBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBComboBox_C">();
	}
	static class USBComboBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBComboBox_C>();
	}
};
static_assert(alignof(USBComboBox_C) == 0x000008, "Wrong alignment on USBComboBox_C");
static_assert(sizeof(USBComboBox_C) == 0x000EA8, "Wrong size on USBComboBox_C");

}


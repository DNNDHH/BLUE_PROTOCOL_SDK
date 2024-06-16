#pragma once

 

// Package: SBComboBoxCmn01

#include "Basic.hpp"

#include "SBComboBox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBComboBoxCmn01.SBComboBoxCmn01_C
// 0x0000 (0x0EA8 - 0x0EA8)
class USBComboBoxCmn01_C final : public USBComboBox_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBComboBoxCmn01_C">();
	}
	static class USBComboBoxCmn01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBComboBoxCmn01_C>();
	}
};
static_assert(alignof(USBComboBoxCmn01_C) == 0x000008, "Wrong alignment on USBComboBoxCmn01_C");
static_assert(sizeof(USBComboBoxCmn01_C) == 0x000EA8, "Wrong size on USBComboBoxCmn01_C");

}


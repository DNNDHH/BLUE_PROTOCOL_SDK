#pragma once

 

// Package: SBRadioBtnCmn01

#include "Basic.hpp"

#include "SBCheckBox_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SBRadioBtnCmn01.SBRadioBtnCmn01_C
// 0x0000 (0x07E8 - 0x07E8)
class USBRadioBtnCmn01_C final : public USBCheckBox_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SBRadioBtnCmn01_C">();
	}
	static class USBRadioBtnCmn01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USBRadioBtnCmn01_C>();
	}
};
static_assert(alignof(USBRadioBtnCmn01_C) == 0x000008, "Wrong alignment on USBRadioBtnCmn01_C");
static_assert(sizeof(USBRadioBtnCmn01_C) == 0x0007E8, "Wrong size on USBRadioBtnCmn01_C");

}


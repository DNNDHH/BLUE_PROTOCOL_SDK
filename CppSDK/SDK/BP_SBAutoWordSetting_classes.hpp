#pragma once

 

// Package: BP_SBAutoWordSetting

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBAutoWordSetting.BP_SBAutoWordSetting_C
// 0x0000 (0x00A8 - 0x00A8)
class UBP_SBAutoWordSetting_C final : public USBAutoWordSetting
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBAutoWordSetting_C">();
	}
	static class UBP_SBAutoWordSetting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SBAutoWordSetting_C>();
	}
};
static_assert(alignof(UBP_SBAutoWordSetting_C) == 0x000008, "Wrong alignment on UBP_SBAutoWordSetting_C");
static_assert(sizeof(UBP_SBAutoWordSetting_C) == 0x0000A8, "Wrong size on UBP_SBAutoWordSetting_C");

}


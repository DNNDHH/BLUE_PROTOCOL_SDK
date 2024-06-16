#pragma once

 

// Package: BP_SBCheatManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SBCheatManager.BP_SBCheatManager_C
// 0x0000 (0x0130 - 0x0130)
class UBP_SBCheatManager_C final : public USBCheatManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SBCheatManager_C">();
	}
	static class UBP_SBCheatManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SBCheatManager_C>();
	}
};
static_assert(alignof(UBP_SBCheatManager_C) == 0x000008, "Wrong alignment on UBP_SBCheatManager_C");
static_assert(sizeof(UBP_SBCheatManager_C) == 0x000130, "Wrong size on UBP_SBCheatManager_C");

}


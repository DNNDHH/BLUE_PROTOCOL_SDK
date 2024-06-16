#pragma once

 

// Package: BP_ConfigSaveManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ConfigSaveManager.BP_ConfigSaveManager_C
// 0x0000 (0x0AF0 - 0x0AF0)
class UBP_ConfigSaveManager_C final : public USBConfigureSaveManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ConfigSaveManager_C">();
	}
	static class UBP_ConfigSaveManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ConfigSaveManager_C>();
	}
};
static_assert(alignof(UBP_ConfigSaveManager_C) == 0x000008, "Wrong alignment on UBP_ConfigSaveManager_C");
static_assert(sizeof(UBP_ConfigSaveManager_C) == 0x000AF0, "Wrong size on UBP_ConfigSaveManager_C");

}


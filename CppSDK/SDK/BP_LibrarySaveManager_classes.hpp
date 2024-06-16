#pragma once

 

// Package: BP_LibrarySaveManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_LibrarySaveManager.BP_LibrarySaveManager_C
// 0x0000 (0x0248 - 0x0248)
class UBP_LibrarySaveManager_C final : public USBLibrarySaveManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LibrarySaveManager_C">();
	}
	static class UBP_LibrarySaveManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_LibrarySaveManager_C>();
	}
};
static_assert(alignof(UBP_LibrarySaveManager_C) == 0x000008, "Wrong alignment on UBP_LibrarySaveManager_C");
static_assert(sizeof(UBP_LibrarySaveManager_C) == 0x000248, "Wrong size on UBP_LibrarySaveManager_C");

}


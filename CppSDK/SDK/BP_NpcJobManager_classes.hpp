#pragma once

 

// Package: BP_NpcJobManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_NpcJobManager.BP_NpcJobManager_C
// 0x0000 (0x0078 - 0x0078)
class UBP_NpcJobManager_C final : public USBNpcParameterManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NpcJobManager_C">();
	}
	static class UBP_NpcJobManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NpcJobManager_C>();
	}
};
static_assert(alignof(UBP_NpcJobManager_C) == 0x000008, "Wrong alignment on UBP_NpcJobManager_C");
static_assert(sizeof(UBP_NpcJobManager_C) == 0x000078, "Wrong size on UBP_NpcJobManager_C");

}


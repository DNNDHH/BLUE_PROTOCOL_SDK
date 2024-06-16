#pragma once

 

// Package: BP_JingleManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_JingleManager.BP_JingleManager_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_JingleManager_C final : public UJingleManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_JingleManager_C">();
	}
	static class UBP_JingleManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_JingleManager_C>();
	}
};
static_assert(alignof(UBP_JingleManager_C) == 0x000008, "Wrong alignment on UBP_JingleManager_C");
static_assert(sizeof(UBP_JingleManager_C) == 0x0000B8, "Wrong size on UBP_JingleManager_C");

}


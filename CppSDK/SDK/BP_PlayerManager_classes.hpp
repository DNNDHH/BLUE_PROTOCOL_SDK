#pragma once

 

// Package: BP_PlayerManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerManager.BP_PlayerManager_C
// 0x0000 (0x05C0 - 0x05C0)
class UBP_PlayerManager_C final : public USBPlayerManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerManager_C">();
	}
	static class UBP_PlayerManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerManager_C>();
	}
};
static_assert(alignof(UBP_PlayerManager_C) == 0x000008, "Wrong alignment on UBP_PlayerManager_C");
static_assert(sizeof(UBP_PlayerManager_C) == 0x0005C0, "Wrong size on UBP_PlayerManager_C");

}


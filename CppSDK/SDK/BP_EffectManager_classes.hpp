#pragma once

 

// Package: BP_EffectManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_EffectManager.BP_EffectManager_C
// 0x0000 (0x6170 - 0x6170)
class UBP_EffectManager_C final : public USBEffectManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_EffectManager_C">();
	}
	static class UBP_EffectManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_EffectManager_C>();
	}
};
static_assert(alignof(UBP_EffectManager_C) == 0x000008, "Wrong alignment on UBP_EffectManager_C");
static_assert(sizeof(UBP_EffectManager_C) == 0x006170, "Wrong size on UBP_EffectManager_C");

}


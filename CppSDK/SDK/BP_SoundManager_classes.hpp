#pragma once

 

// Package: BP_SoundManager

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SoundManager.BP_SoundManager_C
// 0x0000 (0x0DB0 - 0x0DB0)
class UBP_SoundManager_C final : public USBSoundManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SoundManager_C">();
	}
	static class UBP_SoundManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SoundManager_C>();
	}
};
static_assert(alignof(UBP_SoundManager_C) == 0x000010, "Wrong alignment on UBP_SoundManager_C");
static_assert(sizeof(UBP_SoundManager_C) == 0x000DB0, "Wrong size on UBP_SoundManager_C");

}


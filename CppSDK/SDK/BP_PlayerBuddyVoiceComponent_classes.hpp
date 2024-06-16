#pragma once

 

// Package: BP_PlayerBuddyVoiceComponent

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayerBuddyVoiceComponent.BP_PlayerBuddyVoiceComponent_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_PlayerBuddyVoiceComponent_C final : public USBPlayerBuddyVoiceComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerBuddyVoiceComponent_C">();
	}
	static class UBP_PlayerBuddyVoiceComponent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerBuddyVoiceComponent_C>();
	}
};
static_assert(alignof(UBP_PlayerBuddyVoiceComponent_C) == 0x000008, "Wrong alignment on UBP_PlayerBuddyVoiceComponent_C");
static_assert(sizeof(UBP_PlayerBuddyVoiceComponent_C) == 0x0000E0, "Wrong size on UBP_PlayerBuddyVoiceComponent_C");

}


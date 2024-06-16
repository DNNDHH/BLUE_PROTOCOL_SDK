#pragma once

 

// Package: BP_PlayPlayerVoiceNotify

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_PlayPlayerVoiceNotify.BP_PlayPlayerVoiceNotify_C
// 0x0000 (0x0080 - 0x0080)
class UBP_PlayPlayerVoiceNotify_C final : public USBAnimNotify_PlayPlayerVoice
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayPlayerVoiceNotify_C">();
	}
	static class UBP_PlayPlayerVoiceNotify_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayPlayerVoiceNotify_C>();
	}
};
static_assert(alignof(UBP_PlayPlayerVoiceNotify_C) == 0x000008, "Wrong alignment on UBP_PlayPlayerVoiceNotify_C");
static_assert(sizeof(UBP_PlayPlayerVoiceNotify_C) == 0x000080, "Wrong size on UBP_PlayPlayerVoiceNotify_C");

}


#pragma once

 

// Package: MiniMapIconChallengeQuest

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconChallengeQuest.MiniMapIconChallengeQuest_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconChallengeQuest_C final : public USBMiniMapIconChallengeQuest
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconChallengeQuest_C">();
	}
	static class UMiniMapIconChallengeQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconChallengeQuest_C>();
	}
};
static_assert(alignof(UMiniMapIconChallengeQuest_C) == 0x000008, "Wrong alignment on UMiniMapIconChallengeQuest_C");
static_assert(sizeof(UMiniMapIconChallengeQuest_C) == 0x000290, "Wrong size on UMiniMapIconChallengeQuest_C");

}


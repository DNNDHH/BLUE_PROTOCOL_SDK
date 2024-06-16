#pragma once

 

// Package: MiniMapIconUpdraft

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconUpdraft.MiniMapIconUpdraft_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconUpdraft_C final : public USBMiniMapIconUpdraft
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconUpdraft_C">();
	}
	static class UMiniMapIconUpdraft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconUpdraft_C>();
	}
};
static_assert(alignof(UMiniMapIconUpdraft_C) == 0x000008, "Wrong alignment on UMiniMapIconUpdraft_C");
static_assert(sizeof(UMiniMapIconUpdraft_C) == 0x000290, "Wrong size on UMiniMapIconUpdraft_C");

}


#pragma once

 

// Package: MiniMapTime

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapTime.MiniMapTime_C
// 0x0000 (0x0298 - 0x0298)
class UMiniMapTime_C final : public USBMiniMapTime
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapTime_C">();
	}
	static class UMiniMapTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapTime_C>();
	}
};
static_assert(alignof(UMiniMapTime_C) == 0x000008, "Wrong alignment on UMiniMapTime_C");
static_assert(sizeof(UMiniMapTime_C) == 0x000298, "Wrong size on UMiniMapTime_C");

}


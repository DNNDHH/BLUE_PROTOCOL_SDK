#pragma once

 

// Package: IconWarpPoint

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconWarpPoint.IconWarpPoint_C
// 0x0000 (0x02E0 - 0x02E0)
class UIconWarpPoint_C final : public USBMapWarpIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconWarpPoint_C">();
	}
	static class UIconWarpPoint_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconWarpPoint_C>();
	}
};
static_assert(alignof(UIconWarpPoint_C) == 0x000008, "Wrong alignment on UIconWarpPoint_C");
static_assert(sizeof(UIconWarpPoint_C) == 0x0002E0, "Wrong size on UIconWarpPoint_C");

}


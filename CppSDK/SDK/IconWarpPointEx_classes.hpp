#pragma once

 

// Package: IconWarpPointEx

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconWarpPointEx.IconWarpPointEx_C
// 0x0000 (0x02C0 - 0x02C0)
class UIconWarpPointEx_C final : public USBMapWarpIconEx
{
public:
	void Set_Icon_Image();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconWarpPointEx_C">();
	}
	static class UIconWarpPointEx_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconWarpPointEx_C>();
	}
};
static_assert(alignof(UIconWarpPointEx_C) == 0x000008, "Wrong alignment on UIconWarpPointEx_C");
static_assert(sizeof(UIconWarpPointEx_C) == 0x0002C0, "Wrong size on UIconWarpPointEx_C");

}


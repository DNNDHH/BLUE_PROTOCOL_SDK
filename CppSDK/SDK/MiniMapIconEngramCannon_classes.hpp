#pragma once

 

// Package: MiniMapIconEngramCannon

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniMapIconEngramCannon.MiniMapIconEngramCannon_C
// 0x0000 (0x0290 - 0x0290)
class UMiniMapIconEngramCannon_C final : public USBMiniMapIconEngramCannon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniMapIconEngramCannon_C">();
	}
	static class UMiniMapIconEngramCannon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniMapIconEngramCannon_C>();
	}
};
static_assert(alignof(UMiniMapIconEngramCannon_C) == 0x000008, "Wrong alignment on UMiniMapIconEngramCannon_C");
static_assert(sizeof(UMiniMapIconEngramCannon_C) == 0x000290, "Wrong size on UMiniMapIconEngramCannon_C");

}


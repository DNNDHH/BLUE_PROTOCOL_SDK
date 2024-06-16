#pragma once

 

// Package: IconPlayer

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconPlayer.IconPlayer_C
// 0x0000 (0x02A8 - 0x02A8)
class UIconPlayer_C final : public USBMapPlayerIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconPlayer_C">();
	}
	static class UIconPlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconPlayer_C>();
	}
};
static_assert(alignof(UIconPlayer_C) == 0x000008, "Wrong alignment on UIconPlayer_C");
static_assert(sizeof(UIconPlayer_C) == 0x0002A8, "Wrong size on UIconPlayer_C");

}


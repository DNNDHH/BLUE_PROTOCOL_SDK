#pragma once

 

// Package: IconRaidPotal

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconRaidPotal.IconRaidPotal_C
// 0x0000 (0x02F0 - 0x02F0)
class UIconRaidPotal_C final : public USBMapIDIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconRaidPotal_C">();
	}
	static class UIconRaidPotal_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconRaidPotal_C>();
	}
};
static_assert(alignof(UIconRaidPotal_C) == 0x000008, "Wrong alignment on UIconRaidPotal_C");
static_assert(sizeof(UIconRaidPotal_C) == 0x0002F0, "Wrong size on UIconRaidPotal_C");

}


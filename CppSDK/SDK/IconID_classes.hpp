#pragma once

 

// Package: IconID

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconID.IconID_C
// 0x0000 (0x02F0 - 0x02F0)
class UIconID_C final : public USBMapIDIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconID_C">();
	}
	static class UIconID_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconID_C>();
	}
};
static_assert(alignof(UIconID_C) == 0x000008, "Wrong alignment on UIconID_C");
static_assert(sizeof(UIconID_C) == 0x0002F0, "Wrong size on UIconID_C");

}


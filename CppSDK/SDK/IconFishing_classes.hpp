#pragma once

 

// Package: IconFishing

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconFishing.IconFishing_C
// 0x0000 (0x0298 - 0x0298)
class UIconFishing_C final : public USBMapFishingIcon
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconFishing_C">();
	}
	static class UIconFishing_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconFishing_C>();
	}
};
static_assert(alignof(UIconFishing_C) == 0x000008, "Wrong alignment on UIconFishing_C");
static_assert(sizeof(UIconFishing_C) == 0x000298, "Wrong size on UIconFishing_C");

}


#pragma once

 

// Package: IconBuddy

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconBuddy.IconBuddy_C
// 0x0000 (0x02B8 - 0x02B8)
class UIconBuddy_C final : public USBMapBuddyIcon
{
public:
	void OnSetInside(bool IsInSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconBuddy_C">();
	}
	static class UIconBuddy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconBuddy_C>();
	}
};
static_assert(alignof(UIconBuddy_C) == 0x000008, "Wrong alignment on UIconBuddy_C");
static_assert(sizeof(UIconBuddy_C) == 0x0002B8, "Wrong size on UIconBuddy_C");

}


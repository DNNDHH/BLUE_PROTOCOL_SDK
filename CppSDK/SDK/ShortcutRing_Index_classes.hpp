#pragma once

 

// Package: ShortcutRing_Index

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutRing_Index.ShortcutRing_Index_C
// 0x0000 (0x0288 - 0x0288)
class UShortcutRing_Index_C final : public USBShortcutRingIndex
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutRing_Index_C">();
	}
	static class UShortcutRing_Index_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutRing_Index_C>();
	}
};
static_assert(alignof(UShortcutRing_Index_C) == 0x000008, "Wrong alignment on UShortcutRing_Index_C");
static_assert(sizeof(UShortcutRing_Index_C) == 0x000288, "Wrong size on UShortcutRing_Index_C");

}


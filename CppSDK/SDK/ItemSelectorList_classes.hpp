#pragma once

 

// Package: ItemSelectorList

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemSelectorList.ItemSelectorList_C
// 0x0000 (0x0280 - 0x0280)
class UItemSelectorList_C final : public USBItemSelectorList
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSelectorList_C">();
	}
	static class UItemSelectorList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemSelectorList_C>();
	}
};
static_assert(alignof(UItemSelectorList_C) == 0x000008, "Wrong alignment on UItemSelectorList_C");
static_assert(sizeof(UItemSelectorList_C) == 0x000280, "Wrong size on UItemSelectorList_C");

}


#pragma once

 

// Package: ItemSelectorNamePlate

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemSelectorNamePlate.ItemSelectorNamePlate_C
// 0x0000 (0x0280 - 0x0280)
class UItemSelectorNamePlate_C final : public USBItemSelectorNamePlate
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSelectorNamePlate_C">();
	}
	static class UItemSelectorNamePlate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemSelectorNamePlate_C>();
	}
};
static_assert(alignof(UItemSelectorNamePlate_C) == 0x000008, "Wrong alignment on UItemSelectorNamePlate_C");
static_assert(sizeof(UItemSelectorNamePlate_C) == 0x000280, "Wrong size on UItemSelectorNamePlate_C");

}


#pragma once

 

// Package: StepListItem_WishList

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepListItem_WishList.StepListItem_WishList_C
// 0x0000 (0x0288 - 0x0288)
class UStepListItem_WishList_C final : public USBStepListWishListItem
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepListItem_WishList_C">();
	}
	static class UStepListItem_WishList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepListItem_WishList_C>();
	}
};
static_assert(alignof(UStepListItem_WishList_C) == 0x000008, "Wrong alignment on UStepListItem_WishList_C");
static_assert(sizeof(UStepListItem_WishList_C) == 0x000288, "Wrong size on UStepListItem_WishList_C");

}


#pragma once

 

// Package: StepList_WishList

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StepList_WishList.StepList_WishList_C
// 0x0000 (0x0280 - 0x0280)
class UStepList_WishList_C final : public USBStepListWishList
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StepList_WishList_C">();
	}
	static class UStepList_WishList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStepList_WishList_C>();
	}
};
static_assert(alignof(UStepList_WishList_C) == 0x000008, "Wrong alignment on UStepList_WishList_C");
static_assert(sizeof(UStepList_WishList_C) == 0x000280, "Wrong size on UStepList_WishList_C");

}


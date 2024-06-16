#pragma once

 

// Package: ItemSelectorArrowLeft

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemSelectorArrowLeft.ItemSelectorArrowLeft_C
// 0x0008 (0x0280 - 0x0278)
class UItemSelectorArrowLeft_C final : public USBItemSelectorArrow
{
public:
	class UWidgetAnimation*                       ArrowLeft_Push;                                    // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void PlayAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSelectorArrowLeft_C">();
	}
	static class UItemSelectorArrowLeft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemSelectorArrowLeft_C>();
	}
};
static_assert(alignof(UItemSelectorArrowLeft_C) == 0x000008, "Wrong alignment on UItemSelectorArrowLeft_C");
static_assert(sizeof(UItemSelectorArrowLeft_C) == 0x000280, "Wrong size on UItemSelectorArrowLeft_C");
static_assert(offsetof(UItemSelectorArrowLeft_C, ArrowLeft_Push) == 0x000278, "Member 'UItemSelectorArrowLeft_C::ArrowLeft_Push' has a wrong offset!");

}


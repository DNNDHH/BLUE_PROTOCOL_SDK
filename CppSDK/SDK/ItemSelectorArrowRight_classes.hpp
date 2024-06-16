#pragma once

 

// Package: ItemSelectorArrowRight

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ItemSelectorArrowRight.ItemSelectorArrowRight_C
// 0x0008 (0x0280 - 0x0278)
class UItemSelectorArrowRight_C final : public USBItemSelectorArrow
{
public:
	class UWidgetAnimation*                       ArrowRight_Push;                                   // 0x0278(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void PlayAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ItemSelectorArrowRight_C">();
	}
	static class UItemSelectorArrowRight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItemSelectorArrowRight_C>();
	}
};
static_assert(alignof(UItemSelectorArrowRight_C) == 0x000008, "Wrong alignment on UItemSelectorArrowRight_C");
static_assert(sizeof(UItemSelectorArrowRight_C) == 0x000280, "Wrong size on UItemSelectorArrowRight_C");
static_assert(offsetof(UItemSelectorArrowRight_C, ArrowRight_Push) == 0x000278, "Member 'UItemSelectorArrowRight_C::ArrowRight_Push' has a wrong offset!");

}


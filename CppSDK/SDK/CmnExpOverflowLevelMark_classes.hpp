#pragma once

 

// Package: CmnExpOverflowLevelMark

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnExpOverflowLevelMark.CmnExpOverflowLevelMark_C
// 0x0008 (0x0280 - 0x0278)
class UCmnExpOverflowLevelMark_C final : public UUserWidget
{
public:
	class UWidgetSwitcher*                        WidgetSwitcher00;                                  // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetAsLevelCounterStop();
	void SetAsLevelLimit();
	void SwitchImage(int32 InActiveIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnExpOverflowLevelMark_C">();
	}
	static class UCmnExpOverflowLevelMark_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnExpOverflowLevelMark_C>();
	}
};
static_assert(alignof(UCmnExpOverflowLevelMark_C) == 0x000008, "Wrong alignment on UCmnExpOverflowLevelMark_C");
static_assert(sizeof(UCmnExpOverflowLevelMark_C) == 0x000280, "Wrong size on UCmnExpOverflowLevelMark_C");
static_assert(offsetof(UCmnExpOverflowLevelMark_C, WidgetSwitcher00) == 0x000278, "Member 'UCmnExpOverflowLevelMark_C::WidgetSwitcher00' has a wrong offset!");

}


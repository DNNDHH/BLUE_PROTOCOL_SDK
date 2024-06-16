#pragma once

 

// Package: CouponTitle

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CouponTitle.CouponTitle_C
// 0x0010 (0x0288 - 0x0278)
class UCouponTitle_C final : public UUserWidget
{
public:
	class UWidgetSwitcher*                        WidgetSwitcher_198;                                // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_Icon;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetTitleChange(int32 Param_Index);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CouponTitle_C">();
	}
	static class UCouponTitle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCouponTitle_C>();
	}
};
static_assert(alignof(UCouponTitle_C) == 0x000008, "Wrong alignment on UCouponTitle_C");
static_assert(sizeof(UCouponTitle_C) == 0x000288, "Wrong size on UCouponTitle_C");
static_assert(offsetof(UCouponTitle_C, WidgetSwitcher_198) == 0x000278, "Member 'UCouponTitle_C::WidgetSwitcher_198' has a wrong offset!");
static_assert(offsetof(UCouponTitle_C, WidgetSwitcher_Icon) == 0x000280, "Member 'UCouponTitle_C::WidgetSwitcher_Icon' has a wrong offset!");

}


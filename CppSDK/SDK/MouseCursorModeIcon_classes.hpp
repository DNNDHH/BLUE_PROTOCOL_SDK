#pragma once

 

// Package: MouseCursorModeIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MouseCursorModeIcon.MouseCursorModeIcon_C
// 0x0028 (0x02A0 - 0x0278)
class UMouseCursorModeIcon_C final : public UUserWidget
{
public:
	class UImage*                                 Image;                                             // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_45;                                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ToolTip;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Switch;                                            // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetSwitch(int32 ID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MouseCursorModeIcon_C">();
	}
	static class UMouseCursorModeIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMouseCursorModeIcon_C>();
	}
};
static_assert(alignof(UMouseCursorModeIcon_C) == 0x000008, "Wrong alignment on UMouseCursorModeIcon_C");
static_assert(sizeof(UMouseCursorModeIcon_C) == 0x0002A0, "Wrong size on UMouseCursorModeIcon_C");
static_assert(offsetof(UMouseCursorModeIcon_C, Image) == 0x000278, "Member 'UMouseCursorModeIcon_C::Image' has a wrong offset!");
static_assert(offsetof(UMouseCursorModeIcon_C, Image_1) == 0x000280, "Member 'UMouseCursorModeIcon_C::Image_1' has a wrong offset!");
static_assert(offsetof(UMouseCursorModeIcon_C, Image_45) == 0x000288, "Member 'UMouseCursorModeIcon_C::Image_45' has a wrong offset!");
static_assert(offsetof(UMouseCursorModeIcon_C, Image_ToolTip) == 0x000290, "Member 'UMouseCursorModeIcon_C::Image_ToolTip' has a wrong offset!");
static_assert(offsetof(UMouseCursorModeIcon_C, Switch) == 0x000298, "Member 'UMouseCursorModeIcon_C::Switch' has a wrong offset!");

}


#pragma once

 

// Package: ResizableWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ResizableWidget.ResizableWidget_C
// 0x0010 (0x0288 - 0x0278)
class UResizableWidget_C final : public UUserWidget
{
public:
	class UImage*                                 ResizeMark;                                        // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            ParentWidget;                                      // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ResizableWidget_C">();
	}
	static class UResizableWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UResizableWidget_C>();
	}
};
static_assert(alignof(UResizableWidget_C) == 0x000008, "Wrong alignment on UResizableWidget_C");
static_assert(sizeof(UResizableWidget_C) == 0x000288, "Wrong size on UResizableWidget_C");
static_assert(offsetof(UResizableWidget_C, ResizeMark) == 0x000278, "Member 'UResizableWidget_C::ResizeMark' has a wrong offset!");
static_assert(offsetof(UResizableWidget_C, ParentWidget) == 0x000280, "Member 'UResizableWidget_C::ParentWidget' has a wrong offset!");

}


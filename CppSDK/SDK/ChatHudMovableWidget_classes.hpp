#pragma once

 

// Package: ChatHudMovableWidget

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatHudMovableWidget.ChatHudMovableWidget_C
// 0x0008 (0x0280 - 0x0278)
class UChatHudMovableWidget_C final : public UUserWidget
{
public:
	class UUserWidget*                            ParentWidget;                                      // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatHudMovableWidget_C">();
	}
	static class UChatHudMovableWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatHudMovableWidget_C>();
	}
};
static_assert(alignof(UChatHudMovableWidget_C) == 0x000008, "Wrong alignment on UChatHudMovableWidget_C");
static_assert(sizeof(UChatHudMovableWidget_C) == 0x000280, "Wrong size on UChatHudMovableWidget_C");
static_assert(offsetof(UChatHudMovableWidget_C, ParentWidget) == 0x000278, "Member 'UChatHudMovableWidget_C::ParentWidget' has a wrong offset!");

}


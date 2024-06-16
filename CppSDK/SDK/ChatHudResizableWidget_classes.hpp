#pragma once

 

// Package: ChatHudResizableWidget

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatHudResizableWidget.ChatHudResizableWidget_C
// 0x0018 (0x0290 - 0x0278)
class UChatHudResizableWidget_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 ResizeMark;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUserWidget*                            ParentWidget;                                      // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChatHudResizableWidget(int32 EntryPoint);
	void Construct();
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatHudResizableWidget_C">();
	}
	static class UChatHudResizableWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatHudResizableWidget_C>();
	}
};
static_assert(alignof(UChatHudResizableWidget_C) == 0x000008, "Wrong alignment on UChatHudResizableWidget_C");
static_assert(sizeof(UChatHudResizableWidget_C) == 0x000290, "Wrong size on UChatHudResizableWidget_C");
static_assert(offsetof(UChatHudResizableWidget_C, UberGraphFrame) == 0x000278, "Member 'UChatHudResizableWidget_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatHudResizableWidget_C, ResizeMark) == 0x000280, "Member 'UChatHudResizableWidget_C::ResizeMark' has a wrong offset!");
static_assert(offsetof(UChatHudResizableWidget_C, ParentWidget) == 0x000288, "Member 'UChatHudResizableWidget_C::ParentWidget' has a wrong offset!");

}


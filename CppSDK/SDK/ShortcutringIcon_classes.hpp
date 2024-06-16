#pragma once

 

// Package: ShortcutringIcon

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ShortcutringIcon.ShortcutringIcon_C
// 0x0048 (0x02D0 - 0x0288)
class UShortcutringIcon_C final : public USBShortcutRingIcon
{
public:
	FMulticastInlineDelegateProperty_             OnHover;                                           // 0x0288(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnUnhover;                                         // 0x0298(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClick;                                           // 0x02A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClickRight;                                      // 0x02B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UDragDropOperation*                     DragDropOperation;                                 // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnHover__DelegateSignature(class UShortcutringIcon_C* Icon);
	void OnUnhover__DelegateSignature(class UShortcutringIcon_C* Icon);
	void OnClick__DelegateSignature(class UShortcutringIcon_C* Icon);
	void OnClickRight__DelegateSignature(class UShortcutringIcon_C* Icon);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetDragDropOperation(class UDragDropOperation* InDradDropOperation);
	class USBShortcutRingIconBase* OnCreateNoneIcon();
	class USBShortcutRingIconBase* OnCreateBasicIcon();
	class USBShortcutRingIconBase* OnCreateTextIcon();
	class USBShortcutRingIconBase* OnCreateCommandIcon();
	class USBShortcutRingIconBase* OnCreateWarpIcon();
	void OnBindIcon(class USBShortcutRingIconBase* InIcon);
	void OnUnbindIcon(class USBShortcutRingIconBase* InIcon);
	void Hover();
	void Unhover();

	void GetDragDropOperation(class UDragDropOperation** OutDragDropOperation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ShortcutringIcon_C">();
	}
	static class UShortcutringIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UShortcutringIcon_C>();
	}
};
static_assert(alignof(UShortcutringIcon_C) == 0x000008, "Wrong alignment on UShortcutringIcon_C");
static_assert(sizeof(UShortcutringIcon_C) == 0x0002D0, "Wrong size on UShortcutringIcon_C");
static_assert(offsetof(UShortcutringIcon_C, OnHover) == 0x000288, "Member 'UShortcutringIcon_C::OnHover' has a wrong offset!");
static_assert(offsetof(UShortcutringIcon_C, OnUnhover) == 0x000298, "Member 'UShortcutringIcon_C::OnUnhover' has a wrong offset!");
static_assert(offsetof(UShortcutringIcon_C, OnClick) == 0x0002A8, "Member 'UShortcutringIcon_C::OnClick' has a wrong offset!");
static_assert(offsetof(UShortcutringIcon_C, OnClickRight) == 0x0002B8, "Member 'UShortcutringIcon_C::OnClickRight' has a wrong offset!");
static_assert(offsetof(UShortcutringIcon_C, DragDropOperation) == 0x0002C8, "Member 'UShortcutringIcon_C::DragDropOperation' has a wrong offset!");

}


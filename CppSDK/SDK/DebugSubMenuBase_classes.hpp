#pragma once

 

// Package: DebugSubMenuBase

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugSubMenuBase.DebugSubMenuBase_C
// 0x0070 (0x0320 - 0x02B0)
class UDebugSubMenuBase_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                CloseButton;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Menu;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_Menu;                                      // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Title;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_X;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   TitleText;                                         // 0x02F8(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUserWidget*                            ParentMenu;                                        // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUserWidget*                            ChildMenu;                                         // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DebugSubMenuBase(int32 EntryPoint);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void CustomEvent_0(class UDebugButton_C* DebugButton);
	void AddButtonEx(const struct FSBDebugParameter& InParam);
	void AddButtonFromArray(const TArray<class FText>& ButtonLabels);
	void EventDispatcher_OnClicked_Event_0(class UDebugButton_C* DebugButton);
	void AddButton(const class FText& ButtonLabel);
	void AddButton_Internal(const class FText& ButtonLabel, class UDebugButton_C** NewButton);
	void OnButtonClicked(class UDebugButton_C* DebugButton);
	void SetFocusItem(int32 FocusItemIndex);
	void AddChildMenu(class UUserWidget* InChildMenu);
	void AddMenuItem(class UUserWidget* InItemWidget);
	void ClearMenuItem();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugSubMenuBase_C">();
	}
	static class UDebugSubMenuBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugSubMenuBase_C>();
	}
};
static_assert(alignof(UDebugSubMenuBase_C) == 0x000008, "Wrong alignment on UDebugSubMenuBase_C");
static_assert(sizeof(UDebugSubMenuBase_C) == 0x000320, "Wrong size on UDebugSubMenuBase_C");
static_assert(offsetof(UDebugSubMenuBase_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugSubMenuBase_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, CanvasPanel_0) == 0x0002B8, "Member 'UDebugSubMenuBase_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, CloseButton) == 0x0002C0, "Member 'UDebugSubMenuBase_C::CloseButton' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, Image_Menu) == 0x0002C8, "Member 'UDebugSubMenuBase_C::Image_Menu' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, Overlay_Menu) == 0x0002D0, "Member 'UDebugSubMenuBase_C::Overlay_Menu' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, SizeBox_0) == 0x0002D8, "Member 'UDebugSubMenuBase_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, Text_Title) == 0x0002E0, "Member 'UDebugSubMenuBase_C::Text_Title' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, TextBlock_X) == 0x0002E8, "Member 'UDebugSubMenuBase_C::TextBlock_X' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, VerticalBox) == 0x0002F0, "Member 'UDebugSubMenuBase_C::VerticalBox' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, TitleText) == 0x0002F8, "Member 'UDebugSubMenuBase_C::TitleText' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, ParentMenu) == 0x000310, "Member 'UDebugSubMenuBase_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugSubMenuBase_C, ChildMenu) == 0x000318, "Member 'UDebugSubMenuBase_C::ChildMenu' has a wrong offset!");

}


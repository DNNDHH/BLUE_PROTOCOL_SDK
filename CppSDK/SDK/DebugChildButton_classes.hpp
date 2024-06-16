#pragma once

 

// Package: DebugChildButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DebugChildButton.DebugChildButton_C
// 0x0050 (0x0300 - 0x02B0)
class UDebugChildButton_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                Button;                                            // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               Overlay_DebugButton;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_Button;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                   RowName;                                           // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         InitialValue;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible)
	class UUserWidget*                            ParentMenu;                                        // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EventDispatcher_OnClicked;                         // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EventDispatcher_OnClicked__DelegateSignature(class UDebugChildButton_C* DebugButton);
	void ExecuteUbergraph_DebugChildButton(int32 EntryPoint);
	void OnPressOk();
	void BndEvt__Button_K2Node_ComponentBoundEvent_454_OnButtonClickedEvent__DelegateSignature();
	void ExecFunc();
	void OnLostFocus();
	void OnGetFocus();
	void Construct();
	void Set_Menu_Focus(bool bFocus);
	void GetText(class FText* Text);
	void SetText(const class FText& Text);

	void CalcChildMenuPosition(struct FVector2D* Position) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DebugChildButton_C">();
	}
	static class UDebugChildButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugChildButton_C>();
	}
};
static_assert(alignof(UDebugChildButton_C) == 0x000008, "Wrong alignment on UDebugChildButton_C");
static_assert(sizeof(UDebugChildButton_C) == 0x000300, "Wrong size on UDebugChildButton_C");
static_assert(offsetof(UDebugChildButton_C, UberGraphFrame) == 0x0002B0, "Member 'UDebugChildButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDebugChildButton_C, Button) == 0x0002B8, "Member 'UDebugChildButton_C::Button' has a wrong offset!");
static_assert(offsetof(UDebugChildButton_C, Overlay_DebugButton) == 0x0002C0, "Member 'UDebugChildButton_C::Overlay_DebugButton' has a wrong offset!");
static_assert(offsetof(UDebugChildButton_C, TextBlock_Button) == 0x0002C8, "Member 'UDebugChildButton_C::TextBlock_Button' has a wrong offset!");
static_assert(offsetof(UDebugChildButton_C, RowName) == 0x0002D0, "Member 'UDebugChildButton_C::RowName' has a wrong offset!");
static_assert(offsetof(UDebugChildButton_C, InitialValue) == 0x0002D8, "Member 'UDebugChildButton_C::InitialValue' has a wrong offset!");
static_assert(offsetof(UDebugChildButton_C, ParentMenu) == 0x0002E8, "Member 'UDebugChildButton_C::ParentMenu' has a wrong offset!");
static_assert(offsetof(UDebugChildButton_C, EventDispatcher_OnClicked) == 0x0002F0, "Member 'UDebugChildButton_C::EventDispatcher_OnClicked' has a wrong offset!");

}


#pragma once

 

// Package: UMG_MatchingMenu_Headder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C
// 0x0038 (0x02B0 - 0x0278)
class UUMG_MatchingMenu_Headder_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ContentNameText;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_58;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WidgetSwitcher_0;                                  // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnCloseButtonClicked;                              // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnCloseButtonClicked__DelegateSignature();
	void ExecuteUbergraph_UMG_MatchingMenu_Headder(int32 EntryPoint);
	void BndEvt__UMG_MatchingMenu_Headder_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature();
	void SetDungeonInfo(class FName InDungeonId);
	void SetButtonVisible(bool Param_IsVisible);
	void SetDungeonInfo2(int32 HelpModeId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingMenu_Headder_C">();
	}
	static class UUMG_MatchingMenu_Headder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingMenu_Headder_C>();
	}
};
static_assert(alignof(UUMG_MatchingMenu_Headder_C) == 0x000008, "Wrong alignment on UUMG_MatchingMenu_Headder_C");
static_assert(sizeof(UUMG_MatchingMenu_Headder_C) == 0x0002B0, "Wrong size on UUMG_MatchingMenu_Headder_C");
static_assert(offsetof(UUMG_MatchingMenu_Headder_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingMenu_Headder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Headder_C, CmnClose01) == 0x000280, "Member 'UUMG_MatchingMenu_Headder_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Headder_C, ContentNameText) == 0x000288, "Member 'UUMG_MatchingMenu_Headder_C::ContentNameText' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Headder_C, TextBlock_58) == 0x000290, "Member 'UUMG_MatchingMenu_Headder_C::TextBlock_58' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Headder_C, WidgetSwitcher_0) == 0x000298, "Member 'UUMG_MatchingMenu_Headder_C::WidgetSwitcher_0' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingMenu_Headder_C, OnCloseButtonClicked) == 0x0002A0, "Member 'UUMG_MatchingMenu_Headder_C::OnCloseButtonClicked' has a wrong offset!");

}


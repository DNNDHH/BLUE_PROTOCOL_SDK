#pragma once

 

// Package: LibraryMenu_Search

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_Search.LibraryMenu_Search_C
// 0x0030 (0x02E0 - 0x02B0)
class ULibraryMenu_Search_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            ResetButton;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSearchBg;                                    // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     TextBoxPlayerName;                                 // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTextChange;                                      // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTextChange__DelegateSignature(const class FText& NewParam);
	void ExecuteUbergraph_LibraryMenu_Search(int32 EntryPoint);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void ClearText();
	void GetSerchKeyword(class FString* SerchKeyword);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_Search_C">();
	}
	static class ULibraryMenu_Search_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_Search_C>();
	}
};
static_assert(alignof(ULibraryMenu_Search_C) == 0x000008, "Wrong alignment on ULibraryMenu_Search_C");
static_assert(sizeof(ULibraryMenu_Search_C) == 0x0002E0, "Wrong size on ULibraryMenu_Search_C");
static_assert(offsetof(ULibraryMenu_Search_C, UberGraphFrame) == 0x0002B0, "Member 'ULibraryMenu_Search_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Search_C, ResetButton) == 0x0002B8, "Member 'ULibraryMenu_Search_C::ResetButton' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Search_C, SwitchSearchBg) == 0x0002C0, "Member 'ULibraryMenu_Search_C::SwitchSearchBg' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Search_C, TextBoxPlayerName) == 0x0002C8, "Member 'ULibraryMenu_Search_C::TextBoxPlayerName' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_Search_C, OnTextChange) == 0x0002D0, "Member 'ULibraryMenu_Search_C::OnTextChange' has a wrong offset!");

}


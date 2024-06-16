#pragma once

 

// Package: CmnSearch1

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnSearch1.CmnSearch1_C
// 0x0038 (0x02E8 - 0x02B0)
class UCmnSearch1_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            ResetButton;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_98;                             // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchSearchBg;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBEditableTextBox*                     TxtInput;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnTextChange;                                      // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnTextChange__DelegateSignature(const class FText& NewText);
	void ExecuteUbergraph_CmnSearch1(int32 EntryPoint);
	void SetHintWithText(const class FText& Message);
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_267_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_246_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_223_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TextBoxPlayerName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void ClearText();
	void GetSearchText(class FString* SearchText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnSearch1_C">();
	}
	static class UCmnSearch1_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnSearch1_C>();
	}
};
static_assert(alignof(UCmnSearch1_C) == 0x000008, "Wrong alignment on UCmnSearch1_C");
static_assert(sizeof(UCmnSearch1_C) == 0x0002E8, "Wrong size on UCmnSearch1_C");
static_assert(offsetof(UCmnSearch1_C, UberGraphFrame) == 0x0002B0, "Member 'UCmnSearch1_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnSearch1_C, ResetButton) == 0x0002B8, "Member 'UCmnSearch1_C::ResetButton' has a wrong offset!");
static_assert(offsetof(UCmnSearch1_C, SBRuntimeTextBlock_98) == 0x0002C0, "Member 'UCmnSearch1_C::SBRuntimeTextBlock_98' has a wrong offset!");
static_assert(offsetof(UCmnSearch1_C, SwitchSearchBg) == 0x0002C8, "Member 'UCmnSearch1_C::SwitchSearchBg' has a wrong offset!");
static_assert(offsetof(UCmnSearch1_C, TxtInput) == 0x0002D0, "Member 'UCmnSearch1_C::TxtInput' has a wrong offset!");
static_assert(offsetof(UCmnSearch1_C, OnTextChange) == 0x0002D8, "Member 'UCmnSearch1_C::OnTextChange' has a wrong offset!");

}


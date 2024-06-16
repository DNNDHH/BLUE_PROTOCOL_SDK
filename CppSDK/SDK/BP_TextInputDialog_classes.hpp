#pragma once

 

// Package: BP_TextInputDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BP_TextInputDialog.BP_TextInputDialog_C
// 0x00B0 (0x0360 - 0x02B0)
class UBP_TextInputDialog_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn16_C*                            BtnOk;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  ButtonFullScreen;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UErrorTooltip_C*                        ErrorTooltip_Comment;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_131;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*              InputTxt;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Msg;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtMaxNumber;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker2;                                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         MinLength;                                         // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxLength;                                         // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckNgWord;                                       // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EDialogResult                                 SelectedButton;                                    // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7044[0x6];                                     // 0x0332(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   NewEntryTxt;                                       // 0x0338(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 NewVar_0;                                          // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature(EDialogResult OnButton, const class FText& InputText);
	void ExecuteUbergraph_BP_TextInputDialog(int32 EntryPoint);
	void UI_Cancel();
	void BndEvt__BP_TextInputDialog_ButtonFullScreen_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BP_TextInputDialog_CmnClose02_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature();
	void BndEvt__BtnOk_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature();
	void BndEvt__InputTxt_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void ChangeText(const class FText& InText);
	void Start_InputDialog(const class FText& Message);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Hide();
	void Destruct();
	void Construct();
	void SetMinInput(int32 Param_MinLength);
	void SetMaxInput(int32 Param_MaxLength);
	void SetNgWordCheck(bool Param_CheckNgWord);
	void SetInitializeInput(const class FText& InText);
	void SetHint(const class FText& InText);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_TextInputDialog_C">();
	}
	static class UBP_TextInputDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_TextInputDialog_C>();
	}
};
static_assert(alignof(UBP_TextInputDialog_C) == 0x000008, "Wrong alignment on UBP_TextInputDialog_C");
static_assert(sizeof(UBP_TextInputDialog_C) == 0x000360, "Wrong size on UBP_TextInputDialog_C");
static_assert(offsetof(UBP_TextInputDialog_C, UberGraphFrame) == 0x0002B0, "Member 'UBP_TextInputDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, AnimOut) == 0x0002B8, "Member 'UBP_TextInputDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, AnimIn) == 0x0002C0, "Member 'UBP_TextInputDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, BtnOk) == 0x0002C8, "Member 'UBP_TextInputDialog_C::BtnOk' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, ButtonFullScreen) == 0x0002D0, "Member 'UBP_TextInputDialog_C::ButtonFullScreen' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, CmnClose02) == 0x0002D8, "Member 'UBP_TextInputDialog_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, ErrorTooltip_Comment) == 0x0002E0, "Member 'UBP_TextInputDialog_C::ErrorTooltip_Comment' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, Image_131) == 0x0002E8, "Member 'UBP_TextInputDialog_C::Image_131' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, InputTxt) == 0x0002F0, "Member 'UBP_TextInputDialog_C::InputTxt' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, Txt_Msg) == 0x0002F8, "Member 'UBP_TextInputDialog_C::Txt_Msg' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, TxtMaxNumber) == 0x000300, "Member 'UBP_TextInputDialog_C::TxtMaxNumber' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, UIBlocker) == 0x000308, "Member 'UBP_TextInputDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, UIBlocker2) == 0x000310, "Member 'UBP_TextInputDialog_C::UIBlocker2' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, OnClose) == 0x000318, "Member 'UBP_TextInputDialog_C::OnClose' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, MinLength) == 0x000328, "Member 'UBP_TextInputDialog_C::MinLength' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, MaxLength) == 0x00032C, "Member 'UBP_TextInputDialog_C::MaxLength' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, CheckNgWord) == 0x000330, "Member 'UBP_TextInputDialog_C::CheckNgWord' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, SelectedButton) == 0x000331, "Member 'UBP_TextInputDialog_C::SelectedButton' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, NewEntryTxt) == 0x000338, "Member 'UBP_TextInputDialog_C::NewEntryTxt' has a wrong offset!");
static_assert(offsetof(UBP_TextInputDialog_C, NewVar_0) == 0x000350, "Member 'UBP_TextInputDialog_C::NewVar_0' has a wrong offset!");

}


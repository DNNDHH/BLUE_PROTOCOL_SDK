#pragma once

 

// Package: ChatWindow_InputText

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatWindow_InputText.ChatWindow_InputText_C
// 0x0050 (0x02C8 - 0x0278)
class UChatWindow_InputText_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnBtn15_C*                            CmnBtn15;                                          // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InputBG;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBMultiLineEditableText*               InputMessage;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCount;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsShift;                                           // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsInitPressEnter;                                  // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4982[0x6];                                     // 0x02A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ChatWindow_C*                      ChatWindow;                                        // 0x02A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TextCountMax;                                      // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsTextCommitted;                                   // 0x02C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRoundTextCheck;                                  // 0x02C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_ChatWindow_InputText(int32 EntryPoint);
	void SendMessage(const class FText& InText);
	void UpdateMouseCursorIcon();
	void BndEvt__InputMessage_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__CmnBtn15_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature();
	void BndEvt__InputMessage_K2Node_ComponentBoundEvent_0_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void RoundText(const class FText& InText, bool* IsRound, class FText* OutText);
	void Show();
	void Hide();
	void SetUserFocusAtITextInput(bool MessageReset);
	void UpdateTextCount();
	void IsTextInputFocus(bool* Result);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	class APlayerController* GetPlayerControllerEx();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatWindow_InputText_C">();
	}
	static class UChatWindow_InputText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatWindow_InputText_C>();
	}
};
static_assert(alignof(UChatWindow_InputText_C) == 0x000008, "Wrong alignment on UChatWindow_InputText_C");
static_assert(sizeof(UChatWindow_InputText_C) == 0x0002C8, "Wrong size on UChatWindow_InputText_C");
static_assert(offsetof(UChatWindow_InputText_C, UberGraphFrame) == 0x000278, "Member 'UChatWindow_InputText_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, CmnBtn15) == 0x000280, "Member 'UChatWindow_InputText_C::CmnBtn15' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, InputBG) == 0x000288, "Member 'UChatWindow_InputText_C::InputBG' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, InputMessage) == 0x000290, "Member 'UChatWindow_InputText_C::InputMessage' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, TxtCount) == 0x000298, "Member 'UChatWindow_InputText_C::TxtCount' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, IsShift) == 0x0002A0, "Member 'UChatWindow_InputText_C::IsShift' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, IsInitPressEnter) == 0x0002A1, "Member 'UChatWindow_InputText_C::IsInitPressEnter' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, ChatWindow) == 0x0002A8, "Member 'UChatWindow_InputText_C::ChatWindow' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, OnClose) == 0x0002B0, "Member 'UChatWindow_InputText_C::OnClose' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, TextCountMax) == 0x0002C0, "Member 'UChatWindow_InputText_C::TextCountMax' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, IsTextCommitted) == 0x0002C4, "Member 'UChatWindow_InputText_C::IsTextCommitted' has a wrong offset!");
static_assert(offsetof(UChatWindow_InputText_C, IsRoundTextCheck) == 0x0002C5, "Member 'UChatWindow_InputText_C::IsRoundTextCheck' has a wrong offset!");

}


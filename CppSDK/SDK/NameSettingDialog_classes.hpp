#pragma once

 

// Package: NameSettingDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NameSettingDialog.NameSettingDialog_C
// 0x0118 (0x03C8 - 0x02B0)
class UNameSettingDialog_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            BtnDecide;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose01_C*                          CmnClose01;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Ticket;                                       // 0x02E0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MainMessageText;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       NameInput;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonFullScreen;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SubMessageText;                                    // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TextGrp;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               TicketGrp;                                         // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCnt1;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCnt2;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtDecide;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_1;                                       // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 PlayerName;                                        // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEnter;                                           // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         NameLengthMax;                                     // 0x0370(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsClose;                                           // 0x0374(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A1B[0x3];                                     // 0x0375(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OldPlayerName;                                     // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 TmpString;                                         // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          GameInMode;                                        // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8A1C[0x7];                                     // 0x0399(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 OptionDecideText;                                  // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedButtonFullScreen;                         // 0x03B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_CommonToolTipDetail_Fixed_C*       ToolTip;                                           // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnEnter__DelegateSignature(const class FString& Param_PlayerName);
	void OnClose__DelegateSignature();
	void OnClickedButtonFullScreen__DelegateSignature();
	void ExecuteUbergraph_NameSettingDialog(int32 EntryPoint);
	void VisibleTicketGrp(bool Visible, int32 NameChangeTicketCount);
	void BndEvt__NameSettingDialog_SBButtonFullScreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__NameSettingDialog_CmnClose01_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void DecisonDialogResult(EDialogResult Result);
	void BndEvt__BtnDecide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__BtnDecide_K2Node_ComponentBoundEvent_322_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__BtnDecide_K2Node_ComponentBoundEvent_303_OnButtonHoverEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnPress_Cancel();
	void UpdateNameText(const class FText& InText);
	void MessageDecideProc();
	void Destruct();
	void BndEvt__NameInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
	void BndEvt__NameInput_K2Node_ComponentBoundEvent_118_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
	void Construct();
	void Open();
	void Close();
	void IsNameEnable(const class FText& InText, bool* Enable);
	void Setting(int32 InMainMessageTextID, int32 InSubMessageTextID, int32 InTextMaxCnt, const class FString& StartInputName);
	void SetNameInputEnable(bool InIsEnable);
	void SetGameInMode();
	void SetGameOutMode();
	void SetOptionDecideText(const class FString& Param_OptionDecideText);
	void SetMainMessageText(const class FText& InText);
	class UWidget* GetToolTipWidget_0();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NameSettingDialog_C">();
	}
	static class UNameSettingDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNameSettingDialog_C>();
	}
};
static_assert(alignof(UNameSettingDialog_C) == 0x000008, "Wrong alignment on UNameSettingDialog_C");
static_assert(sizeof(UNameSettingDialog_C) == 0x0003C8, "Wrong size on UNameSettingDialog_C");
static_assert(offsetof(UNameSettingDialog_C, UberGraphFrame) == 0x0002B0, "Member 'UNameSettingDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, AnimOut) == 0x0002B8, "Member 'UNameSettingDialog_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, AnimIn) == 0x0002C0, "Member 'UNameSettingDialog_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, BG) == 0x0002C8, "Member 'UNameSettingDialog_C::BG' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, BtnDecide) == 0x0002D0, "Member 'UNameSettingDialog_C::BtnDecide' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, CmnClose01) == 0x0002D8, "Member 'UNameSettingDialog_C::CmnClose01' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, Icon_Ticket) == 0x0002E0, "Member 'UNameSettingDialog_C::Icon_Ticket' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, MainMessageText) == 0x0002E8, "Member 'UNameSettingDialog_C::MainMessageText' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, NameInput) == 0x0002F0, "Member 'UNameSettingDialog_C::NameInput' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, SBButtonFullScreen) == 0x0002F8, "Member 'UNameSettingDialog_C::SBButtonFullScreen' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, SubMessageText) == 0x000300, "Member 'UNameSettingDialog_C::SubMessageText' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, TextGrp) == 0x000308, "Member 'UNameSettingDialog_C::TextGrp' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, TicketGrp) == 0x000310, "Member 'UNameSettingDialog_C::TicketGrp' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, TxtCnt1) == 0x000318, "Member 'UNameSettingDialog_C::TxtCnt1' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, TxtCnt2) == 0x000320, "Member 'UNameSettingDialog_C::TxtCnt2' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, TxtDecide) == 0x000328, "Member 'UNameSettingDialog_C::TxtDecide' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, UIBlocker) == 0x000330, "Member 'UNameSettingDialog_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, UIBlocker_1) == 0x000338, "Member 'UNameSettingDialog_C::UIBlocker_1' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, PlayerName) == 0x000340, "Member 'UNameSettingDialog_C::PlayerName' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, OnEnter) == 0x000350, "Member 'UNameSettingDialog_C::OnEnter' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, OnClose) == 0x000360, "Member 'UNameSettingDialog_C::OnClose' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, NameLengthMax) == 0x000370, "Member 'UNameSettingDialog_C::NameLengthMax' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, IsClose) == 0x000374, "Member 'UNameSettingDialog_C::IsClose' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, OldPlayerName) == 0x000378, "Member 'UNameSettingDialog_C::OldPlayerName' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, TmpString) == 0x000388, "Member 'UNameSettingDialog_C::TmpString' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, GameInMode) == 0x000398, "Member 'UNameSettingDialog_C::GameInMode' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, OptionDecideText) == 0x0003A0, "Member 'UNameSettingDialog_C::OptionDecideText' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, OnClickedButtonFullScreen) == 0x0003B0, "Member 'UNameSettingDialog_C::OnClickedButtonFullScreen' has a wrong offset!");
static_assert(offsetof(UNameSettingDialog_C, ToolTip) == 0x0003C0, "Member 'UNameSettingDialog_C::ToolTip' has a wrong offset!");

}


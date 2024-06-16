#pragma once

 

// Package: UMG_ChatWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_ChatWindowChatType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_ChatWindow.UMG_ChatWindow_C
// 0x0168 (0x0440 - 0x02D8)
class UUMG_ChatWindow_C final : public USBChatWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       RecconectAnim;                                     // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UChatHudMovableWidget_C*                ChatHudMovableWidget;                              // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWindowTypeItem_C*                  ChatType;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChatWindow_InputText_C*                ChatWindow_Input;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DirectChatGrp;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEmotionMenu_StampMenu_C*               EmotionMenu_StampMenu;                             // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFixedPhrase_Menu_C*                    FixedPhrase_Menu;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FixedPhraseButton;                                 // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        InputTextWidgetSwitcher;                           // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PartyIcon;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ReconnectAnimation;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            StampButton;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchFixedPhrase;                                 // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchIcon;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchStamp;                                       // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchTextInput;                                   // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TalkID;                                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TalkTo;                                            // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            TextInputButton;                                   // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<ESBChatLogType>                        ChatModeList;                                      // 0x0398(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnAddDirectChatWindow;                             // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnRemoveDirectChatWindow;                          // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsAddDirectChatLogMode;                            // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsRemoveDirectChatMode;                            // 0x03C9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBChatLogType                                CurChatMode;                                       // 0x03CA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBChatLogType                                PrvChatMode;                                       // 0x03CB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49BA[0x4];                                     // 0x03CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatTypeWindow_C*                      ChatTypeWindow_N;                                  // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 DMSpeakerId;                                       // 0x03D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnChangeChatMode;                                  // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 CharacterId;                                       // 0x03F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	E_ChatWindowChatType                          CurrentchatType;                                   // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsKeyShotcut;                                      // 0x0409(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTalkModeRestrictive;                              // 0x040A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bInPhotoMode;                                      // 0x040B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49BB[0x4];                                     // 0x040C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CachedToolTipWidget;                               // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bServerReconnection;                               // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bCheckShortCycle;                                  // 0x0419(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49BC[0x6];                                     // 0x041A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Name_UMG_ChatWindow_C;                             // 0x0420(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBPrivilegeType                              Privilege_Type;                                    // 0x0438(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void OnAddDirectChatWindow__DelegateSignature(const class FString& PlayerId, const class FText& Param_Name, const class FString& Param_CharacterId);
	void OnRemoveDirectChatWindow__DelegateSignature(const class FString& PlayerId);
	void OnChangeChatMode__DelegateSignature();
	void ExecuteUbergraph_UMG_ChatWindow(int32 EntryPoint);
	void OnIsGetPlayerSearchListDelegate_Event(const bool bWasSuccessful, const TArray<struct FPlayerProfileSummaryData>& PlayerSearchListData, bool bIsOver, const int32 RetCode);
	void OnDirectChatSenderRemoveDelegate_Event(const class FString& Param_CharacterId);
	void Unbind();
	void OnNotificationBlackListedDelegate_Event(const bool bBlackListed, const class FString& SenderId);
	void RemoveDirectChatSenderLogs(const class FString& Param_CharacterId);
	void OnChanged_ConnectionChatServer(bool IsLogin);
	void PreConstruct(bool IsDesignTime);
	void SetInputFocus();
	void BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
	void Errorr(ESBChatSendErrorType ErrorType);
	void Init();
	void OnGetPlayerProfileDetailMenuDelegate_Event(const bool bWasSuccessful, const class FString& ShortId, const int32 RetCode);
	void Destruct();
	void OnEnterClose();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnPress_EndChat();
	void SetUserFocusAtITextInput();
	void Construct();
	void CloseChatType();
	void OpenChatType();
	void SetDirectChatMode(const class FString& PlayerId, const class FText& Param_Name, const class FString& Param_CharacterId, bool SearchShortID, ESBPrivilegeType PrivilegeType);
	void OnEventTypeSelected(ESBChatLogType SelectedType);
	void BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
	void SendChatMessage(const class FString& Message, ESBChatLogType ChatLogType);
	void Show();
	void Hide();
	void SetChatMode(ESBChatLogType NewParam);
	void UpdateDirectChatLogButton();
	void UpdatePartyIcon();
	void GetPlayerSearchList(const class FText& InText);
	void ShowErrorDirectChatSearch(int32 TextIdx);
	void SetDirectChatParameter(const class FString& PlayerId, const class FText& Param_Name, const class FString& Param_CharacterId, ESBPrivilegeType PrivilegeType);
	void SetTeamParameter();
	void SaveChatSendData();
	void LoadChatSendData();
	void SetChatType(E_ChatWindowChatType InChatType);
	void SetIcon(ESBChatLogType LogType);
	void SpecialCommandProcess(const class FString& InChatMessage, class FString* OutChatMessage, ESBChatLogType* ChatLogType);
	void IsVisibleChatType(bool* Result);
	void IsTextInputFocus(bool* Resurl);
	void CheckChatModeIsValid(ESBChatLogType Param_ChatType, bool* Result);
	void GetChatType(E_ChatWindowChatType* Param_ChatType);
	void SetServerReconnectionMode(bool OnServerReconnection);
	void Open_Server_Reconnection_Notice_Tool_Tip_Widget(bool bOpen);
	void RequestAPICheckOnlineStatus();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_ChatWindow_C">();
	}
	static class UUMG_ChatWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_ChatWindow_C>();
	}
};
static_assert(alignof(UUMG_ChatWindow_C) == 0x000008, "Wrong alignment on UUMG_ChatWindow_C");
static_assert(sizeof(UUMG_ChatWindow_C) == 0x000440, "Wrong size on UUMG_ChatWindow_C");
static_assert(offsetof(UUMG_ChatWindow_C, UberGraphFrame) == 0x0002D8, "Member 'UUMG_ChatWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, RecconectAnim) == 0x0002E0, "Member 'UUMG_ChatWindow_C::RecconectAnim' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, AnimOut) == 0x0002E8, "Member 'UUMG_ChatWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, AnimIn) == 0x0002F0, "Member 'UUMG_ChatWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, ChatHudMovableWidget) == 0x0002F8, "Member 'UUMG_ChatWindow_C::ChatHudMovableWidget' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, ChatType) == 0x000300, "Member 'UUMG_ChatWindow_C::ChatType' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, ChatWindow_Input) == 0x000308, "Member 'UUMG_ChatWindow_C::ChatWindow_Input' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, DirectChatGrp) == 0x000310, "Member 'UUMG_ChatWindow_C::DirectChatGrp' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, EmotionMenu_StampMenu) == 0x000318, "Member 'UUMG_ChatWindow_C::EmotionMenu_StampMenu' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, FixedPhrase_Menu) == 0x000320, "Member 'UUMG_ChatWindow_C::FixedPhrase_Menu' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, FixedPhraseButton) == 0x000328, "Member 'UUMG_ChatWindow_C::FixedPhraseButton' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, InputTextWidgetSwitcher) == 0x000330, "Member 'UUMG_ChatWindow_C::InputTextWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, PartyIcon) == 0x000338, "Member 'UUMG_ChatWindow_C::PartyIcon' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, ReconnectAnimation) == 0x000340, "Member 'UUMG_ChatWindow_C::ReconnectAnimation' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, StampButton) == 0x000348, "Member 'UUMG_ChatWindow_C::StampButton' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, SwitchFixedPhrase) == 0x000350, "Member 'UUMG_ChatWindow_C::SwitchFixedPhrase' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, SwitchIcon) == 0x000358, "Member 'UUMG_ChatWindow_C::SwitchIcon' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, SwitchStamp) == 0x000360, "Member 'UUMG_ChatWindow_C::SwitchStamp' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, SwitchTextInput) == 0x000368, "Member 'UUMG_ChatWindow_C::SwitchTextInput' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, TalkID) == 0x000370, "Member 'UUMG_ChatWindow_C::TalkID' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, TalkTo) == 0x000378, "Member 'UUMG_ChatWindow_C::TalkTo' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, TextInputButton) == 0x000380, "Member 'UUMG_ChatWindow_C::TextInputButton' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, OnClose) == 0x000388, "Member 'UUMG_ChatWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, ChatModeList) == 0x000398, "Member 'UUMG_ChatWindow_C::ChatModeList' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, OnAddDirectChatWindow) == 0x0003A8, "Member 'UUMG_ChatWindow_C::OnAddDirectChatWindow' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, OnRemoveDirectChatWindow) == 0x0003B8, "Member 'UUMG_ChatWindow_C::OnRemoveDirectChatWindow' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, IsAddDirectChatLogMode) == 0x0003C8, "Member 'UUMG_ChatWindow_C::IsAddDirectChatLogMode' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, IsRemoveDirectChatMode) == 0x0003C9, "Member 'UUMG_ChatWindow_C::IsRemoveDirectChatMode' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, CurChatMode) == 0x0003CA, "Member 'UUMG_ChatWindow_C::CurChatMode' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, PrvChatMode) == 0x0003CB, "Member 'UUMG_ChatWindow_C::PrvChatMode' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, ChatTypeWindow_N) == 0x0003D0, "Member 'UUMG_ChatWindow_C::ChatTypeWindow_N' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, DMSpeakerId) == 0x0003D8, "Member 'UUMG_ChatWindow_C::DMSpeakerId' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, OnChangeChatMode) == 0x0003E8, "Member 'UUMG_ChatWindow_C::OnChangeChatMode' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, CharacterId) == 0x0003F8, "Member 'UUMG_ChatWindow_C::CharacterId' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, CurrentchatType) == 0x000408, "Member 'UUMG_ChatWindow_C::CurrentchatType' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, IsKeyShotcut) == 0x000409, "Member 'UUMG_ChatWindow_C::IsKeyShotcut' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, bTalkModeRestrictive) == 0x00040A, "Member 'UUMG_ChatWindow_C::bTalkModeRestrictive' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, bInPhotoMode) == 0x00040B, "Member 'UUMG_ChatWindow_C::bInPhotoMode' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, CachedToolTipWidget) == 0x000410, "Member 'UUMG_ChatWindow_C::CachedToolTipWidget' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, bServerReconnection) == 0x000418, "Member 'UUMG_ChatWindow_C::bServerReconnection' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, bCheckShortCycle) == 0x000419, "Member 'UUMG_ChatWindow_C::bCheckShortCycle' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, Name_UMG_ChatWindow_C) == 0x000420, "Member 'UUMG_ChatWindow_C::Name_UMG_ChatWindow_C' has a wrong offset!");
static_assert(offsetof(UUMG_ChatWindow_C, Privilege_Type) == 0x000438, "Member 'UUMG_ChatWindow_C::Privilege_Type' has a wrong offset!");

}


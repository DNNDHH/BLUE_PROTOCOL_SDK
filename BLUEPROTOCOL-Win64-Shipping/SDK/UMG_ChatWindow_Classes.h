#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UMG_ChatWindow.UMG_ChatWindow_C
	 * Size -> 0x0161 (FullSize[0x0439] - InheritedSize[0x02D8])
	 */
	class UUMG_ChatWindow_C : public USBChatWindow
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    RecconectAnim;                                           // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02E8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UChatHudMovableWidget_C*                             ChatHudMovableWidget;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatWindowTypeItem_C*                               ChatType;                                                // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatWindow_InputText_C*                             ChatWindow_Input;                                        // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        DirectChatGrp;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEmotionMenu_StampMenu_C*                            EmotionMenu_StampMenu;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFixedPhrase_Menu_C*                                 FixedPhrase_Menu;                                        // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FixedPhraseButton;                                       // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     InputTextWidgetSwitcher;                                 // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PartyIcon;                                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        ReconnectAnimation;                                      // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         StampButton;                                             // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchFixedPhrase;                                       // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchIcon;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchStamp;                                             // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchTextInput;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TalkID;                                                  // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          TalkTo;                                                  // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         TextInputButton;                                         // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<ESBChatLogType>                                     ChatModeList;                                            // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnAddDirectChatWindow;                                   // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRemoveDirectChatWindow;                                // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsAddDirectChatLogMode;                                  // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsRemoveDirectChatMode;                                  // 0x03C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBChatLogType                                             CurChatMode;                                             // 0x03CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBChatLogType                                             PrvChatMode;                                             // 0x03CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5AUO[0x4];                                   // 0x03CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChatTypeWindow_C*                                   ChatTypeWindow_N;                                        // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              DMSpeakerId;                                             // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChangeChatMode;                                        // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              CharacterId;                                             // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		E_ChatWindowChatType                                       CurrentchatType;                                         // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsKeyShotcut;                                            // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTalkModeRestrictive;                                    // 0x040A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bInPhotoMode;                                            // 0x040B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DYZZ[0x4];                                   // 0x040C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         CachedToolTipWidget;                                     // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bServerReconnection;                                     // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bCheckShortCycle;                                        // 0x0419(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_DTFZ[0x6];                                   // 0x041A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0420(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		ESBPrivilegeType                                           PrivilegeType;                                           // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void RequestAPICheckOnlineStatus();
		void OpenServerReconnectionNoticeToolTipWidget(bool bOpen);
		void SetServerReconnectionMode(bool OnServerReconnection);
		void GetChatType(E_ChatWindowChatType* ChatType);
		void CheckChatModeIsValid(ESBChatLogType ChatType, bool* Result);
		void IsTextInputFocus(bool* Resurl);
		void IsVisibleChatType(bool* Result);
		void SpecialCommandProcess(const class FString& InChatMessage, class FString* OutChatMessage, ESBChatLogType* ChatLogType);
		void SetIcon(ESBChatLogType logType);
		void SetChatType(E_ChatWindowChatType InChatType);
		void LoadChatSendData();
		void SaveChatSendData();
		void SetTeamParameter();
		void SetDirectChatParameter(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType);
		void ShowErrorDirectChatSearch(int32_t TextIdx);
		void GetPlayerSearchList(const class FText& InText);
		void UpdatePartyIcon();
		void UpdateDirectChatLogButton();
		void SetChatMode(ESBChatLogType NewParam);
		void Hide();
		void Show();
		void SendChatMessage(const class FString& Message, ESBChatLogType ChatLogType);
		void BndEvt__ChatType_K2Node_ComponentBoundEvent_2_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem);
		void OnEventTypeSelected(ESBChatLogType SelectedType);
		void SetDirectChatMode(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, bool SearchShortID, ESBPrivilegeType PrivilegeType);
		void OpenChatType();
		void CloseChatType();
		void Construct();
		void SetUserFocusAtITextInput();
		void OnPress_EndChat();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnEnterClose();
		void Destruct();
		void OnGetPlayerProfileDetailMenuDelegate_Event(bool bWasSuccessful, const class FString& shortId, int32_t RetCode);
		void Init();
		void Errorr(ESBChatSendErrorType ErrorType);
		void BndEvt__ChatWindow_Input_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void BndEvt__TextInputButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__StampButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__FixedPhraseButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void SetInputFocus();
		void PreConstruct(bool IsDesignTime);
		void OnChanged_ConnectionChatServer(bool IsLogin);
		void RemoveDirectChatSenderLogs(const class FString& CharacterId);
		void OnNotificationBlackListedDelegate_Event(bool bBlackListed, const class FString& SenderId);
		void Unbind();
		void OnDirectChatSenderRemoveDelegate_Event(const class FString& CharacterId);
		void OnIsGetPlayerSearchListDelegate_Event(bool bWasSuccessful, TArray<struct FPlayerProfileSummaryData> PlayerSearchListData, bool bIsOver, int32_t RetCode);
		void ExecuteUbergraph_UMG_ChatWindow(int32_t EntryPoint);
		void OnChangeChatMode__DelegateSignature();
		void OnRemoveDirectChatWindow__DelegateSignature(const class FString& PlayerId);
		void OnAddDirectChatWindow__DelegateSignature(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

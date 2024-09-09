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
	 * WidgetBlueprintGeneratedClass ChatHUD.ChatHUD_C
	 * Size -> 0x0191 (FullSize[0x0409] - InheritedSize[0x0278])
	 */
	class UChatHUD_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USBButton_C*                                         BtnChatSetting;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               ButtonFullScreen_OtherPClist;                            // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               ButtonFullScreen_UnreadNotifySettingWindow;              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_2;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_ChatSettingWindow;                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ChatLogWindow_C*                                ChatLog01;                                               // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ChatLogWindow_C*                                ChatLog02;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ChatLogWindow_C*                                ChatLog03;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_ChatWindow_C*                                   ChatWindow;                                              // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack01;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             DropHitBG;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEmotionMenu_C*                                      EmotionMenu;                                             // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_55;                                                // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Label;                                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 Label_2;                                                 // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMouseCursorModeIcon_C*                              MouseCursorModeIcon;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOtherPCList_C*                                      OtherPCList;                                             // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         ResetLayoutButton;                                       // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UShowTutorialHelpBtn_C*                              ShowTutorialHelpBtn;                                     // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleBg;                                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        TitleGrp;                                                // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class UUMG_ChatLogWindow_C*>                        ChatLogs;                                                // 0x0328(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FAnchors>                                    InitChatLogsAnchors;                                     // 0x0338(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector2D>                                   InitChatLogsPos;                                         // 0x0348(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            ChatLogsZOder;                                           // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bCurVisible;                                             // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RBOQ[0x7];                                   // 0x0369(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   InitChatLogsWindowSize;                                  // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector2D                                           InitStampEmotWindowPos;                                  // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnchors                                            InitStampEmotWindowAnchors;                              // 0x0388(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		int32_t                                                    InitStampEmotWindowZOder;                                // 0x0398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnchors                                            InitChatWindowAnchors;                                   // 0x039C(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		struct FVector2D                                           InitChatWindowPos;                                       // 0x03AC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    InitChatWindowZOder;                                     // 0x03B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ULayoutableHUD_C*                                    LayoutableHUD;                                           // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<class FName>                                        TutorialHelpIds;                                         // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTutorialHelpDialogBox_C*                            TutorialHelpWidget;                                      // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UObject*                                             Work;                                                    // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMenuMode;                                              // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_G18H[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_AdminGotoBookmarkWindow_C*                      AdminGotoBookmarkWindow;                                 // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTutorialHelpDialogBox_C*                            TutorialHelpDialogWidget;                                // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UFishingHUD_C*                                       FishingHUD;                                              // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UChatSettingWindow_C*                                ChatSettingWindow;                                       // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsMouseCursorAcion;                                      // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetFishHUD(class UFishingHUD_C* HUD);
		void GetLogWindowVisibleStatusList(TArray<bool>* IsVisibleStatusList);
		void UpdateUnread();
		void CheckLogWindowFilter(ESBChatLogType logType, ESBChatLogWindowSlot NewParam, bool* Result);
		void CheckReceivedMessageSound(ESBChatLogType logType, bool IsCloseArea, bool* Result);
		void UpdateMouseCursorIcon();
		void ForceClose();
		void IsActive(bool* IsActive);
		class UWidget* On_TextSizeComboBox_GenerateWidget_1(const class FString& item);
		void ResetAllLayout();
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void LoadStampHisoryData();
		void InitChatHUDLayout();
		void InitStampEmoteHUDLayout();
		void SaveLayoutWindowSizeData(class UUserWidget* InWidget);
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void RefreshChatLogs();
		void SetChatLogsWindow(bool InWindow);
		void InitChatLogSlots();
		void SaveHudLayout();
		void SaveLayoutData(class UUserWidget* InWidget);
		void LoadHudLayout();
		void InitChatLogsHUDLayout();
		void AddTab(ESBChatLogWindowSlot RequestSlot);
		void AddChatLogWindow(ESBChatLogWindowSlot RequestSlot);
		void IsFullChildLogWindows(bool* Ret);
		void Hide();
		void Show();
		void KeyShortcut_TextMode();
		void KeyShortcut_FixedPhrase();
		void KeyShortcut_Stamp();
		void KeyShortcut_ChatTypeList();
		void KeyShortcut_PlayerList();
		void KeyShortcut_TabChange();
		void BndEvt__ButtonFullScreen_OtherPClist_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void InputPadButton();
		void BndEvt__OtherPCList_K2Node_ComponentBoundEvent_1_EventButtonClicked__DelegateSignature();
		void OpenCursorModeToOtherPCMenu(class ASBPlayerCharacter* InOtherPC);
		void BndEvt__ChatHUD_OtherPCList_K2Node_ComponentBoundEvent_2_OnAllClose__DelegateSignature();
		void OnCloseAdminWindow();
		void OnMouseButtonDownByAdminMode();
		void Construct_Admin();
		void OnAdminCommandRequest(ESBAdminCommandCallbackRequest Request);
		void OpenGotoBookmarkWindow();
		void Hide_Admin();
		void UnbindAdminCommandCallbeck();
		void Emite_Construct();
		void OnChang_ChatMode_Event();
		void Construct_Chat();
		void OnClosedChatWindow();
		void RequestChatLogAdd(ESBChatLogWindowSlot RequestSlot);
		void CloseRequestChatLogs(ESBChatLogWindowSlot SlotType);
		void OnChatRoomMessageReceived(class USBChatMessage* Message);
		void RequestDirectChat(const class FString& PlayerId, const class FText& Name, const class FString& CharacterId, ESBPrivilegeType PrivilegeType);
		void OnClickedClose();
		void ChatTempLogs_Init();
		void RequestTabAdd(ESBChatLogWindowSlot RequestSlot);
		void RequestTabClose(ESBChatLogWindowSlot RequestSlot, int32_t InFilterType, int32_t InDetailFilterType);
		void DelayUpdateMouseCursorIcon();
		void UpdateCursorMode(bool Flag);
		void BndEvt__ChatHUD_BtnChatUnreadNotify_ON_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ChatHUD_ButtonFullScreen_UnreadNotifySettingWindow_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void EndChatSettingWindow();
		void ChatSettingWindow_OnClose_Event();
		void OnRefreshChatLogs_event();
		void OnLogDispTime_event();
		void Construct();
		void Init();
		void OnChangeVisibility(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void BndEvt__ResetLayoutButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void OnReceivedMessage(class USBChatMessage* Message, const struct FSBChatUIMessage& Mess);
		void Destruct();
		void OnGameOverDelegate_Event_1();
		void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
		void MouseInteraction();
		void MouseInteractionRelease();
		void OnRequestTutorialHelp(bool CheckUnlock);
		void CameraCtrl_Up();
		void CameraCtrl_Up_Rel();
		void CameraCtrl_Down();
		void CameraCtrl_Down_Rel();
		void CameraCtrl_Left();
		void CameraCtrl_Left_Rel();
		void CameraCtrl_Right();
		void CameraCtrl_Right_Rel();
		void OnClosePCList_Event_1();
		void OnClose_Event_1();
		void ResultClose(class UObject* Sender, class UObject* Param);
		void ExecuteUbergraph_ChatHUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

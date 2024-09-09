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
	 * WidgetBlueprintGeneratedClass ChatLogWindowList.ChatLogWindowList_C
	 * Size -> 0x023A (FullSize[0x04B2] - InheritedSize[0x0278])
	 */
	class UChatLogWindowList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0278(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x0280(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        Btn_Closes;                                              // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BtnAddWindow;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         BtnSeparation_Main;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             BtnStoring_Sub;                                          // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatHudMovableWidget_C*                             ChatHudMovableWidget;                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatHudResizableWidget_C*                           ChatHudResizableWidget;                                  // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterBattle_1;                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterBattle_2;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterBattle_3;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterCommunication_1;                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterCommunication_2;                            // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterItem_1;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterItem_2;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterItem_3;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterItem_4;                                     // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterItem_5;                                     // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterSystem_1;                                   // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterSystem_2;                                   // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UChatLogFilterItem_C*                                ChatLogFilterSystem_3;                                   // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnClose02_C*                                       CmnClose02;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FilterBg1;                                               // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FilterButton;                                            // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         FilterClose;                                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          FilterGridPanel;                                         // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        FilterGrp;                                               // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image;                                                   // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_5;                                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           LogListView;                                             // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 MainButtonText;                                          // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 MainButtonText_2;                                        // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 MainButtonText_3;                                        // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         MainTabButton;                                           // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         MainTabButton_2;                                         // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         MainTabButton_3;                                         // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock;                                      // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_1;                                    // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 SBRuntimeTextBlock_4;                                    // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_1;                                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher_BtnCloses;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     Switcher_BtnWindow;                                      // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchMainTab;                                           // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchSubTab_2;                                          // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchSubTab_3;                                          // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 TxtChildMain;                                            // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        UnreadGrp;                                               // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		int32_t                                                    FilterType;                                              // 0x0400(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DetailFilterType;                                        // 0x0404(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBChatLogTabType                                          TabType;                                                 // 0x0408(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FilterListVisible;                                       // 0x0409(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KLO6[0x6];                                   // 0x040A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_ChatLogWindow_C*                                ChatLogWindowWidget;                                     // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnChatLogWindowAddRequest;                               // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChatLogWindowCloseRequest;                             // 0x0428(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ESBChatLogWindowSlot                                       ChatLogSlot;                                             // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TRUG[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeFilterType;                                      // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsVisibility;                                            // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V4TV[0x7];                                   // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChatLogTabAddRequest;                                  // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChatLogTabCloseRequest;                                // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChangeTab;                                             // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsUnreadWidget;                                          // 0x0488(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsUnreadClear;                                           // 0x0489(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2MHT[0x6];                                   // 0x048A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChangeChatUnreadNotify;                                // 0x0490(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnChangeUnreadVisible;                                   // 0x04A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsCreateMessage;                                         // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsChatUnreadNotify;                                      // 0x04B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void GetChatUnreadNotify(bool* Result);
		void UpdateChatLogStatus(const struct FSBChatLogWindowStatusSave& InStatus);
		void ChatCloseUnreadUpdate();
		void CheckUnread();
		void SetChatLogSlot(ESBChatLogWindowSlot Slot);
		void GetTabTypetoSlot(ESBChatLogWindowSlot* Slot);
		void SetTab(ESBChatLogWindowSlot InSlot, bool bAdd);
		void ClearLogList();
		void IsScrollEndListView(bool* Ret);
		void CreateMessageEntry(const struct FSBChatUIMessage& InMess, bool bRecieve);
		void GetWindowSize(struct FVector2D* retSize);
		void SetWindowSize(const struct FVector2D& InSize);
		void SetSeparationButtonEnabled(bool InEnable);
		void SetFullChildWindow(bool InFull);
		void SetForceUnhover();
		void SetListScrollEnd();
		void RefreshLog();
		void InitChidMode(int32_t InTabTextId);
		void ChangeDetailFilter(bool InEnable, ESBChatDetailFilterType InDetailFilterType);
		void ChangeFilter(bool InEnable, ESBChatFilterType InFilterType);
		void IsDirectChatPlayer(const struct FSBChatUIMessage& InMess, bool* Ret);
		void CreateChatLogList(int32_t InFilterType, int32_t InDetailFilterType);
		void SetFilterListVisible(bool InVisible);
		void NextTabSelection(bool bPrevious);
		void ChangeTabMode(ESBChatLogTabType InTabType, bool bInit);
		void InitFilterCheckBox();
		void Init(class UUMG_ChatLogWindow_C* InWidget, int32_t InFilterType, int32_t InDetailFilterType, ESBChatLogTabType InTabType);
		void BndEvt__MainTabButton_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__MainTabButton_2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__FilterButton_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ChatLogFilterItem_0_K2Node_ComponentBoundEvent_493_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterItem_1_K2Node_ComponentBoundEvent_494_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterItem_2_K2Node_ComponentBoundEvent_508_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterItem_3_K2Node_ComponentBoundEvent_523_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterItem_4_K2Node_ComponentBoundEvent_539_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterBattle_0_K2Node_ComponentBoundEvent_0_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterCommunication_0_K2Node_ComponentBoundEvent_1_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterCommunication_1_K2Node_ComponentBoundEvent_2_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterSystem_0_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterSystem_1_K2Node_ComponentBoundEvent_4_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogFilterSystem_2_K2Node_ComponentBoundEvent_5_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void CloseFilter();
		void BndEvt__ChatLogWindowList_ChatLogFilterBattle_1_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogWindowList_ChatLogFilterBattle_2_K2Node_ComponentBoundEvent_3_EventCheckStateChanged__DelegateSignature(bool IsChecked);
		void BndEvt__ChatLogWindowList_FilterClose_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnAddWindow_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature();
		void OnReciveMessage(const struct FSBChatUIMessage& InMess, bool bRecieve);
		void BndEvt__LogListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget);
		void BndEvt__BtnSeparation_Main_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BtnStoring_Sub_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__ChatLogWindowList_CmnClose02_K2Node_ComponentBoundEvent_8_OnClosed__DelegateSignature();
		void BndEvt__SBMainTabButton_K2Node_ComponentBoundEvent_278_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_ChatLogWindowList(int32_t EntryPoint);
		void OnChangeUnreadVisible__DelegateSignature(bool IsVisible);
		void OnChangeChatUnreadNotify__DelegateSignature(bool IsChatUnreadNotify);
		void OnChangeTab__DelegateSignature();
		void OnChatLogTabCloseRequest__DelegateSignature(ESBChatLogWindowSlot RequestSlot);
		void OnChatLogTabAddRequest__DelegateSignature();
		void OnChangeFilterType__DelegateSignature(int32_t InType, int32_t InDetailType);
		void OnChatLogWindowCloseRequest__DelegateSignature();
		void OnChatLogWindowAddRequest__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * WidgetBlueprintGeneratedClass CommandMenu.CommandMenu_C
	 * Size -> 0x0298 (FullSize[0x0548] - InheritedSize[0x02B0])
	 */
	class UCommandMenu_C : public USBCommandMenu
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimInOut;                                               // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            AnimPostEffectBlendRate;                                 // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgBtm1;                                                  // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgBtm2;                                                  // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            BGContentsGroup1;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgTop1;                                                  // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BgTop2;                                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButton_C*                                         Btn_ShowHint;                                            // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem2_C*                            BtnCharaSelect;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem2_C*                            BtnOption;                                               // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem2_C*                            BtnQuit;                                                 // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem_C*                             Button_Communicate;                                      // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem_C*                             Button_Inventory;                                        // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem_C*                             Button_Letter;                                           // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem_C*                             Button_Library;                                          // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem_C*                             Button_Map;                                              // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem_C*                             Button_MyCharacter;                                      // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem_C*                             Button_Quest;                                            // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_MenuItem_C*                             Button_SeasonPass;                                       // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        CmnBack01;                                               // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_BgAnim_C*                               CommandMenu_BgAnim;                                      // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_BtnSkyStore_C*                          CommandMenu_BtnSkyStore;                                 // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_Guild_Button_C*                         GuildMenuButton;                                         // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_1;                                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_2;                                                 // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_3;                                                 // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line1;                                                   // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_DungeonFinder_Button_C*                         MatchingMenuButton;                                      // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUMG_PartyMenu_Button_C*                             PartyMenuButton;                                         // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Title;                                                   // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleBg;                                                 // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              TitleEffect1;                                            // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker2;                                              // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWBP_NaEventButton_C*                                WBP_NaEventButton;                                       // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		ESBCommandMenuType                                         CurrentMenuType;                                         // 0x03D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2Q9H[0x7];                                   // 0x03D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         CurrentMenuWidget;                                       // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDoLogoutCountdown;                                      // 0x03E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBCommandMenuType                                         NextMenuType;                                            // 0x03E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTermWait;                                               // 0x03EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IGLQ[0x5];                                   // 0x03EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCommandMenu_MenuItem_C*>                     MenuGroup1Buttons;                                       // 0x03F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       bExitGame;                                               // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsVisibleBGEffect;                                      // 0x0401(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V52P[0x6];                                   // 0x0402(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTermed;                                                // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TMap<ESBCommandMenuType, class UWidget*>                   AllMenuButtons;                                          // 0x0418(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		ESBCommandMenuType                                         TopMenu;                                                 // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_QCXP[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTerm;                                                  // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bGameQuit;                                               // 0x0480(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bDestructed;                                             // 0x0481(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsAfterTermReques;                                       // 0x0482(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBCommandMenuType                                         InMenuType;                                              // 0x0483(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Startup;                                                 // 0x0484(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bLoadChildMenu;                                          // 0x0485(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_P6ZF[0x2];                                   // 0x0486(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CommandMenuMap[0x50];                                    // 0x0488(0x0050) UNKNOWN PROPERTY: MapProperty
		TArray<class UClass*>                                      ResidentMenu;                                            // 0x04D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnFinishCreateChildWidget;                               // 0x04E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FName                                                ParamName;                                               // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FString                                              BookmarkType;                                            // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       bIsRmShopDisplayed;                                      // 0x0510(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0FFB[0x7];                                   // 0x0511(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class URmShopMenu_C*                                       RmShopMenu;                                              // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUIBlocker_C*                                        OutBlocker;                                              // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTermNow;                                                // 0x0528(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       OpenBookmarkCooolTimeNow;                                // 0x0529(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_E9BN[0x2];                                   // 0x052A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OpenBookmarkCooolTime;                                   // 0x052C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AchievementDataLoad;                                     // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U81M[0x7];                                   // 0x0531(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ViewedDemoIdList;                                        // 0x0538(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CheckReadDemoIdList(TArray<class FName>* In);
		void SetSkyShopBtn();
		void SetIsEnabledBtnSkyStore(bool IsEnabled);
		void OnCancelMatch();
		void OnFailedMatch();
		void OnMatchedGame(class USBMatchingGameState* MatchedGame);
		void UpdateQuestButton();
		void UpdateButtonInventory();
		void CommandMenu_AutoGenFunc(bool bWasSuccessful, int32_t ApprovalMax, bool bNoOverride, TArray<struct FContactListData> ItemListData, int32_t RetCode);
		void UnbindConsent();
		void UpdateConsent();
		void SetCmnBackBtnVIsibility(bool InIsVisible);
		void UpdateMatchingMenuButtonExclamation();
		void UpdateGuildButtonExclamation();
		class USBPlayerGuildComponent* GetGuildComp();
		void UpdateGuildButton();
		void GetIsRmShopDisplayed(bool* OutIsRmShopOpen);
		void UpdateLetterButton();
		void UpdateSeasonPassMenuButton();
		void TsCheck(const class FString& InputPin, bool* NewParam);
		void GetNowPage(class FString* NowBookMarkType);
		void IsBookmarkType(ESBKeyConfigAction Index, bool* bBookmark);
		class FString GetBookmarkType(ESBKeyConfigAction Index);
		ESBCommandMenuType GetCommondMenuType(ESBKeyConfigAction Action);
		void CreateChildMenu(class UClass* Class, class USBCommandMenuChildBase** CreateChildWidget);
		void UpdateLibraryNewIcon();
		void SetActiveMenuButtonAnim(ESBCommandMenuType ActiveMenuType);
		void DisableMenuButtons();
		void GetFirstMenuType_Internal(ESBCommandMenuType* MenuType);
		void IsEnableMenu(ESBCommandMenuType InMenuType, bool* bEnable);
		void RequestDirectChat();
		void AddBGGroupContents(class UUserWidget* InWidget);
		void IsRememberMenu(ESBCommandMenuType InMenuType, bool* bRet);
		void GetFirstMenuType(ESBCommandMenuType* MenuType);
		void SetActiveMenuButton(ESBCommandMenuType ActiveMenuType);
		void CollectMenuButton();
		void OnLoaded_A56FA3C649A13B2523A4D78B50954D35(class UClass* Loaded);
		void OnLoaded_6ACEB693478345863D5B688D8FC8E59D(class UClass* Loaded);
		void OnLoaded_AE38282A462780609F3445B36A750DC5(class UClass* Loaded);
		void Event_OpenCommandMenu();
		void Event_CloseCommandMenu();
		void OnPress_QuickAccess(ESBKeyConfigAction QuickAccess);
		void StartQuickAccess(ESBCommandMenuType InMenuType);
		void TransitionMenuFromSubMenu(ESBCommandMenuType InMenuType, const class FString& InBookMarkType, const class FName& InParamName);
		void BookmarkProcessing(const class FString& BookmarkType);
		void CustomEvent_2(EYesNoDialogResult Result);
		void CustomEvent_3(ESBBookMarkerSlot BookmarkSlot, const class FString& KeyString);
		void BookmarkRegistration(const class FString& BookmarkType);
		void BookmarkDelete(const class FString& InputPin);
		void CustomEvent_4(EYesNoDialogResult Result);
		void BookmarkUpdateRequest();
		void BookmarkUpdate();
		void RequestTransitionMenuNew(ESBCommandMenuType MenuType, const class FString& BookmarkType, const class FName& InParamName);
		void Destruct();
		void Construct();
		void CustomEvent_1();
		void OnUnreadUpdate(bool bWasSuccessful, int32_t ErrorCode, int32_t UnreadCount);
		void UnbindUpdatedUnreadCount();
		void BindUpdatedUnreadCount();
		void OnRequestTermCommandMenuDelegate_Event_1(bool bForce);
		void UnbindOnRequestTermCommandMenuDelegate();
		void BindOnRequestTermCommandMenuDelegate();
		void DemoPlayStartDelegate_Event_1();
		void UnbindDemoPlayStartDelegate();
		void BindDemoPlayStartDelegate();
		void UnbindGameOverDelegate();
		void UnbindOnDeathDelegate();
		void QuitCommandMenuDelegate();
		void UnbindDungeonClearDelegate();
		void BindOnDeathDelegate();
		void BindGameOverDelegate();
		void BindDungeonClearDelegate();
		void BindUpdateItemNew();
		void CustomEvent_5(class UObject* Sender, class UObject* Param);
		void UnbindUpdateItemNew();
		void BindUpdateQuestButtonNew();
		void _4(class UObject* Sender, class UObject* Param);
		void Event_OnCompleteCommandMenuGetDelegate(int32_t RetCode);
		void BindUpdateMatchingMenuButtonNew();
		void OnUpdateMatchingMenuButtonNew(class UObject* Sender, class UObject* Param);
		void CustomEvent_6(class UObject* Sender, class UObject* Param);
		void CustomEvent_7(bool Result, int32_t RetCode);
		void TryAchievementDataLoad();
		void ExitGame();
		void StartExitGame(bool QuitFlag, int32_t DlalogMsgID);
		void OnHide_Event_1(EDialogResult Result);
		void ExitGame_TermMenu();
		void Term();
		void TryTerm();
		void ForceTerm();
		void CallTryTerm();
		void BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
		void BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
		void BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
		void BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
		void TryStartChildMenu(ESBCommandMenuType InMenuType, const class FName& InParamName);
		void StartChildMenu(ESBCommandMenuType InMenuType, bool bIsStartup, bool First);
		void BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
		void BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature(ESBCommandMenuType MenuType);
		void BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature(ESBCommandMenuType MenuType);
		void BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature();
		void BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature();
		void ResetMouseCursorTypeToDefault();
		void BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
		void OnStartOption();
		void UpdateUnreadMark();
		void BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature(ESBCommandMenuType MenuType);
		void BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature();
		void RequestUpdateLibraryNewIcon();
		void OnCloseOptionMenu();
		void BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
		void DisplayRmShop(ESBRmShopMenuType StartUpShopType);
		void OnCommandMenuVisible_Event_1(bool IsVisible);
		void OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param);
		void BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
		void OnCloseRmShopMenuEvent();
		void BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
		void Event_OnCompletedGetEntries(int32_t RetCode);
		void Event_OnCompletedGetInviteList(int32_t RetCode);
		void Event_OnCompletedWithDraw(int32_t RetCode);
		void Event_OnCompletedGGetEntryList(int32_t RetCode);
		void Event_OnCompletedInviteArraignment(int32_t RetCode, bool isAccept, const class FString& InEntryId);
		void Event_OnCompletedCancelEntry(int32_t RetCode);
		void OnIsCmnBackBtnVisible(bool bInIsVisible);
		void ForceCloseRmShop();
		void Event_OnCompletedGuildAddedNewMember();
		void BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature(bool IsStart);
		void OnDelegateMails();
		void OnMailDelegateEvents(bool bIsAleat);
		void BindMailComponent();
		void UnbindMailComponent();
		void BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature();
		void OnPress_MainMenu();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnPress_Cancel();
		void OnSubMenuTermReady();
		void OnRequestDirectChat();
		void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
		void OnAddBgGroupContents(class UUserWidget* InWidget);
		void ExecuteUbergraph_CommandMenu(int32_t EntryPoint);
		void OnFinishCreateChildWidget__DelegateSignature();
		void OnTerm__DelegateSignature();
		void OnTermed__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

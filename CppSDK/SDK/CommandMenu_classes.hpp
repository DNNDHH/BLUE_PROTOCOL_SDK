#pragma once

 

// Package: CommandMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommandMenu.CommandMenu_C
// 0x0298 (0x0548 - 0x02B0)
class UCommandMenu_C final : public USBCommandMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UOverlay*                               AnimPostEffectBlendRate;                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgBtm1;                                            // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgBtm2;                                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               BGContentsGroup1;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgTop1;                                            // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgTop2;                                            // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem2_C*               BtnCharaSelect;                                    // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem2_C*               BtnOption;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem2_C*               BtnQuit;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                Button_Communicate;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                Button_Inventory;                                  // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                Button_Letter;                                     // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                Button_Library;                                    // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                Button_Map;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                Button_MyCharacter;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                Button_Quest;                                      // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_MenuItem_C*                Button_SeasonPass;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_BgAnim_C*                  CommandMenu_BgAnim;                                // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_BtnSkyStore_C*             CommandMenu_BtnSkyStore;                           // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_Guild_Button_C*            GuildMenuButton;                                   // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DungeonFinder_Button_C*            MatchingMenuButton;                                // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PartyMenu_Button_C*                PartyMenuButton;                                   // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Title;                                             // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleBg;                                           // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TitleEffect1;                                      // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker2;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_NaEventButton_C*                   WBP_NaEventButton;                                 // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ESBCommandMenuType                            CurrentMenuType;                                   // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8EDC[0x7];                                     // 0x03D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUserWidget*                            CurrentMenuWidget;                                 // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDoLogoutCountdown;                                // 0x03E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            NextMenuType;                                      // 0x03E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTermWait;                                         // 0x03EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EDD[0x5];                                     // 0x03EB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UCommandMenu_MenuItem_C*>        MenuGroup1Buttons;                                 // 0x03F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          bExitGame;                                         // 0x0400(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsVisibleBGEffect;                                // 0x0401(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EDE[0x6];                                     // 0x0402(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTermed;                                          // 0x0408(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TMap<ESBCommandMenuType, class UWidget*>      AllMenuButtons;                                    // 0x0418(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	ESBCommandMenuType                            TopMenu;                                           // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_8EDF[0x7];                                     // 0x0469(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnTerm;                                            // 0x0470(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bGameQuit;                                         // 0x0480(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDestructed;                                       // 0x0481(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsAfterTermReques;                                 // 0x0482(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBCommandMenuType                            InMenuType;                                        // 0x0483(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Startup;                                           // 0x0484(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bLoadChildMenu;                                    // 0x0485(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EE0[0x2];                                     // 0x0486(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<ESBCommandMenuType, TSoftClassPtr<class UClass>> CommandMenuMap;                                    // 0x0488(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         ResidentMenu;                                      // 0x04D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnFinishCreateChildWidget;                         // 0x04E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                   ParamName;                                         // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                 BookmarkType;                                      // 0x0500(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsRmShopDisplayed;                                // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EE1[0x7];                                     // 0x0511(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class URmShopMenu_C*                          RmShopMenu;                                        // 0x0518(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           OutBlocker;                                        // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTermNow;                                          // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          OpenBookmarkCooolTimeNow;                          // 0x0529(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EE2[0x2];                                     // 0x052A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         OpenBookmarkCooolTime;                             // 0x052C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AchievementDataLoad;                               // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8EE3[0x7];                                     // 0x0531(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           ViewedDemoIdList;                                  // 0x0538(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnTermed__DelegateSignature();
	void OnTerm__DelegateSignature();
	void OnFinishCreateChildWidget__DelegateSignature();
	void ExecuteUbergraph_CommandMenu(int32 EntryPoint);
	void OnAddBgGroupContents(class UUserWidget* InWidget);
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void OnRequestDirectChat();
	void OnSubMenuTermReady();
	void OnPress_Cancel();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnPress_MainMenu();
	void BndEvt__CommandMenu_PartyMenuButton_K2Node_ComponentBoundEvent_7_OnOpenPartyMenu__DelegateSignature();
	void UnbindMailComponent();
	void BindMailComponent();
	void OnMailDelegateEvents(bool bIsAleat);
	void OnDelegateMails();
	void BndEvt__CommandMenu_MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnMatchingState__DelegateSignature(bool IsStart);
	void Event_OnCompletedGuildAddedNewMember();
	void ForceCloseRmShop();
	void OnIsCmnBackBtnVisible(const bool bInIsVisible);
	void Event_OnCompletedCancelEntry(const int32 RetCode);
	void Event_OnCompletedInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId);
	void Event_OnCompletedGGetEntryList(const int32 RetCode);
	void Event_OnCompletedWithDraw(const int32 RetCode);
	void Event_OnCompletedGetInviteList(const int32 RetCode);
	void Event_OnCompletedGetEntries(const int32 RetCode);
	void BndEvt__CommandMenu_BtnSkyStore_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature();
	void OnCloseRmShopMenuEvent();
	void BndEvt__Button_Letter_K2Node_ComponentBoundEvent_5_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void OnUpdateSeasonPassAnyInfo(class UObject* Sender, class UObject* Param);
	void OnCommandMenuVisible_Event_0(bool Param_IsVisible);
	void DisplayRmShop(ESBRmShopMenuType StartUpShopType);
	void BndEvt__Button_Library_1_K2Node_ComponentBoundEvent_3_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void OnCloseOptionMenu();
	void RequestUpdateLibraryNewIcon();
	void BndEvt__GuildMenuButton_K2Node_ComponentBoundEvent_0_OpenGuildMenu__DelegateSignature();
	void BndEvt__BtnCharaSelect_K2Node_ComponentBoundEvent_1_OnSelect__DelegateSignature(ESBCommandMenuType MenuType);
	void UpdateUnreadMark();
	void OnStartOption();
	void BndEvt__Button_Library_K2Node_ComponentBoundEvent_15_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void ResetMouseCursorTypeToDefault();
	void BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_0_OnOpenDungeonMatchingMenu__DelegateSignature();
	void BndEvt__MatchingMenuButton_K2Node_ComponentBoundEvent_28_OnOpenMatchingMenu__DelegateSignature();
	void BndEvt__BtnQuit_K2Node_ComponentBoundEvent_293_OnSelect__DelegateSignature(ESBCommandMenuType MenuType);
	void BndEvt__BtnOption_K2Node_ComponentBoundEvent_150_OnSelect__DelegateSignature(ESBCommandMenuType MenuType);
	void BndEvt__Button_Map_K2Node_ComponentBoundEvent_693_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void StartChildMenu(ESBCommandMenuType Param_InMenuType, bool bIsStartup, bool First);
	void TryStartChildMenu(ESBCommandMenuType Param_InMenuType, class FName InParamName);
	void BndEvt__Button_Communicate_K2Node_ComponentBoundEvent_109_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void BndEvt__Button_Quest_K2Node_ComponentBoundEvent_103_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void BndEvt__Button_Inventory_K2Node_ComponentBoundEvent_98_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void BndEvt__Button_MyCharacter_K2Node_ComponentBoundEvent_97_OnSelect__DelegateSignature(class UCommandMenu_MenuItem_C* Button);
	void CallTryTerm();
	void ForceTerm();
	void TryTerm();
	void Term();
	void ExitGame_TermMenu();
	void OnHide_Event_0(EDialogResult Result);
	void StartExitGame(bool QuitFlag, int32 DlalogMsgID);
	void ExitGame();
	void TryAchievementDataLoad();
	void CustomEvent_6(const bool Result, const int32 RetCode);
	void CustomEvent_5(class UObject* Sender, class UObject* Param);
	void OnUpdateMatchingMenuButtonNew(class UObject* Sender, class UObject* Param);
	void BindUpdateMatchingMenuButtonNew();
	void Event_OnCompleteCommandMenuGetDelegate(const int32 RetCode);
	void _________3(class UObject* Sender, class UObject* Param);
	void BindUpdateQuestButtonNew();
	void UnbindUpdateItemNew();
	void CustomEvent_4(class UObject* Sender, class UObject* Param);
	void BindUpdateItemNew();
	void BindDungeonClearDelegate();
	void BindGameOverDelegate();
	void BindOnDeathDelegate();
	void UnbindDungeonClearDelegate();
	void QuitCommandMenuDelegate();
	void UnbindOnDeathDelegate();
	void UnbindGameOverDelegate();
	void BindDemoPlayStartDelegate();
	void UnbindDemoPlayStartDelegate();
	void DemoPlayStartDelegate_Event_0();
	void BindOnRequestTermCommandMenuDelegate();
	void UnbindOnRequestTermCommandMenuDelegate();
	void OnRequestTermCommandMenuDelegate_Event_0(bool bForce);
	void BindUpdatedUnreadCount();
	void UnbindUpdatedUnreadCount();
	void OnUnreadUpdate(bool bWasSuccessful, int32 ErrorCode, int32 UnreadCount);
	void CustomEvent_0();
	void Construct();
	void Destruct();
	void RequestTransitionMenuNew(ESBCommandMenuType MenuType, const class FString& Param_BookmarkType, const class FName InParamName);
	void BookmarkUpdate();
	void BookmarkUpdateRequest();
	void CustomEvent_3(const EYesNoDialogResult Result);
	void BookmarkDelete(const class FString& InputPin);
	void BookmarkRegistration(const class FString& Param_BookmarkType);
	void CustomEvent_2(ESBBookMarkerSlot BookmarkSlot, const class FString& KeyString);
	void CustomEvent_1(const EYesNoDialogResult Result);
	void BookmarkProcessing(const class FString& Param_BookmarkType);
	void TransitionMenuFromSubMenu(ESBCommandMenuType Param_InMenuType, const class FString& InBookMarkType, class FName InParamName);
	void StartQuickAccess(ESBCommandMenuType Param_InMenuType);
	void OnPress_QuickAccess(ESBKeyConfigAction QuickAccess);
	void Event_CloseCommandMenu();
	void Event_OpenCommandMenu();
	void OnLoaded_AE38282A462780609F3445B36A750DC5(TSubclassOf<class UObject> Loaded);
	void OnLoaded_6ACEB693478345863D5B688D8FC8E59D(TSubclassOf<class UObject> Loaded);
	void OnLoaded_A56FA3C649A13B2523A4D78B50954D35(TSubclassOf<class UObject> Loaded);
	void CollectMenuButton();
	void SetActiveMenuButton(ESBCommandMenuType ActiveMenuType);
	void Add_BGGroup_Contents(class UUserWidget* InWidget);
	void RequestDirectChat();
	void DisableMenuButtons();
	void SetActiveMenuButtonAnim(ESBCommandMenuType ActiveMenuType);
	void Update_Library_New_Icon();
	void Create_Child_Menu(class UClass* Param_Class, class USBCommandMenuChildBase** CreateChildWidget);
	ESBCommandMenuType GetCommondMenuType(const ESBKeyConfigAction& Action);
	class FString GetBookmarkType(ESBKeyConfigAction Param_Index);
	void IsBookmarkType(ESBKeyConfigAction Param_Index, bool* bBookmark);
	void Get_Now_Page(class FString* NowBookMarkType);
	void TsCheck(const class FString& InputPin, bool* NewParam);
	void UpdateSeasonPassMenuButton();
	void UpdateLetterButton();
	void GetIsRmShopDisplayed(bool* OutIsRmShopOpen);
	void UpdateGuildButton();
	class USBPlayerGuildComponent* GetGuildComp();
	void UpdateGuildButtonExclamation();
	void UpdateMatchingMenuButtonExclamation();
	void SetCmnBackBtnVIsibility(bool InIsVisible);
	void UpdateConsent();
	void UnbindConsent();
	void CommandMenu_AutoGenFunc(const bool bWasSuccessful, const int32 ApprovalMax, const bool bNoOverride, const TArray<struct FContactListData>& ItemListData, const int32 RetCode);
	void Update_Button_Inventory();
	void UpdateQuestButton();
	void OnMatchedGame(class USBMatchingGameState* MatchedGame);
	void OnFailedMatch();
	void OnCancelMatch();
	void SetIsEnabledBtnSkyStore(bool IsEnabled);
	void SetSkyShopBtn();
	void CheckReadDemoIdList(TArray<class FName>& In);

	void GetFirstMenuType(ESBCommandMenuType* MenuType) const;
	void IsRememberMenu(ESBCommandMenuType Param_InMenuType, bool* bRet) const;
	void IsEnableMenu(ESBCommandMenuType Param_InMenuType, bool* bEnable) const;
	void GetFirstMenuType_Internal(ESBCommandMenuType* MenuType) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommandMenu_C">();
	}
	static class UCommandMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommandMenu_C>();
	}
};
static_assert(alignof(UCommandMenu_C) == 0x000008, "Wrong alignment on UCommandMenu_C");
static_assert(sizeof(UCommandMenu_C) == 0x000548, "Wrong size on UCommandMenu_C");
static_assert(offsetof(UCommandMenu_C, UberGraphFrame) == 0x0002B0, "Member 'UCommandMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, AnimInOut) == 0x0002B8, "Member 'UCommandMenu_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, AnimPostEffectBlendRate) == 0x0002C0, "Member 'UCommandMenu_C::AnimPostEffectBlendRate' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BgBtm1) == 0x0002C8, "Member 'UCommandMenu_C::BgBtm1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BgBtm2) == 0x0002D0, "Member 'UCommandMenu_C::BgBtm2' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BGContentsGroup1) == 0x0002D8, "Member 'UCommandMenu_C::BGContentsGroup1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BgTop1) == 0x0002E0, "Member 'UCommandMenu_C::BgTop1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BgTop2) == 0x0002E8, "Member 'UCommandMenu_C::BgTop2' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Btn_ShowHint) == 0x0002F0, "Member 'UCommandMenu_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BtnCharaSelect) == 0x0002F8, "Member 'UCommandMenu_C::BtnCharaSelect' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BtnOption) == 0x000300, "Member 'UCommandMenu_C::BtnOption' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BtnQuit) == 0x000308, "Member 'UCommandMenu_C::BtnQuit' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Button_Communicate) == 0x000310, "Member 'UCommandMenu_C::Button_Communicate' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Button_Inventory) == 0x000318, "Member 'UCommandMenu_C::Button_Inventory' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Button_Letter) == 0x000320, "Member 'UCommandMenu_C::Button_Letter' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Button_Library) == 0x000328, "Member 'UCommandMenu_C::Button_Library' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Button_Map) == 0x000330, "Member 'UCommandMenu_C::Button_Map' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Button_MyCharacter) == 0x000338, "Member 'UCommandMenu_C::Button_MyCharacter' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Button_Quest) == 0x000340, "Member 'UCommandMenu_C::Button_Quest' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Button_SeasonPass) == 0x000348, "Member 'UCommandMenu_C::Button_SeasonPass' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, CanvasPanel_0) == 0x000350, "Member 'UCommandMenu_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, CmnBack01) == 0x000358, "Member 'UCommandMenu_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, CommandMenu_BgAnim) == 0x000360, "Member 'UCommandMenu_C::CommandMenu_BgAnim' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, CommandMenu_BtnSkyStore) == 0x000368, "Member 'UCommandMenu_C::CommandMenu_BtnSkyStore' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, GuildMenuButton) == 0x000370, "Member 'UCommandMenu_C::GuildMenuButton' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Image_0) == 0x000378, "Member 'UCommandMenu_C::Image_0' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Image_1) == 0x000380, "Member 'UCommandMenu_C::Image_1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Image_2) == 0x000388, "Member 'UCommandMenu_C::Image_2' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Image_3) == 0x000390, "Member 'UCommandMenu_C::Image_3' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Line1) == 0x000398, "Member 'UCommandMenu_C::Line1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, MatchingMenuButton) == 0x0003A0, "Member 'UCommandMenu_C::MatchingMenuButton' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, PartyMenuButton) == 0x0003A8, "Member 'UCommandMenu_C::PartyMenuButton' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Title) == 0x0003B0, "Member 'UCommandMenu_C::Title' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, TitleBg) == 0x0003B8, "Member 'UCommandMenu_C::TitleBg' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, TitleEffect1) == 0x0003C0, "Member 'UCommandMenu_C::TitleEffect1' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, UIBlocker2) == 0x0003C8, "Member 'UCommandMenu_C::UIBlocker2' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, WBP_NaEventButton) == 0x0003D0, "Member 'UCommandMenu_C::WBP_NaEventButton' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, CurrentMenuType) == 0x0003D8, "Member 'UCommandMenu_C::CurrentMenuType' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, CurrentMenuWidget) == 0x0003E0, "Member 'UCommandMenu_C::CurrentMenuWidget' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bDoLogoutCountdown) == 0x0003E8, "Member 'UCommandMenu_C::bDoLogoutCountdown' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, NextMenuType) == 0x0003E9, "Member 'UCommandMenu_C::NextMenuType' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bTermWait) == 0x0003EA, "Member 'UCommandMenu_C::bTermWait' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, MenuGroup1Buttons) == 0x0003F0, "Member 'UCommandMenu_C::MenuGroup1Buttons' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bExitGame) == 0x000400, "Member 'UCommandMenu_C::bExitGame' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bIsVisibleBGEffect) == 0x000401, "Member 'UCommandMenu_C::bIsVisibleBGEffect' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, OnTermed) == 0x000408, "Member 'UCommandMenu_C::OnTermed' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, AllMenuButtons) == 0x000418, "Member 'UCommandMenu_C::AllMenuButtons' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, TopMenu) == 0x000468, "Member 'UCommandMenu_C::TopMenu' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, OnTerm) == 0x000470, "Member 'UCommandMenu_C::OnTerm' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bGameQuit) == 0x000480, "Member 'UCommandMenu_C::bGameQuit' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bDestructed) == 0x000481, "Member 'UCommandMenu_C::bDestructed' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, IsAfterTermReques) == 0x000482, "Member 'UCommandMenu_C::IsAfterTermReques' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, InMenuType) == 0x000483, "Member 'UCommandMenu_C::InMenuType' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, Startup) == 0x000484, "Member 'UCommandMenu_C::Startup' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bLoadChildMenu) == 0x000485, "Member 'UCommandMenu_C::bLoadChildMenu' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, CommandMenuMap) == 0x000488, "Member 'UCommandMenu_C::CommandMenuMap' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, ResidentMenu) == 0x0004D8, "Member 'UCommandMenu_C::ResidentMenu' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, OnFinishCreateChildWidget) == 0x0004E8, "Member 'UCommandMenu_C::OnFinishCreateChildWidget' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, ParamName) == 0x0004F8, "Member 'UCommandMenu_C::ParamName' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, BookmarkType) == 0x000500, "Member 'UCommandMenu_C::BookmarkType' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bIsRmShopDisplayed) == 0x000510, "Member 'UCommandMenu_C::bIsRmShopDisplayed' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, RmShopMenu) == 0x000518, "Member 'UCommandMenu_C::RmShopMenu' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, OutBlocker) == 0x000520, "Member 'UCommandMenu_C::OutBlocker' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, bTermNow) == 0x000528, "Member 'UCommandMenu_C::bTermNow' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, OpenBookmarkCooolTimeNow) == 0x000529, "Member 'UCommandMenu_C::OpenBookmarkCooolTimeNow' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, OpenBookmarkCooolTime) == 0x00052C, "Member 'UCommandMenu_C::OpenBookmarkCooolTime' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, AchievementDataLoad) == 0x000530, "Member 'UCommandMenu_C::AchievementDataLoad' has a wrong offset!");
static_assert(offsetof(UCommandMenu_C, ViewedDemoIdList) == 0x000538, "Member 'UCommandMenu_C::ViewedDemoIdList' has a wrong offset!");

}


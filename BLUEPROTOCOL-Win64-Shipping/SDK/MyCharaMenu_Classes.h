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
	 * WidgetBlueprintGeneratedClass MyCharaMenu.MyCharaMenu_C
	 * Size -> 0x0110 (FullSize[0x03B8] - InheritedSize[0x02A8])
	 */
	class UMyCharaMenu_C : public USBCommandMenuChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut2;                                                // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   CategoryTabButtonList;                                   // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_Line_C*                                 CommandMenu_Line;                                        // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuBg_C*                                    CommandMenuBg;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        MenuCanvas;                                              // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		EMyCharaMenu_ItemType                                      CurrMenuItemType;                                        // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8VJP[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_PlayerSceneCapture2D_Studio_C*                   PlayerAvatarStudio;                                      // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         CurrSelectedMenuWidget;                                  // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bHiding;                                                 // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsFirstOpen;                                             // 0x0301(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8T2M[0x2];                                   // 0x0302(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HelpId;                                                  // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CurrAvatarPoseStateNo;                                   // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayerAvatarImageReuploadFlag;                           // 0x030C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESubMenuTermReason                                         TermRequestReason;                                       // 0x030D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z2Z1[0x2];                                   // 0x030E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_PlayerSceneCapture2D_C*                          TmpBPPlayerSceneCapture2D;                               // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBCharaCreateComponent*                             SBCharaCreateComponent;                                  // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FinishedAnimation;                                       // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBPlayerCharacterCommonComponent*                   SBPlayerCharacterCommonComp;                             // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      BookmarkTypeButtonList;                                  // 0x0330(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsCostumeOn;                                             // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       TempIsChangeCostumeProcStart;                            // 0x0341(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsIdleMotionPlaying;                                    // 0x0342(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_459S[0x5];                                   // 0x0343(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, EMyCharaMenu_ItemType>                 MenuMap;                                                 // 0x0348(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		EMyCharaMenu_ItemType                                      TempMenuItemType;                                        // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JZBD[0x3];                                   // 0x0399(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrCostumeAndMountsSubMenuId;                           // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAvatarSetSavedPose;                                     // 0x03A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bReturnToCategoryTabChangeProc;                          // 0x03A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NXDS[0x6];                                   // 0x03A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SetBackBtnVisibility;                                    // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void UpdatePlayerAvatarWeapon();
		void SetPlayerAvaterCurrentModeMotion(EMyCharaMenu_ItemType InMyCharaMenuItemType, bool ForceEnable);
		void SetPlayerAvaterMotionMode(EMyCharaMenu_ItemType* InMyCharaMenuItemType, bool* IsIdleMotionPlaying);
		void UpdateArmamentChangeButtonEnable();
		void InitializeOpenMenuType();
		void SetPlayerAvatarStudioHidden(bool InIsHidden);
		void FindCurrMapPlayerAvatarTransform(const class FString& InCurrMapName, struct FTransform* OutTransform);
		void SetupSelectedMenu(EMyCharaMenu_ItemType InSelectedItemType);
		void OnParentTerm();
		void OnRMShopClosed();
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void ResetMouseCursorTypeToDefaultRequest();
		void StartUploadImage();
		void OnSaveCommandMenuPlayerAvatarPoseId_(int32_t InRetCode, int32_t InAvatarPoseId);
		void OnUploadImageCompleted_();
		void StartPlayerAvatarUploadImage();
		void OnUploadImageEnded();
		void AchievementChangeButtonClicked(class UMyCharaMenu_AchievementList_C* InAchievementList);
		void AcquiredAchievementLoaded(bool InResult);
		void SelectAchievementSaved(bool InResult);
		void Construct();
		void Destruct();
		void Init();
		void BndEvt__MenuItemTabList_K2Node_ComponentBoundEvent_120_OnClick__DelegateSignature(int32_t ButtonId);
		void SetUIBlockerVisibility(bool IsVisible);
		void OnPlayerAvatarRotateActive_(bool InIsActive);
		void ChangeCostumeProc(bool InProcStart);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnRequestDirectChat_Event();
		void CustomEvent_1();
		void BattleSetSubMenuChanged(int32_t Index);
		void EffectListSubMenuChanged(int32_t Index);
		void OnPlayerAvatarSwitchPosing_(const class FName& OnPosingCommandName, bool InSwitchPosingToPrev);
		void OnPlayerAvatarStudio_CharaPartsLoaded_();
		void OnAvatarPoseChangeState_(const class FString& InPrevStateName, const class FString& InNextStateName);
		void StartOpenMenuAnimation();
		void OnChangeStateByCostumeChange_(const class FString& InPrevStateName, const class FString& InNextStateName);
		void OnCharaPartsLoadedDelegate_ByChangeCostume_(bool Result);
		void DoMenuClose();
		void OnSetPlayerCaptureStudioHidden_(bool IsHidden);
		void BookmarkUpdateRequest();
		void UpdateBookmarkStatusButton();
		void OnCostumeSwitchOnOffEvent(bool InIsCostumeOn);
		void OnChangeEquipCostumeOccuredAtOtherEquipChange();
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void OnIsCmnBackBtnVisibleEvent(bool InIsVisible);
		void OnEquippedWeaponSpawned();
		void OnResetPlayerAvatarRotate_();
		void SetCostumePreviewParameter(const struct FSBCharaCreateParameter& CharaCreateParameter, bool Start);
		void SetAvatarImageReuploadFlag();
		void RefreshPreviewCostume(const struct FSBCharaCreateParameter& CharaCreateParameter);
		void OnCharaPartsLoaded_CostumePreviewRefresh(bool Result);
		void OnIsCostumeOn(bool InIsCostumeOn);
		void OnCostumeAndMountsSubMenuChanged(int32_t InSubMenuId);
		void OnResetAvatarCostumeOnOffToDefault();
		void CostumeAndMountsSubMenuChanged(int32_t Index);
		void SkillBoardSetSubMenuChanged(int32_t Index);
		void AdventurerRankSubMenuChanged(int32_t Index);
		void ExecuteUbergraph_MyCharaMenu(int32_t EntryPoint);
		void SetBackBtnVisibility__DelegateSignature(bool bInIsVisible);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

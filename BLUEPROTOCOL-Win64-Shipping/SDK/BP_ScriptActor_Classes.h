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
	 * BlueprintGeneratedClass BP_ScriptActor.BP_ScriptActor_C
	 * Size -> 0x01A1 (FullSize[0x0C01] - InheritedSize[0x0A60])
	 */
	class ABP_ScriptActor_C : public ASBScriptActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A60(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UChildActorComponent*                                ChildActor;                                              // 0x0A68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ViewTarget2;                                             // 0x0A70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PostProcess_TalkMode;                                    // 0x0A78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UChildActorComponent*                                ViewTarget;                                              // 0x0A80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      LookAtTimer_alpha_A5A2BA7F41C9F1C6BD269FAA8DA87A81;      // 0x0A90(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETimelineDirection                                         LookAtTimer__Direction_A5A2BA7F41C9F1C6BD269FAA8DA87A81; // 0x0A94(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CCR4[0x3];                                   // 0x0A95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  LookAtTimer;                                             // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UActionMenu_C*                                       ActionMenu;                                              // 0x0AA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PrevFov;                                                 // 0x0AA8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bEditFov;                                                // 0x0AAC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_55H1[0x3];                                   // 0x0AAD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UChildActorComponent*>                        ViewTargets;                                             // 0x0AB0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    CurViewTargetIndex;                                      // 0x0AC0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DBKO[0x4];                                   // 0x0AC4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptFadeWidget_C*                                 ColorFilterWidget;                                       // 0x0AC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        ActiveCameraShakes;                                      // 0x0AD0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UScriptMyWalletWidget_C*                             WalletWidget;                                            // 0x0AE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FDateTime                                           DateTime;                                                // 0x0AE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAestheShop_TicketSelectMenu_C*                      AestheShopMenu;                                          // 0x0AF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AActor*                                              TalkModeActor;                                           // 0x0AF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TalkModeDist;                                            // 0x0B00(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CamTargetLoc;                                            // 0x0B04(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             CamLoc;                                                  // 0x0B10(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBEffectVisibleType                                       VisibleType;                                             // 0x0B1C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q1GR[0x3];                                   // 0x0B1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartYaw;                                                // 0x0B20(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TargetYaw;                                               // 0x0B24(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBCameraControlByPassWidget*                        CameraControlByPass;                                     // 0x0B28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        ActivateMapList;                                         // 0x0B30(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                NewVar_1;                                                // 0x0B40(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UASAnimationSet*                                     tmpAnimationSet;                                         // 0x0B58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        MeshNames;                                               // 0x0B60(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       CastShadowFlag;                                          // 0x0B70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GVVX[0x7];                                   // 0x0B71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        InstMeshNames;                                           // 0x0B78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LipSyncSpeed_Buff;                                       // 0x0B88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KMN2[0x4];                                   // 0x0B8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptFastForwardWidget_C*                          FastForwardWidget;                                       // 0x0B90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBLoginBonusWindow*                                 LoginBonusWidget;                                        // 0x0B98(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        DungeonIds;                                              // 0x0BA0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UHappyNappo_C*                                       UINappo;                                                 // 0x0BB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              NappoId;                                                 // 0x0BB8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsNew;                                                   // 0x0BC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NappoFlag_Get;                                           // 0x0BC9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       NappoFlag_Interact;                                      // 0x0BCA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_KBLN[0x1];                                   // 0x0BCB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NappoRetCode;                                            // 0x0BCC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharacterGender                                         AestheStartGender;                                       // 0x0BD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bAddedNpcGuild;                                          // 0x0BD1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QZHF[0x6];                                   // 0x0BD2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDhcBattleTop_C*                                     DhcUI;                                                   // 0x0BD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCommandMenuType                                         AdventureBoardType;                                      // 0x0BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OJEX[0x7];                                   // 0x0BE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNpcGuild_C*                                         NpcGuildWidget;                                          // 0x0BE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UTextWindow_C*                                       TextWindowHigh;                                          // 0x0BF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UForceNavigationMask_C*                              ForceNavigationMask;                                     // 0x0BF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsPaidPlanSubscribed;                                   // 0x0C00(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void ClearPartyMigrationState();
		void GetPlayerNeckJOffset(float* ZOffset);
		void SetTalkModeFixed_Internal(class AActor* InOtherActor, const class FName& ViewParamId, bool bIsNoCheck, float InCameraZOffset);
		void CalcTalkModeTagetLocation(class AActor* NPC, const struct FVector& Offset, struct FVector* Ret);
		void CalcTalkModeCameraLocation(class AActor* NPC, float HeightDiff, const struct FVector& Offset, struct FVector* Ret);
		void CalcTalkModeHeightDiff(class AActor* NPC, float* Ret);
		void AddStringArrayForDebug(TArray<class FString>* SrcTextArray, const class FString& DstText, const class FString& DstTitle);
		void GetActorYawDiff(class AActor** SourceActor, class AActor** DestinationActor, float* YawDiff);
		void LimitAngleDifference(float Start, float Target, float* OutTarget);
		void CreateWalletWidgetIfNeeded();
		void PlayParticleFromActor_Internal(class AActor* InTargetActor, class UParticleSystem* InParticle, const class FName& InSocketId, const struct FVector& OffsetLocation);
		void CurViewTarget(class AActor** ViewTargetActor);
		void GetFreeViewTarget(class AActor** ViewTargetActor);
		void CalcViewTarget(const struct FVector& InTargetLocation, const struct FRotator& InTargetRotation, bool bInRelative, struct FVector* OutTargetLocation, struct FRotator* OutTargetRotation, bool* bSucs);
		class AActor* SpawnSubActor_Internal(class UClass* InActorClass, const struct FVector& InLocation, class USBCharaCreateData* InCharaCreateData, class UASAnimationSet* InAnimationSet);
		void GetValidSubEvents(TArray<class FName>* InCheckEvents, TArray<class FName>* OutValidEvents);
		void IsActivatedDungeon(const class FName& InDungeonId, bool* bActivated);
		void SetTalkMode(class AActor* InOtherActor, float DistancePlayer, bool bIsNoCheckAtTeleport, float CameraZOffset);
		void TryGetSocketLocation(class AActor* Actor, const class FName& SocketName, struct FVector* Location);
		void CalcTalkPlayerPosition(class AActor* NewTargetActor, float Distance, struct FVector* Location);
		void GetViewTargetLocation(class AActor* Actor, struct FVector* Location);
		void CalcViewTargetByActor(class AActor* NewTargetActor, bool IsRelative, struct FVector* Location, struct FRotator* Rotation);
		void LookAtTimer__FinishedFunc();
		void LookAtTimer__UpdateFunc();
		void OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7(class UClass* Loaded);
		void OnLoaded_919BBF95440C9B20CDB744AE50922B91(class UObject* Loaded);
		void OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B(class UClass* Loaded);
		void OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8(class UObject* Loaded);
		void OnLoaded_E0794065497F6D746C417B8FDB70CAC5(class UObject* Loaded);
		void OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290(class UClass* Loaded);
		void OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF(class UClass* Loaded);
		void OnLoaded_EF4A23B0441F8A087072C0826ED33902(class UClass* Loaded);
		void OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B(class UClass* Loaded);
		void OnLoaded_18FE13924D8C002D3FD33FA53CEABAB5(class UClass* Loaded);
		void BP_LoginBonusCheck();
		void LoginBonusFinished();
		void LoginBonusCheckCmplete(bool bWasSuccessful, int32_t ErrorCode);
		void OnLoginBonusWindowClose();
		void FangExpeditionClosed();
		void BP_ShowFang_expedition();
		void BP_StartActorLipSyncAnim(class USBCharaPartsFaceComponent* FaceComponent, float Speed, float Duration);
		void BP_RequestFreeBuffEffectActivation(class ASBFieldActorFreeBuffPoint* BuffPoint, class AActor* PlayerCharacter);
		void BP_ShowResearchTeamMenu();
		void BP_ShowRmShopMenu();
		void OnClose_RmShopMenu_Event();
		void BP_SetEnvironmentMeshShadow(const class FName& RowName, bool bCastShadow);
		void BP_ShowGuildMenu();
		void OnClosedNpcGuild();
		void BP_ShowGuildJoinMenu();
		void OnGuildJoinMenuClosed();
		void OnClosedNpcGuildFromJoin();
		void ResetNpcGuildWidget();
		void BP_ActivateWarpPoint(const class FName& InWarpPointId);
		void _1();
		void OnChangeClass();
		void BP_SendMail(const class FName& InMailId);
		void OnCompletedMail(bool bWasSuccessful, int32_t ErrorCode);
		void Retry();
		void CustomEvent_5();
		void BP_ShowTutorialHelp(const class FName& InId);
		void BP_ForceNavi_ShowMask(const class FName& TableKeyName, bool bIsNoWait);
		void OnForceNaviMaskClosed();
		void BP_ForceNavi_CloseMask();
		void BP_ForceNavi_WaitEquipMountImagine();
		void OnSaveCharaImagineEquipsDelegate__1(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void BP_ForceNavi_Delay(float InDelayTime);
		void ForceNaviCloseMask_Internal();
		void ForceNaviShowMask_Internal(const class FName& InKeyName, bool InNoWait);
		void BP_ForceNavi_Mask_DebugExit();
		void BP_ApplyDofSettings(const class FName& InSettingId, float InTransitionTime);
		void OnDofTransitionFinishe();
		void BP_PlayParticleFromActor(class AActor* InTargetActor, const class FName& InParticleId, const class FName& InAttachSocketId, const struct FVector& InOffsetLocation);
		void BP_ShowChoiceDialog(const class FText& InQuestion, TArray<class FText> InItems);
		void OnSelectItem__1(int32_t InSelectItemIndex);
		void BP_SpawnSubActor(const class FName& InCharacterId, const struct FVector& Location);
		void BP_LookAtLocation(class AActor* InActor, const struct FVector& InTargetLocation);
		void BP_LookAtActorForPlayer(class AActor* SourceActor, class AActor* DestinationActor, bool bIsMount);
		void LookAtLocation_Internal(class AActor* InActor, const struct FVector& InTargetLocation);
		void BP_SetContentLock(ESBContentLockType InContentLockType, bool bInLock);
		void OnSetKeyValueDelegate_Event_1(bool Result);
		void BP_GetEmote(const class FName& InEmoteId);
		void CustomEvent(bool bWasSuccessful);
		void Event_OnSetKeyValue(bool Result);
		void BP_SetUserData(const class FName& InKey, const class FString& InValue);
		void OnAddActivate_Event_1(const class FName& DungeonId);
		void BP_ActivateContent(const class FName& InContentId, bool bIsStartMatching);
		void OnClose_Event_3(class UUMG_MatchingMenu_C* Sender);
		void BP_ShowMoneyUI();
		void BP_HideMoneyUI();
		void BP_GetValidSubEvent(TArray<class FName> InSubEvents);
		void OnSelectItem_Event_3(int32_t InSelectItemIndex);
		void BP_ShowEngramUI();
		void BP_HideEngramUI();
		void BP_ShowHudLayoutSelectPreset();
		void _2(ELayoutPresetTypes Preset);
		void _3();
		void BP_ShowTitle2ndUI();
		void _4();
		void BP_ShowConnectToServerError(int32_t RetCode);
		void BP_ShowFmMenu();
		void OnCloseFmMenu();
		void BP_Delay(float InDelayTime);
		void BP_FadeOut(float InDuration, bool bInWait);
		void BP_FadeIn(float InDuration, bool bInWait);
		void BP_WaitToIdlePlayer();
		void WaitToIdlePlayer_Internal();
		void BP_SetColorFilter(const struct FLinearColor& InColor, float InDuration);
		void OnColorFilterFadeEnd();
		void BP_ResetColorFilter(float InDuration);
		void BP_IsMatchingCanselMenu();
		void OnCheckMatcheCancel(EYesNoDialogResult Result);
		void RetrySystemMessageWaitMatching();
		void BP_SetViewTargetActor(class AActor* InNewTarget, bool bInRelative);
		void BP_ResetViewTarget();
		void BP_SetTalkMode(class AActor* InOtherActor, float InDistancePlayer, bool bIsNoCheckAtTeleportPlayer, float InCameraZOffset);
		void SetTalkModeFilterEnable(bool bInEnable);
		void BP_SetViewTarget(const struct FVector& InTargetLocation, const struct FRotator& InTargetRotation, float InBlendTime);
		void BP_SetViewTargetPreset(const class FName& InCameraId, const struct FVector& InOffsetLocation, float InBlendTime);
		void BP_SetDemoModeWait();
		void SetDemoModeWait_Internal_();
		void BP_PlayCameraShake(const class FName& InId);
		void BP_StopCameraShake(const class FName& InId);
		void BP_SetQuestEventMode();
		void BP_PlaySubTitle(const class FName& InId);
		void OnFinish_Event_1();
		void BP_PlayDemo(const class FName& InDemoName);
		void Event_OnSaveDemoBrowsed(bool Result, int32_t RetCode, const class FName& DemoId);
		void BP_SaveDemoBrowsedFlag(const class FName& InDemoName);
		void _5(bool Result, int32_t RetCode, const class FName& DemoId);
		void BP_PlayDemo_SkipSave(const class FName& InDemoName);
		void PlayDemo_Internal(const class FName& InDemoId);
		void Event_OnDemoPlayEnd(class ASBLevelSequenceActor* SequencerActor);
		void BP_SetTalkModeFixed(class AActor* InOtherActor, const class FName& ViewParamId, bool bIsNoCheckAtTeleportPlayer, float InCameraZOffset);
		void BP_WaitMusicCue();
		void OnSBSoundMusicCueFinished();
		void BP_ShowStorageMenu();
		void BP_ShowWarpMenu();
		void BP_ShowEstheMenu();
		void BP_ShowShopMenu(EShopType InShopType, const class FName& InProductListId);
		void OnClose_Event_2();
		void CustomEvent_4(EDialogResult Result);
		void BP_ShowColosseumMenu();
		void BP_ShowPlayerCraftMenu();
		void OnCloseEvnet_Storage();
		void OnClose_Event();
		void BP_ShowImaginCraft(bool bIsBattleImagine);
		void OnCloseImagineCraft();
		void BP_ShowColoringShop(bool InIsCostumeChange, bool InIsColorSVEnabled);
		void BP_ShowWeaponSyntheMenu();
		void BP_ShowLiquidMemoryShopMenu();
		void OnClose_LiquidMemoryShop_Event(bool IsLiquidMemoryUsed);
		void BP_ShowWeaponAbilityExtender();
		void BP_ShowWeaponAbilityRemover();
		void BP_ShowEventShopMenu(EShopType InShopType);
		void OnClose_EventShop_Event();
		void OnFinish_Event_4(const class FString& Result);
		void BP_ShowCashExchangeShopMenu();
		void OnClose_CashExchangeShop_Event();
		void BP_ShowAdventurerRankShopMenu();
		void OnAdventureRankShopClosed();
		void BP_ShowRankingBoard();
		void OnClose_Event_4();
		void StoratgeEquipSet_OnCloseEvent();
		void BP_ShowStoragePresetEquipSetMenu();
		void BP_ShowWeaponAbilityReconditioner();
		void BP_ShowAdventurerRankUp();
		void OnAdventureRankUpClosed(bool IsSuccess);
		void BP_ShowTAbilityShopMenu(EShopType InShopType);
		void OnClosed_WeaponSynthe(bool IsUsed);
		void OnClosed_WeaponTuning(bool IsUsed);
		void OnClosed_WeaponAbilityRemove(bool IsUsed);
		void OnClosed_WeaponExtender(bool IsUsed);
		void OnColoringShopWarpFailedDelegate();
		void BP_ShowImagineStackB();
		void OnCloseStackBImagineMenu();
		void BP_ShowDhcUIMenu(bool IsDhcMapMode);
		void OnClose__1(bool InGoToNext);
		void BP_ShowCommandMenuAdventureBoard();
		void CustomEvent_2(class UObject* Sender, class UObject* Param);
		void BP_RequestMyRoom(int32_t InRoomId);
		void OnCompleteRoomInfoDelegate__1(int32_t RetCode);
		void BP_ShowTApartMenu();
		void CustomEvent_6();
		void BP_ShowImagineTypeSelector();
		void OnCloseImagineTypeSelector();
		void CustomEvent_7(bool IsUsed);
		void BP_ShowWeaponAbilityBuildup();
		void OnEstheWarpFailedDelegate();
		void OnCloseAestheShopMenu(bool InIsCourseDecided, int32_t InCourseId, int32_t InTicketTokenId, int32_t InUseTicketNum);
		void BP_ReportQuest(int32_t QuestIndex);
		void BP_ShowQuestRequestMenu(int32_t InQuestIndex);
		void OnFinish_Event_2(bool bReported);
		void BP_PickQuest(const class FName& InClientId);
		void OnSelectItem_Event_2(int32_t SelectItem);
		void BP_ShowQuestBoard(const class FName& InQuestBoardId);
		void OnClose_Event_1();
		void BP_QuestAccept(int32_t QuestIndex);
		void OnAcceptQuestDelegate_Event_1(bool Result, EAcceptedQuestErrorCode ErrorCode, int32_t RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo);
		void BP_ShowQuestCompleteJingle(int32_t InQuestIndex);
		void OnFinish_Event_3(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex);
		void OnQuestConfirmFinish_2(EQuestDetail_FinishStatus FinishStatus, int32_t QuestIndex);
		void BP_ShowQuestConfirm(int32_t InQuestIndex);
		void BP_CompleteQuestStep(int32_t InQuestIndex, int32_t InStepIndex, int32_t InConditionDataId);
		void OnCompleteQuestStep_Completed(bool Result, int32_t RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
		void BP_UpdateQuestProgressByTalkNpc(int32_t InQuestIndex, const class FName& NpcId);
		void OnUpdateQuestProgressCompleted(bool Result, int32_t RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
		void BP_ShowSelectMenu(TArray<class FText> InItems, float YOffset);
		void BP_ShowMessageDialog(const class FText& MessageText);
		void CustomEvent_1(EDialogResult Result);
		void BP_ShowYesNoDialog(const class FText& MessageText);
		void CustomEvent_0_Copy(EDialogResult Result);
		void BP_ShowYesNoPopup();
		void BP_ShowTextWindow(const class FText& InText, bool bWaitUserInput);
		void BP_ShowBalloonWindow(class ACharacter* InAttachCharacter, const class FText& InText);
		void OnItemSelected_Event_1(int32_t SelectItemIndex);
		void BP_ResumeChange();
		void BP_OnStart();
		void ShowTextAllDelegate_Event_1();
		void TurnTextDelegate_Event_1();
		void BP_SetSpeaker(const class FName& InName);
		void BP_ActivateContentsOnComplete(bool bAll);
		void ContentsActivated(const class FName& DungeonId);
		void BP_InteractNappo(const class FString& NappoId);
		void BP_CloseNappoUIAndCheckComplete();
		void EndnappoUI();
		void OnInteractAPI(int32_t RetCode, bool is_new, TArray<int32_t> gained_achievement_ids);
		void ReRequest(int32_t RetCode, TArray<class FString> NappoIds);
		void BP_ShowTextWindowHigh(const class FText& InText, EUIZOrder InZOrder, float InYOffset);
		void OnTurnText_High();
		void BP_CloseTextWindowHigh();
		void ExecuteUbergraph_BP_ScriptActor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

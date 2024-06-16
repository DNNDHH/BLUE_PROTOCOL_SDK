#pragma once

 

// Package: BP_ScriptActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "LayoutPresetTypes_structs.hpp"
#include "QuestDetail_FinishStatus_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ScriptActor.BP_ScriptActor_C
// 0x0190 (0x0B90 - 0x0A00)
class ABP_ScriptActor_C : public ASBScriptActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0A00(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   ChildActor;                                        // 0x0A08(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ViewTarget2;                                       // 0x0A10(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                  PostProcess_TalkMode;                              // 0x0A18(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   ViewTarget;                                        // 0x0A20(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0A28(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         LookAtTimer_alpha_A5A2BA7F41C9F1C6BD269FAA8DA87A81; // 0x0A30(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            LookAtTimer__Direction_A5A2BA7F41C9F1C6BD269FAA8DA87A81; // 0x0A34(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B8C[0x3];                                     // 0x0A35(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     LookAtTimer;                                       // 0x0A38(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActionMenu_C*                          ActionMenu;                                        // 0x0A40(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PrevFov;                                           // 0x0A48(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bEditFov;                                          // 0x0A4C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B8D[0x3];                                     // 0x0A4D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UChildActorComponent*>           ViewTargets;                                       // 0x0A50(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                         CurViewTargetIndex;                                // 0x0A60(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B8E[0x4];                                     // 0x0A64(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptFadeWidget_C*                    ColorFilterWidget;                                 // 0x0A68(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ActiveCameraShakes;                                // 0x0A70(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UScriptMyWalletWidget_C*                WalletWidget;                                      // 0x0A80(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              DateTime;                                          // 0x0A88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAestheShop_TicketSelectMenu_C*         AestheShopMenu;                                    // 0x0A90(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 TalkModeActor;                                     // 0x0A98(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TalkModeDist;                                      // 0x0AA0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CamTargetLoc;                                      // 0x0AA4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CamLoc;                                            // 0x0AB0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBEffectVisibleType                          VisibleType;                                       // 0x0ABC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B8F[0x3];                                     // 0x0ABD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartYaw;                                          // 0x0AC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TargetYaw;                                         // 0x0AC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBCameraControlByPassWidget*           CameraControlByPass;                               // 0x0AC8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           ActivateMapList;                                   // 0x0AD0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                   NewVar_0;                                          // 0x0AE0(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UASAnimationSet*                        TmpAnimationSet;                                   // 0x0AF8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           MeshNames;                                         // 0x0B00(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          CastShadowFlag;                                    // 0x0B10(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B90[0x7];                                     // 0x0B11(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           InstMeshNames;                                     // 0x0B18(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         LipSyncSpeed_Buff;                                 // 0x0B28(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B91[0x4];                                     // 0x0B2C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScriptFastForwardWidget_C*             FastForwardWidget;                                 // 0x0B30(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBLoginBonusWindow*                    LoginBonusWidget;                                  // 0x0B38(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                           Dungeon_Ids;                                       // 0x0B40(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UHappyNappo_C*                          UINappo;                                           // 0x0B50(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Nappo_Id;                                          // 0x0B58(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          Is_New;                                            // 0x0B68(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NappoFlag_Get;                                     // 0x0B69(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          NappoFlag_Interact;                                // 0x0B6A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B92[0x1];                                     // 0x0B6B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NappoRet_Code;                                     // 0x0B6C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharacterGender                            AestheStartGender;                                 // 0x0B70(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bAddedNpcGuild;                                    // 0x0B71(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7B93[0x6];                                     // 0x0B72(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDhcBattleTop_C*                        DhcUI;                                             // 0x0B78(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCommandMenuType                            AdventureBoardType;                                // 0x0B80(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7B94[0x7];                                     // 0x0B81(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNpcGuild_C*                            NpcGuildWidget;                                    // 0x0B88(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_ScriptActor(int32 EntryPoint);
	void ReRequest(const int32 RetCode, const TArray<class FString>& NappoIds);
	void OnInteractAPI(const int32 RetCode, bool Is_new, const TArray<int32>& Gained_achievement_ids);
	void EndnappoUI();
	void BP_CloseNappoUIAndCheckComplete();
	void BP_InteractNappo(const class FString& NappoId);
	void ContentsActivated(class FName DungeonId);
	void BP_ActivateContentsOnComplete(const bool bAll);
	void BP_SetSpeaker(const class FName& InName);
	void TurnTextDelegate_Event_0();
	void ShowTextAllDelegate_Event_0();
	void BP_OnStart();
	void BP_ResumeChange();
	void OnItemSelected_Event_0(int32 SelectItemIndex);
	void BP_ShowBalloonWindow(class ACharacter* InAttachCharacter, const class FText& InText);
	void BP_ShowTextWindow(const class FText& InText, const bool bWaitUserInput);
	void BP_ShowYesNoPopup();
	void CustomEvent_0_Copy(EDialogResult Result);
	void BP_ShowYesNoDialog(const class FText& MessageText);
	void CustomEvent_0(EDialogResult Result);
	void BP_ShowMessageDialog(const class FText& MessageText);
	void BP_ShowSelectMenu(const TArray<class FText>& InItems);
	void OnUpdateQuestProgressCompleted(bool Result, int32 RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
	void BP_UpdateQuestProgressByTalkNpc(const int32 InQuestIndex, const class FName NpcId);
	void OnCompleteQuestStep_Completed(bool Result, int32 RetCode, const struct FAcceptedQuestInfo& PrevAcceptedQuestInfo);
	void BP_CompleteQuestStep(const int32 InQuestIndex, const int32 InStepIndex, const int32 InConditionDataId);
	void BP_ShowQuestConfirm(const int32 InQuestIndex);
	void OnQuestConfirmFinish_1(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex);
	void OnFinish_Event_2(EQuestDetail_FinishStatus FinishStatus, int32 QuestIndex);
	void BP_ShowQuestCompleteJingle(const int32 InQuestIndex);
	void OnAcceptQuestDelegate_Event_0(bool Result, const EAcceptedQuestErrorCode ErrorCode, const int32 RetCode, const struct FAcceptedQuestInfo& AcceptedQuestInfo);
	void BP_QuestAccept(const int32 QuestIndex);
	void OnClose_Event_0();
	void BP_ShowQuestBoard(const class FName& InQuestBoardId);
	void OnSelectItem_Event_1(int32 SelectItem);
	void BP_PickQuest(const class FName& InClientId);
	void OnFinish_Event_1(bool bReported);
	void BP_ShowQuestRequestMenu(const int32 InQuestIndex);
	void BP_ReportQuest(const int32 QuestIndex);
	void OnCloseAestheShopMenu(bool InIsCourseDecided, int32 InTicketTokenId, int32 InUseTicketNum);
	void OnEstheWarpFailedDelegate();
	void CustomEvent_5();
	void BP_ShowTApartMenu();
	void OnCompleteRoomInfoDelegate______0(const int32 RetCode);
	void BP_RequestMyRoom(int32 InRoomId);
	void CustomEvent_1(class UObject* Sender, class UObject* Param);
	void BP_ShowCommandMenuAdventureBoard();
	void OnClose______0(bool InGoToNext);
	void BP_ShowDhcUIMenu(bool IsDhcMapMode);
	void OnCloseStackBImagineMenu();
	void BP_ShowImagineStackB();
	void OnColoringShopWarpFailedDelegate();
	void OnClosed_WeaponExtender(bool IsUsed);
	void OnClosed_WeaponAbilityRemove(bool IsUsed);
	void OnClosed_WeaponTuning(bool IsUsed);
	void OnClosed_WeaponSynthe(bool IsUsed);
	void BP_ShowTAbilityShopMenu(EShopType InShopType);
	void OnAdventureRankUpClosed(bool IsSuccess);
	void BP_ShowAdventurerRankUp();
	void BP_ShowWeaponAbilityReconditioner();
	void BP_ShowStoragePresetEquipSetMenu();
	void StoratgeEquipSet_OnCloseEvent();
	void OnClose_Event_3();
	void BP_ShowRankingBoard();
	void OnAdventureRankShopClosed();
	void BP_ShowAdventurerRankShopMenu();
	void OnClose_CashExchangeShop_Event();
	void BP_ShowCashExchangeShopMenu();
	void OnFinish_Event_3(const class FString& Result);
	void OnClose_EventShop_Event();
	void BP_ShowEventShopMenu(EShopType InShopType);
	void BP_ShowWeaponAbilityRemover();
	void BP_ShowWeaponAbilityExtender();
	void OnClose_LiquidMemoryShop_Event(bool IsLiquidMemoryUsed);
	void BP_ShowLiquidMemoryShopMenu();
	void BP_ShowWeaponSyntheMenu();
	void BP_ShowColoringShop(const bool InIsCostumeChange, const bool InIsColorSVEnabled);
	void OnCloseImagineCraft();
	void BP_ShowImaginCraft(bool bIsBattleImagine);
	void OnClose_Event();
	void OnCloseEvnet_Storage();
	void BP_ShowPlayerCraftMenu();
	void BP_ShowColosseumMenu();
	void CustomEvent_3(EDialogResult Result);
	void OnClose_Event_1();
	void BP_ShowShopMenu(const EShopType InShopType, const class FName& InProductListId);
	void BP_ShowEstheMenu();
	void BP_ShowWarpMenu();
	void BP_ShowStorageMenu();
	void OnSBSoundMusicCueFinished();
	void BP_WaitMusicCue();
	void BP_SetTalkModeFixed(class AActor* InOtherActor, const class FName ViewParamId, const bool bIsNoCheckAtTeleportPlayer, const float InCameraZOffset);
	void Event_OnDemoPlayEnd(const class ASBLevelSequenceActor* SequencerActor);
	void PlayDemo_Internal(class FName InDemoId);
	void BP_PlayDemo_SkipSave(const class FName& InDemoName);
	void _________4(const bool Result, const int32 RetCode, const class FName& DemoId);
	void BP_SaveDemoBrowsedFlag(const class FName& InDemoName);
	void Event_OnSaveDemoBrowsed(const bool Result, const int32 RetCode, const class FName& DemoId);
	void BP_PlayDemo(const class FName& InDemoName);
	void OnFinish_Event_0();
	void BP_PlaySubTitle(const class FName& InId);
	void BP_SetQuestEventMode();
	void BP_StopCameraShake(const class FName& InId);
	void BP_PlayCameraShake(const class FName& InId);
	void SetDemoModeWait_Internal_();
	void BP_SetDemoModeWait();
	void BP_SetViewTargetPreset(const class FName& InCameraId, const struct FVector& InOffsetLocation, const float InBlendTime);
	void BP_SetViewTarget(const struct FVector& InTargetLocation, const struct FRotator& InTargetRotation, const float InBlendTime);
	void SetTalkModeFilterEnable(bool bInEnable);
	void BP_SetTalkMode(class AActor* InOtherActor, const float InDistancePlayer, const bool bIsNoCheckAtTeleportPlayer, const float InCameraZOffset);
	void BP_ResetViewTarget();
	void BP_SetViewTargetActor(class AActor* InNewTarget, const bool bInRelative);
	void RetrySystemMessageWait_Matching();
	void OnCheckMatcheCancel(const EYesNoDialogResult Result);
	void BP_IsMatchingCanselMenu();
	void BP_ResetColorFilter(const float InDuration);
	void OnColorFilterFadeEnd();
	void BP_SetColorFilter(const struct FLinearColor& InColor, const float InDuration);
	void WaitToIdlePlayer_Internal();
	void BP_WaitToIdlePlayer();
	void BP_FadeIn(const float InDuration, const bool bInWait);
	void BP_FadeOut(const float InDuration, const bool bInWait);
	void BP_Delay(const float InDelayTime);
	void OnCloseFmMenu();
	void BP_ShowFmMenu();
	void BP_ShowConnectToServerError(int32 RetCode);
	void _________3();
	void BP_ShowTitle2ndUI();
	void _________2();
	void _________1(ELayoutPresetTypes Preset);
	void BP_ShowHudLayoutSelectPreset();
	void BP_HideEngramUI();
	void BP_ShowEngramUI();
	void OnSelectItem_Event_2(const int32 InSelectItemIndex);
	void BP_GetValidSubEvent(const TArray<class FName>& InSubEvents);
	void BP_HideMoneyUI();
	void BP_ShowMoneyUI();
	void OnClose_Event_2(class UUMG_MatchingMenu_C* Sender);
	void BP_ActivateContent(const class FName& InContentId, const bool bIsStartMatching);
	void OnAddActivate_Event_0(class FName DungeonId);
	void BP_SetUserData(const class FName& InKey, const class FString& InValue);
	void Event_OnSetKeyValue(bool Result);
	void CustomEvent(const bool bWasSuccessful);
	void BP_GetEmote(const class FName& InEmoteId);
	void OnSetKeyValueDelegate_Event_0(bool Result);
	void BP_SetContentLock(const ESBContentLockType InContentLockType, const bool bInLock);
	void LookAtLocation_Internal(const class AActor*& InActor, const struct FVector& InTargetLocation);
	void BP_LookAtActorForPlayer(class AActor* SourceActor, class AActor* DestinationActor, bool bIsMount);
	void BP_LookAtLocation(class AActor* InActor, const struct FVector& InTargetLocation);
	void BP_SpawnSubActor(const class FName& InCharacterId, const struct FVector& Location);
	void OnSelectItem______0(const int32 InSelectItemIndex);
	void BP_ShowChoiceDialog(const class FText& InQuestion, const TArray<class FText>& InItems);
	void BP_PlayParticleFromActor(const class AActor* InTargetActor, const class FName& InParticleId, const class FName& InAttachSocketId, const struct FVector& InOffsetLocation);
	void OnDofTransitionFinishe();
	void BP_ApplyDofSettings(const class FName& InSettingId, const float InTransitionTime);
	void BP_ShowTutorialHelp(const class FName& InId);
	void CustomEvent_4();
	void Retry();
	void OnCompletedMail(bool bWasSuccessful, int32 ErrorCode);
	void BP_SendMail(const class FName& InMailId);
	void OnChangeClass();
	void _________0();
	void BP_ActivateWarpPoint(const class FName& InWarpPointId);
	void ResetNpcGuildWidget();
	void OnClosedNpcGuildFromJoin();
	void OnGuildJoinMenuClosed();
	void BP_ShowGuildJoinMenu();
	void OnClosedNpcGuild();
	void BP_ShowGuildMenu();
	void BP_SetEnvironmentMeshShadow(const class FName& RowName, const bool bCastShadow);
	void OnClose_RmShopMenu_Event();
	void BP_ShowRmShopMenu();
	void BP_ShowResearchTeamMenu();
	void BP_RequestFreeBuffEffectActivation(const class ASBFieldActorFreeBuffPoint* BuffPoint, const class AActor* PlayerCharacter);
	void BP_StartActorLipSyncAnim(class USBCharaPartsFaceComponent* FaceComponent, float Speed, float Duration);
	void BP_ShowFang_expedition();
	void FangExpeditionClosed();
	void OnLoginBonusWindowClose();
	void LoginBonusCheckCmplete(const bool bWasSuccessful, const int32 ErrorCode);
	void LoginBonusFinished();
	void BP_LoginBonusCheck();
	void OnLoaded_D739ED1F4BFDF8FE4E06DCB64B073A9B(TSubclassOf<class UObject> Loaded);
	void OnLoaded_EF4A23B0441F8A087072C0826ED33902(TSubclassOf<class UObject> Loaded);
	void OnLoaded_99E9C36745BE1A9494AA2FBF9AD729BF(TSubclassOf<class UObject> Loaded);
	void OnLoaded_0738D19D491EAF2FA7D8EAB23BFAF290(TSubclassOf<class UObject> Loaded);
	void OnLoaded_E0794065497F6D746C417B8FDB70CAC5(class UObject* Loaded);
	void OnLoaded_BFD6CB5C4F10202715FBFC8DF93C8DB8(class UObject* Loaded);
	void OnLoaded_26E4AF3B47ADCFDB70C9C1AA5914347B(TSubclassOf<class UObject> Loaded);
	void OnLoaded_919BBF95440C9B20CDB744AE50922B91(class UObject* Loaded);
	void OnLoaded_8AC3F88145F9E66965EA0ABFD90CC4D7(TSubclassOf<class UObject> Loaded);
	void LookAtTimer__UpdateFunc();
	void LookAtTimer__FinishedFunc();
	void CalcViewTargetByActor(class AActor* NewTargetActor, bool IsRelative, struct FVector* Location, struct FRotator* Rotation);
	void GetViewTargetLocation(class AActor* Actor, struct FVector* Location);
	void CalcTalkPlayerPosition(class AActor* NewTargetActor, float Distance, struct FVector* Location);
	void TryGetSocketLocation(class AActor* Actor, class FName SocketName, struct FVector* Location);
	void SetTalkMode(class AActor* InOtherActor, float DistancePlayer, bool bIsNoCheckAtTeleport, float CameraZOffset);
	void IsActivatedDungeon(class FName InDungeonId, bool* bActivated);
	void GetValidSubEvents(TArray<class FName>& InCheckEvents, TArray<class FName>* OutValidEvents);
	class AActor* SpawnSubActor_Internal(class UClass* InActorClass, const struct FVector& InLocation, class USBCharaCreateData* InCharaCreateData, class UASAnimationSet* InAnimationSet);
	void CalcViewTarget(const struct FVector& InTargetLocation, const struct FRotator& InTargetRotation, bool bInRelative, struct FVector* OutTargetLocation, struct FRotator* OutTargetRotation, bool* bSucs);
	void GetFreeViewTarget(class AActor** ViewTargetActor);
	void CurViewTarget(class AActor** ViewTargetActor);
	void PlayParticleFromActor_Internal(class AActor* InTargetActor, class UParticleSystem* InParticle, class FName InSocketId, const struct FVector& OffsetLocation);
	void CreateWalletWidgetIfNeeded();
	void LimitAngleDifference(float Start, float Target, float* OutTarget);
	void Get_Actor_Yaw_Diff(class AActor*& SourceActor, class AActor*& DestinationActor, float* YawDiff);
	void AddStringArrayForDebug(TArray<class FString>& SrcTextArray, const class FString& DstText, const class FString& DstTitle);
	void CalcTalkModeHeightDiff(class AActor* NPC, float* Ret);
	void CalcTalkModeCameraLocation(class AActor* NPC, float HeightDiff, const struct FVector& Offset, struct FVector* Ret);
	void CalcTalkModeTagetLocation(class AActor* NPC, const struct FVector& Offset, struct FVector* Ret);
	void SetTalkModeFixed_Internal(class AActor* InOtherActor, class FName ViewParamId, bool bIsNoCheck, float InCameraZOffset);
	void GetPlayerNeckJOffset(float* ZOffset);
	void ClearPartyMigrationState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ScriptActor_C">();
	}
	static class ABP_ScriptActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ScriptActor_C>();
	}
};
static_assert(alignof(ABP_ScriptActor_C) == 0x000010, "Wrong alignment on ABP_ScriptActor_C");
static_assert(sizeof(ABP_ScriptActor_C) == 0x000B90, "Wrong size on ABP_ScriptActor_C");
static_assert(offsetof(ABP_ScriptActor_C, UberGraphFrame) == 0x000A00, "Member 'ABP_ScriptActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, ChildActor) == 0x000A08, "Member 'ABP_ScriptActor_C::ChildActor' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, ViewTarget2) == 0x000A10, "Member 'ABP_ScriptActor_C::ViewTarget2' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, PostProcess_TalkMode) == 0x000A18, "Member 'ABP_ScriptActor_C::PostProcess_TalkMode' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, ViewTarget) == 0x000A20, "Member 'ABP_ScriptActor_C::ViewTarget' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, DefaultSceneRoot) == 0x000A28, "Member 'ABP_ScriptActor_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, LookAtTimer_alpha_A5A2BA7F41C9F1C6BD269FAA8DA87A81) == 0x000A30, "Member 'ABP_ScriptActor_C::LookAtTimer_alpha_A5A2BA7F41C9F1C6BD269FAA8DA87A81' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, LookAtTimer__Direction_A5A2BA7F41C9F1C6BD269FAA8DA87A81) == 0x000A34, "Member 'ABP_ScriptActor_C::LookAtTimer__Direction_A5A2BA7F41C9F1C6BD269FAA8DA87A81' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, LookAtTimer) == 0x000A38, "Member 'ABP_ScriptActor_C::LookAtTimer' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, ActionMenu) == 0x000A40, "Member 'ABP_ScriptActor_C::ActionMenu' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, PrevFov) == 0x000A48, "Member 'ABP_ScriptActor_C::PrevFov' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, bEditFov) == 0x000A4C, "Member 'ABP_ScriptActor_C::bEditFov' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, ViewTargets) == 0x000A50, "Member 'ABP_ScriptActor_C::ViewTargets' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, CurViewTargetIndex) == 0x000A60, "Member 'ABP_ScriptActor_C::CurViewTargetIndex' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, ColorFilterWidget) == 0x000A68, "Member 'ABP_ScriptActor_C::ColorFilterWidget' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, ActiveCameraShakes) == 0x000A70, "Member 'ABP_ScriptActor_C::ActiveCameraShakes' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, WalletWidget) == 0x000A80, "Member 'ABP_ScriptActor_C::WalletWidget' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, DateTime) == 0x000A88, "Member 'ABP_ScriptActor_C::DateTime' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, AestheShopMenu) == 0x000A90, "Member 'ABP_ScriptActor_C::AestheShopMenu' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, TalkModeActor) == 0x000A98, "Member 'ABP_ScriptActor_C::TalkModeActor' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, TalkModeDist) == 0x000AA0, "Member 'ABP_ScriptActor_C::TalkModeDist' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, CamTargetLoc) == 0x000AA4, "Member 'ABP_ScriptActor_C::CamTargetLoc' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, CamLoc) == 0x000AB0, "Member 'ABP_ScriptActor_C::CamLoc' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, VisibleType) == 0x000ABC, "Member 'ABP_ScriptActor_C::VisibleType' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, StartYaw) == 0x000AC0, "Member 'ABP_ScriptActor_C::StartYaw' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, TargetYaw) == 0x000AC4, "Member 'ABP_ScriptActor_C::TargetYaw' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, CameraControlByPass) == 0x000AC8, "Member 'ABP_ScriptActor_C::CameraControlByPass' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, ActivateMapList) == 0x000AD0, "Member 'ABP_ScriptActor_C::ActivateMapList' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, NewVar_0) == 0x000AE0, "Member 'ABP_ScriptActor_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, TmpAnimationSet) == 0x000AF8, "Member 'ABP_ScriptActor_C::TmpAnimationSet' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, MeshNames) == 0x000B00, "Member 'ABP_ScriptActor_C::MeshNames' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, CastShadowFlag) == 0x000B10, "Member 'ABP_ScriptActor_C::CastShadowFlag' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, InstMeshNames) == 0x000B18, "Member 'ABP_ScriptActor_C::InstMeshNames' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, LipSyncSpeed_Buff) == 0x000B28, "Member 'ABP_ScriptActor_C::LipSyncSpeed_Buff' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, FastForwardWidget) == 0x000B30, "Member 'ABP_ScriptActor_C::FastForwardWidget' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, LoginBonusWidget) == 0x000B38, "Member 'ABP_ScriptActor_C::LoginBonusWidget' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, Dungeon_Ids) == 0x000B40, "Member 'ABP_ScriptActor_C::Dungeon_Ids' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, UINappo) == 0x000B50, "Member 'ABP_ScriptActor_C::UINappo' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, Nappo_Id) == 0x000B58, "Member 'ABP_ScriptActor_C::Nappo_Id' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, Is_New) == 0x000B68, "Member 'ABP_ScriptActor_C::Is_New' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, NappoFlag_Get) == 0x000B69, "Member 'ABP_ScriptActor_C::NappoFlag_Get' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, NappoFlag_Interact) == 0x000B6A, "Member 'ABP_ScriptActor_C::NappoFlag_Interact' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, NappoRet_Code) == 0x000B6C, "Member 'ABP_ScriptActor_C::NappoRet_Code' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, AestheStartGender) == 0x000B70, "Member 'ABP_ScriptActor_C::AestheStartGender' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, bAddedNpcGuild) == 0x000B71, "Member 'ABP_ScriptActor_C::bAddedNpcGuild' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, DhcUI) == 0x000B78, "Member 'ABP_ScriptActor_C::DhcUI' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, AdventureBoardType) == 0x000B80, "Member 'ABP_ScriptActor_C::AdventureBoardType' has a wrong offset!");
static_assert(offsetof(ABP_ScriptActor_C, NpcGuildWidget) == 0x000B88, "Member 'ABP_ScriptActor_C::NpcGuildWidget' has a wrong offset!");

}


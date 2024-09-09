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
	 * WidgetBlueprintGeneratedClass EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C
	 * Size -> 0x0599 (FullSize[0x0849] - InheritedSize[0x02B0])
	 */
	class UEquipmentStatusDescAndListForBattleSet_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnBack01_C*                                        BackToBattleSetTopLevelBtn;                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Bg01;                                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnFullScreenForCharaDetailedStatus;                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreen;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CaptureStudioCanvas;                                     // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_DetailedStatus_C*                       CharaDetailedStatus;                                     // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClassChangedJingle_C*                               ClassChangedJingle;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ClassChangeLoading;                                      // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnImageThrobber_C*                                 CmnImageThrobber;                                        // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEquipmentListForBattleSet_C*                        EquipmentList;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEquipmentStatusDescForBattleSet_C*                  EquippedEquipmentStatusDesc;                             // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              EquippedEquipmentStatusDescHeadingIcon;                  // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 EquippedEquipmentStatusDescHeadingTxt;                   // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULeftSideParametersForBattleSetSecondLevel_C*        LeftSideParametersForSecondLevel;                        // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Line;                                                    // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEquipmentStatusDescForBattleSet_C*                  SelectedEquipmentStatusDesc;                             // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UStatusTypeSwitchBtnForBattleSet_C*                  StatusTypeSwitchBtn;                                     // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerFrontRow;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		E_BattleSetInfoType                                        BattleSetInfoType;                                       // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBCharaEquipType                                          EquipType;                                               // 0x0361(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBClassType                                               EquipClassType;                                          // 0x0362(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESBItemSortType                                            SortType;                                                // 0x0363(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsStorageMode;                                          // 0x0364(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WSPZ[0x3];                                   // 0x0365(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SelectedStatusTypeId;                                    // 0x0368(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KCLD[0x4];                                   // 0x036C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemIconBtn_C*                                      SelectedItemBtn;                                         // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHideWindowFinished;                                    // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              CurrEquippedEquipmentUniqueId;                           // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              CurrSelectedEquipmentUniqueId;                           // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsEquipmentChangeRequested;                             // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WF3Q[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFilterGroup>                                SortFilter;                                              // 0x03B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsFilterSelectorOpen;                                   // 0x03C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsWeaponModelLoadedDelegateBinded;                      // 0x03C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WDZ1[0x2];                                   // 0x03C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WeaponItemId;                                            // 0x03C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WeaponStickerWeaponItemId;                               // 0x03C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsWeaponStickerAttached;                                // 0x03CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsEquipmentListItemSelected;                            // 0x03CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Q9U7[0x2];                                   // 0x03CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        WeaponModelLoadTimeoutHandle;                            // 0x03D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class ASBPlayerController*                                 TempSBPlayerController;                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASBPlayerCharacter*                                  TempSBPlayerCharacter;                                   // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBOwnItemListContainer*                             TempOwnItemListContainer;                                // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryItemData                                  TempInventoryItemData;                                   // 0x03F0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsSelectedWeaponModelLoadRegistered;                    // 0x0450(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues    EquipOrSkillChangeableRetValue;                          // 0x0451(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EQ19[0x6];                                   // 0x0452(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_CaptureStudio_C*                                CaptureStudioForWeaponModel;                             // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioForBattleImagineModel;                      // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnEquipmentListItemSelected;                             // 0x0468(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquipmentChangeBtnPressed;                             // 0x0478(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                TempUnchangableMessageDialogTargetText;                  // 0x0488(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsCostumePartsLoading;                                  // 0x04A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V3ZE[0x3];                                   // 0x04A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempRetCode;                                             // 0x04A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTempIsEquipmentExpired;                                 // 0x04A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_24RG[0x7];                                   // 0x04A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TempExpiredWeaponStickerUsingWeaponUniqueIds;            // 0x04B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBExpiredEquipmentData                             TempExpiredEquipmentData;                                // 0x04C0(0x0130) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bTempIsEquippedWeaponUsingWeaponStickerExpired;          // 0x05F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VLSC[0x3];                                   // 0x05F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempCurrEquipWeaponId;                                   // 0x05F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPlayerCharacterEquippedCostumeChanged;                 // 0x05F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLeftSideParameterStatusUpdated;                        // 0x0608(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    TempNormalWeaponId;                                      // 0x0618(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempWeaponStickerWeaponId;                               // 0x061C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTempIsWeaponStickerAttached;                            // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTempIsWeaponDecayed;                                    // 0x0621(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCalcStatusDiffRequestForWeaponDecayed;                // 0x0622(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBClassType                                               TempSelectedWeaponClassType;                             // 0x0623(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsClassChangeRequested;                                 // 0x0624(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8565[0x3];                                   // 0x0625(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnResetLeftSideParameterDiffMark;                        // 0x0628(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquippedWeaponSpawned;                                 // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClassChanged;                                          // 0x0648(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquippedWeaponChangeRequestCompleted;                  // 0x0658(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquippedBattleImagineChangeRequestCompleted;           // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquippedInnerImagineChangeRequestCompleted;            // 0x0678(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bTempSetSelectedEquipmentDescEmpty;                      // 0x0688(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTempIsEquipmentDisarm;                                  // 0x0689(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_9Q31[0x6];                                   // 0x068A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSetLeftSideParameterExpGaugeUpdateStop;                // 0x0690(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsEquippedWeaponSpawned;                                // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OQLE[0x7];                                   // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FOwnItemInfo                                        TempOwnItemInfo;                                         // 0x06A8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsEquipmentInStorage;                                   // 0x07F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_Y917[0x7];                                   // 0x07F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCharaDetailedStatus;                                   // 0x0800(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTermEnd;                                               // 0x0810(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    SpawnedWeaponCnt;                                        // 0x0820(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsPlayerStatusRecalculated;                             // 0x0824(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UIDW[0x3];                                   // 0x0825(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WaitTimerEventCntMax;                                    // 0x0828(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WaitTimerEventCnt;                                       // 0x082C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SavedPlayerActorLocation;                                // 0x0830(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SavedPlayerActorRotation;                                // 0x083C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsProcListItemSelected;                                 // 0x0848(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void SetIsEquipmentListEquipChangeInProgress(bool bInIsEquipChangeProceeeding);
		void InitSelectedEquipmentStatusDesc(E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType, bool InIsStorageMode);
		void InitEquippedEquipmentStatusDesc(const class FString& InEquippedEquipmentUniqueId, E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType);
		void SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop);
		void CheckIfBattleImagineWithPossessionSkillIsMultiple(int32_t InImagineId, ESBCharaEquipType InBattleImagineEquipType, bool* OutIsEquipped);
		void CheckIfBattleImagineIdDuplicate(int32_t InImagineId, ESBCharaEquipType InBattleImagineEquipType, bool* OutDuplicate);
		void IsHideWindowAnimePlaying(bool* OutIsPlaying);
		void SetClassChangeLoadingVisibility(bool InIsVisible);
		void SetClassChangedJingleVisibility(bool InIsVisible);
		void IsCharaDetailedStatusOpen(bool* OutIsOpen);
		void GetBattleSetInfoType(E_BattleSetInfoType* OutBattleSetInfoType);
		void RequestPlayerCharacterCalcEquipStatusDiff(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId);
		void UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate);
		void GetIsCostumePartsLoading(bool* OutIsCostumePartsLoading);
		void SetIsCostumePartsLoading(bool InIsCostumePartsLoading);
		void SetEquipmentModelCaptureStudioEnable(bool InIsEnabled);
		void CreateEquipmentModelCaptureStudio(E_BattleSetInfoType InInfoType);
		void SwitchStatusType(int32_t InStatusTypeId);
		void UpdateSelectedEquipmentDesc(const class FString& InEquipmentUniqueId, bool InForceUpdate);
		void UpdateEquippedEquipmentDesc(const class FString& InEquipmentUniqueId, bool InForceUpdate);
		void HideWindow();
		void ShowWindow(E_BattleSetInfoType InInfoType, ESBClassType InEquipClassType, ESBCharaEquipType InEquipType, bool InIsStorageMode);
		void MoveEquipmentToBagRequestProc(EItemType InEquipmentItemType);
		void OnSaveItemStorage(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void InnerImagineChangeProc(const class FString& InInnerImagineUniqueId, bool InDisarm);
		void ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog();
		void OnInnerImagineEquipChangeCompleted(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest();
		void OnCharaEquipPassiveImagineChanged();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData);
		void BattleImagineModelLoadCompleted();
		void BattleImagineChangeProc(const class FString& InBattleImagineUniqueId, bool InDisarm);
		void ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog();
		void OnBattleImagineEquipChangeCompleted(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest();
		void OnImagineArtsChanged(ESkillActionPosition ChangedSAP, const class FString& UniqueId);
		void WeaponChangeProc(const class FString& InWeaponUniqueId);
		void OnWeaponEquipDelegate(int32_t RetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void WeaponModelLoadCompleted();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData);
		void OnClassChangeNotify(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
		void OnClientRestart();
		void OnSpawnWeapon(int32_t InInventoryIndex, ESBWeaponEquipType InWeaponEquipType);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature();
		void ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog();
		void ContinueWeaponChangeProcFromMoveEquipmentToBagRequest();
		void ReturnFromClassChangeProgressContinueConfirmDialog();
		void OnClassChangeFailure(int32_t InRetCode);
		void SetWeaponModelRotateActive(bool InIsRotateActive);
		void ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, E_BattleSetInfoType InBattleSetInfoType);
		void ShowUsingUnusedEquipConfirmDialog();
		void EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult);
		void ShowBattleImagineDuplicateMessageDialog();
		void ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog();
		void ShowClassChangeUnableMessageDialog();
		void ShowQuestProgressUnableByClassChangeConfirmDialog();
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnPress_Cancel();
		void UiInputBlock(bool InIsBlock);
		void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
		void UIInputBlockFrontRow(bool InIsBlock);
		void Destruct();
		void BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature(int32_t InPressedSwitchBtnId);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature(class UItemIconBtn_C* InSelectedListItem);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, const class FString& InEquipmentUniqueId);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature(ESBItemSortType InSelectedSortType);
		void PreConstruct(bool IsDesignTime);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature(bool InIsFilterBtnStoragePressed);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature();
		void OnCalcEquipStatusDiff();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
		void CloseDetailedStatus();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void ExpiredItemNoticeSystemMessageTimerEnd();
		void ChangeEquipmentResultProc(TArray<class FString> InExpiredWeaponStickerUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, bool InIsClassChange, bool InIsDisarm);
		void OnImagineEquipChangeCompleted(int32_t RetCode, ESBCharaEquipType EquipType, const class FString& UniqueId, bool IsEquip, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature();
		void OnWaitEquippedWeaponSpawnTimerEnd();
		void OnWaitPlayerStatusRecalcEndAtImagineEquipChange();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_5_OnIsChangingEquip__DelegateSignature();
		void ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet(int32_t EntryPoint);
		void OnTermEnd__DelegateSignature();
		void OnCharaDetailedStatus__DelegateSignature();
		void OnEquippedWeaponChangeRequestCompleted__DelegateSignature();
		void OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature(bool InIsUpdateStop);
		void OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature();
		void OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature();
		void OnClassChanged__DelegateSignature();
		void OnEquippedWeaponSpawned__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType);
		void OnResetLeftSideParameterDiffMark__DelegateSignature();
		void OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate);
		void OnPlayerCharacterEquippedCostumeChanged__DelegateSignature();
		void OnEquipmentChangeBtnPressed__DelegateSignature();
		void OnEquipmentListItemSelected__DelegateSignature(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId);
		void OnHideWindowFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

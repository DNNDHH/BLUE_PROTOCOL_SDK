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
	 * WidgetBlueprintGeneratedClass BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C
	 * Size -> 0x061C (FullSize[0x08CC] - InheritedSize[0x02B0])
	 */
	class UBattleCordeEditForBattleSet_C : public USBUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimIn;                                                  // 0x02C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCmnAlertIcon_C*                                     AlertIcon01;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBack01_C*                                        BackToBattleSetTopLevelBtn;                              // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBRuntimeTextBlock*                                 BattleCordeGuideTxt;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBattleSetTopInfoBase_C*                             BattleCordeInfo;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBattleCordeList_C*                                  BattleCordeList;                                         // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          BattleCordeNameTxt;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BeltBg;                                                  // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Bg01;                                                    // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BG03;                                                    // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BlackFilter;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnFullScreenForCharaDetailedStatus;                     // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBButtonFullScreen_C*                               BtnScreen;                                               // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMyCharaMenu_DetailedStatus_C*                       CharaDetailedStatus;                                     // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClassChangedJingle_C*                               ClassChangedJingle;                                      // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             ClassChangeLoading;                                      // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnImageThrobber_C*                                 CmnImageThrobber;                                        // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnOperationRotate_C*                               CmnOperationRotate;                                      // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         EquipCordeBtn;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      HBoxForUnableToEquipSelectedCordeAlertMessage;           // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ULeftSideParametersForBattleSetSecondLevel_C*        LeftSideParametersForSecondLevel;                        // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              PlayerAvatarImage;                                       // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnBtn16_C*                                         RegisterCordeBtn;                                        // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              StorageEquip;                                            // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerFrontRow;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       bIsStorageMode;                                          // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		ESBClassType                                               EquipClassType;                                          // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YEPY[0x6];                                   // 0x0392(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnHideWindowFinished;                                    // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FString                                              CurrEquippedEquipmentUniqueId;                           // 0x03A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              CurrSelectedEquipmentUniqueId;                           // 0x03B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsBattleCordeProcessInProgress;                         // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_RSKQ[0x3];                                   // 0x03C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WeaponItemId;                                            // 0x03CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    WeaponStickerWeaponItemId;                               // 0x03D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsWeaponStickerAttached;                                // 0x03D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QMYE[0x3];                                   // 0x03D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASBPlayerController*                                 TempSBPlayerController;                                  // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryItemData                                  TempInventoryItemData;                                   // 0x03E0(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class FText                                                TempUnchangableMessageDialogTargetText;                  // 0x0440(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsCostumePartsLoading;                                  // 0x0458(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YXAA[0x3];                                   // 0x0459(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempRetCode;                                             // 0x045C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTempIsEquipmentExpired;                                 // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_B9I3[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      TempExpiredWeaponStickerUsingWeaponUniqueIds;            // 0x0468(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FSBExpiredEquipmentData                             TempExpiredEquipmentData;                                // 0x0478(0x0130) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bTempIsEquippedWeaponUsingWeaponStickerExpired;          // 0x05A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ETAE[0x3];                                   // 0x05A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TempCurrEquipWeaponId;                                   // 0x05AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnPlayerCharacterEquippedCostumeChanged;                 // 0x05B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnLeftSideParameterStatusUpdated;                        // 0x05C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    TempNormalWeaponId;                                      // 0x05D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempWeaponStickerWeaponId;                               // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bTempIsWeaponStickerAttached;                            // 0x05D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bTempIsWeaponDecayed;                                    // 0x05D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCalcStatusDiffRequestForWeaponDecayed;                // 0x05DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsClassChangeRequested;                                 // 0x05DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_UDJK[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnResetLeftSideParameterDiffMark;                        // 0x05E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnEquippedWeaponSpawned;                                 // 0x05F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnClassChanged;                                          // 0x0600(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSetPlayerAvatarRotateActive;                           // 0x0610(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UNameSettingDialog_C*                                NameSettingDialog;                                       // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              NewRegisterCordeName;                                    // 0x0628(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       bIsCordeNameInputForRename;                              // 0x0638(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCordeDelete;                                          // 0x0639(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_698R[0x6];                                   // 0x063A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBattleCordeListItem_C*                              CurrSelectedCordeListItem;                               // 0x0640(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBPlayerPresetEquipList                            CurrSelectedCordeData;                                   // 0x0648(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FSBPlayerPresetEquipItem>                    CurrSelectedCordeEquipItems;                             // 0x0660(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class USBOwnItemListContainer*                             EquipmentBag;                                            // 0x0670(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBOwnItemListContainer*                             CharacterStorage;                                        // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSBPlayerPresetEquipItem                            TempWeaponPresetEquipItem;                               // 0x0680(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		struct FOwnItemInfo                                        TempWeaponOwnItemInfo;                                   // 0x06A8(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurrCordeId;                                             // 0x07F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsEquipCordeOccuringClassChange;                        // 0x07FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCordeEquipmentsAreAllValid;                           // 0x07FD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K2R4[0x2];                                   // 0x07FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSetLeftSideParameterExpGaugeUpdateStop;                // 0x0800(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBattleCordeDataReloaded;                               // 0x0810(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       bIsCordeDataReloadRequested;                             // 0x0820(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCordeEquipmentInStorage;                              // 0x0821(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FXOT[0x6];                                   // 0x0822(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSBStorageItemData>                          CordeEquipmentStorageItemDatas;                          // 0x0828(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnBattleCordeDataReloadRequestedAtInit;                  // 0x0838(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FSBPlayerPresetEquipItem>                    TempCordeEquipItems;                                     // 0x0848(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnBattleCordeSaveRequestCompleted;                       // 0x0858(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTermEnd;                                               // 0x0868(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class ASBPlayerCharacter*                                  TempSBPlayerCharacter;                                   // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FSBPlayerPresetEquipItem>                    TempCordeItemList;                                       // 0x0880(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    TempEmptyCordeSlotId;                                    // 0x0890(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SpawnedWeaponCnt;                                        // 0x0894(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TempCordeId;                                             // 0x0898(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SavedPlayerActorLocation;                                // 0x089C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            SavedPlayerActorRotation;                                // 0x08A8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bIsCurrEquippedCodeId;                                   // 0x08B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0UBW[0x3];                                   // 0x08B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CurrCordeName;                                           // 0x08B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    OverwriteCordeId;                                        // 0x08C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CalculateBattleScoreForCorde(TArray<struct FSBPlayerPresetEquipItem>* InPresetEquipItemList, int32_t* OutBattleScore);
		void UpdateActiveClickInputAction();
		void StopActiveClickInputAction();
		void UpdateRegisterCordeBtnText(bool bInIsOverwriteMode);
		void ExtractCordeEquipItemsInEquipmentBag(TArray<struct FSBPlayerPresetEquipItem>* InCordeEquipItemList, TArray<struct FSBPlayerPresetEquipItem>* OutExtractedCordeEquipItems);
		void CheckIfTacticalSkillIsActive(bool* OutIsActive);
		void GetCordeEquipmentStorageItemDatas(int32_t InCordeId, TArray<struct FSBStorageItemData>* OutEquipmentStorageItemDatas);
		void UpdateBattleCordeGuide(bool InIsStorageMode);
		void RequestCordeDataReload(bool* OutRequestSuccessed);
		void SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop);
		void SetClassChangeLoadingVisibility(bool InIsVisible);
		void SetClassChangedJingleVisibility(bool InIsVisible);
		void HideCharaCapture2D();
		void ShowCharaCapture2D();
		void CheckCordeEquipmentsAreUnused(int32_t InCordeId, bool InIsStorageMode, bool* OutIsUnused);
		void CheckCordeEquipmentsAreAllValid(int32_t InCordeId, bool* OutIsAllEquipmentValid, bool* OutIsEquipmentInStorage);
		void CheckCordeWeaponIsValid(int32_t InCordeId, bool InIsStorageMode, bool* OutIsValid);
		void SetIsSelectedCordeEquippable(bool InIsEquippable);
		void SetEquipCordeBtnEnable(bool InIsEnabled);
		void RegisterCorde(int32_t InCordeListId, const class FString& InCordeName);
		void GetCordeListEmptySlotId(int32_t* OutListIndex);
		void CreateCordeList(bool InResetSelectedCordeListItem);
		void IsCharaDetailedStatusOpen(bool* OutIsOpen);
		void RequestPlayerCharacterCalcEquipStatusDiff(int32_t InCordeId);
		void UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate);
		void GetIsCostumePartsLoading(bool* OutIsCostumePartsLoading);
		void SetIsCostumePartsLoading(bool InIsCostumePartsLoading);
		void IsHideWindowAnimePlaying(bool* OutIsPlaying);
		void HideWindow();
		void ShowWindow(ESBClassType InEquipClassType, bool InIsStorageMode);
		void OnSaveItemStorage(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void StartCordeNameInputProc(bool InIsForRename);
		void SetupNameInputDialogEventBind(bool InUnbindEvent);
		void OnNameInputDialogNameDecided(const class FString& PlayerName);
		void OnNameInputDilaogClosed();
		void OnNameInputDialogButtonFullScreenClicked();
		void ShowCordeUnequippableMessageDialog();
		void ShowUsingUnusedEquipConfirmDialog();
		void EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult);
		void ShowCordeSlotIsFullMessageDialog();
		void ShowNewCordeRegisterSuccessedMessageDialog(const class FString& InNewCordeName, bool bInIsCordeOverwrite);
		void ShowRenameCordeNameSuccessedMessageDialog(const class FString& InRenamedCordeName);
		void ShowCordeDeleteConfirmDialog();
		void EndCordeDeleteConfirmDialog(EYesNoDialogResult InYesNoResult);
		void ShowCordeDeleteSuccessedMessageDialog();
		void ShowEquipCordeConfirmMessageDialog(const class FString& InCordeName);
		void EquipCordeConfirmEnd(EYesNoDialogResult Result);
		void ShowCordeEquipSuccessedMessageDialog();
		void ShowEquipCordeNotAllValidConfirmDialog();
		void ShowMoveCordeEquipmentFromStorageConfirmDialog();
		void MoveCordeEquipmentFromStorageComfirmEnd(EYesNoDialogResult Result);
		void EquipCordeNotAllValidConfirmEnd(EYesNoDialogResult Result);
		void ShowEquipmentBagIsFullMessageDialog();
		void ContinueCordeEquipmentProc();
		void ShowQuestProgressUnableByClassChangeConfirmDialog();
		void ShowEquippedTacticalSkillIsActiveMessageDialog();
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void UiInputBlock(bool InIsBlock);
		void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
		void Destruct();
		void PreConstruct(bool IsDesignTime);
		void OnCalcEquipStatusDiff();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature();
		void BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void OnPress_Cancel();
		void UIInputBlockFrontRow(bool InIsBlock);
		void OnSavePlayerPresetEquipment(int32_t RetCode);
		void BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature();
		void CloseCharaDetailedStatus();
		void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature(class UBattleCordeListItem_C* InListItem);
		void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem);
		void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem);
		void BattleCordeEquipProc();
		void OnSaveCharaBattlePresetEquipment(int32_t RetCode);
		void OnSpawnWeapon(int32_t InventoryIndex, ESBWeaponEquipType InWeaponEquipType);
		void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSrcCordeListItem, class UBattleCordeListItem_C* InDstCordListItem);
		void OnSwapPresetEquipmentList(int32_t RetCode, int32_t DstListIndex);
		void OnClassChangeNotify(int32_t InRetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
		void OnClientRestart();
		void ExpiredItemNoticeSystemMessageTimerEnd();
		void ClassChangeResultProc(TArray<class FString> InExpiredWeaponStickerUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, bool InIsClassChange, bool InIsDisarm);
		void BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature();
		void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature(bool InIsDataLoadSuccessed);
		void BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature();
		void BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature();
		void ReturnFromClassChangeProgressContinueConfirmDialog();
		void OnCharaEquipPassiveImagineChange();
		void OnClassChangeFailure(int32_t InRetCode);
		void ExecuteUbergraph_BattleCordeEditForBattleSet(int32_t EntryPoint);
		void OnBattleCordeSaveRequestCompleted__DelegateSignature();
		void OnTermEnd__DelegateSignature();
		void OnBattleCordeDataReloadRequestedAtInit__DelegateSignature();
		void OnBattleCordeDataReloaded__DelegateSignature();
		void OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature(bool InIsUpdateStop);
		void OnSetPlayerAvatarRotateActive__DelegateSignature(bool InRotateActive);
		void OnClassChanged__DelegateSignature();
		void OnEquippedWeaponSpawned__DelegateSignature();
		void OnResetLeftSideParameterDiffMark__DelegateSignature();
		void OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate);
		void OnPlayerCharacterEquippedCostumeChanged__DelegateSignature();
		void OnHideWindowFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

#pragma once

 

// Package: EquipmentStatusDescAndListForBattleSet

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipmentStatusDescAndListForBattleSet.EquipmentStatusDescAndListForBattleSet_C
// 0x0568 (0x0818 - 0x02B0)
class UEquipmentStatusDescAndListForBattleSet_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBack01_C*                           BackToBattleSetTopLevelBtn;                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnFullScreenForCharaDetailedStatus;               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CaptureStudioCanvas;                               // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_DetailedStatus_C*          CharaDetailedStatus;                               // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassChangedJingle_C*                  ClassChangedJingle;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ClassChangeLoading;                                // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipmentListForBattleSet_C*           EquipmentList;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipmentStatusDescForBattleSet_C*     EquippedEquipmentStatusDesc;                       // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EquippedEquipmentStatusDescHeadingIcon;            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    EquippedEquipmentStatusDescHeadingTxt;             // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeftSideParametersForBattleSetSecondLevel_C* LeftSideParametersForSecondLevel;                  // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEquipmentStatusDescForBattleSet_C*     SelectedEquipmentStatusDesc;                       // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStatusTypeSwitchBtnForBattleSet_C*     StatusTypeSwitchBtn;                               // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerFrontRow;                                 // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BattleSetInfoType                           BattleSetInfoType;                                 // 0x0360(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             EquipType;                                         // 0x0361(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  EquipClassType;                                    // 0x0362(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0363(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsStorageMode;                                    // 0x0364(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84AC[0x3];                                     // 0x0365(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SelectedStatusTypeId;                              // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84AD[0x4];                                     // 0x036C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         SelectedItemBtn;                                   // 0x0370(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHideWindowFinished;                              // 0x0378(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 CurrEquippedEquipmentUniqueId;                     // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CurrSelectedEquipmentUniqueId;                     // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsEquipmentChangeRequested;                       // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84AE[0x7];                                     // 0x03A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   SortFilter;                                        // 0x03B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsFilterSelectorOpen;                             // 0x03C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsWeaponModelLoadedDelegateBinded;                // 0x03C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84AF[0x2];                                     // 0x03C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponItemId;                                      // 0x03C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WeaponStickerWeaponItemId;                         // 0x03C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWeaponStickerAttached;                          // 0x03CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsEquipmentListItemSelected;                      // 0x03CD(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B0[0x2];                                     // 0x03CE(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           WeaponModelLoadTimeoutHandle;                      // 0x03D0(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    TempSBPlayerController;                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerCharacter*                     TempSBPlayerCharacter;                             // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                TempOwnItemListContainer;                          // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     TempInventoryItemData;                             // 0x03F0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsSelectedWeaponModelLoadRegistered;              // 0x0450(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues EquipOrSkillChangeableRetValue;                    // 0x0451(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_84B1[0x6];                                     // 0x0452(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_CaptureStudio_C*                   CaptureStudioForWeaponModel;                       // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioForBattleImagineModel;                // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnEquipmentListItemSelected;                       // 0x0468(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquipmentChangeBtnPressed;                       // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                   TempUnchangableMessageDialogTargetText;            // 0x0488(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsCostumePartsLoading;                            // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B2[0x3];                                     // 0x04A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempRetCode;                                       // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTempIsEquipmentExpired;                           // 0x04A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B3[0x7];                                     // 0x04A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         TempExpiredWeaponStickerUsingWeaponUniqueIds;      // 0x04B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBExpiredEquipmentData                TempExpiredEquipmentData;                          // 0x04C0(0x0130)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bTempIsEquippedWeaponUsingWeaponStickerExpired;    // 0x05F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B4[0x3];                                     // 0x05F1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempCurrEquipWeaponId;                             // 0x05F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPlayerCharacterEquippedCostumeChanged;           // 0x05F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLeftSideParameterStatusUpdated;                  // 0x0608(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TempNormalWeaponId;                                // 0x0618(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempWeaponStickerWeaponId;                         // 0x061C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTempIsWeaponStickerAttached;                      // 0x0620(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTempIsWeaponDecayed;                              // 0x0621(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCalcStatusDiffRequestForWeaponDecayed;          // 0x0622(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  TempSelectedWeaponClassType;                       // 0x0623(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsClassChangeRequested;                           // 0x0624(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B5[0x3];                                     // 0x0625(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnResetLeftSideParameterDiffMark;                  // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedWeaponSpawned;                           // 0x0638(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClassChanged;                                    // 0x0648(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedWeaponChangeRequestCompleted;            // 0x0658(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedBattleImagineChangeRequestCompleted;     // 0x0668(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedInnerImagineChangeRequestCompleted;      // 0x0678(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bTempSetSelectedEquipmentDescEmpty;                // 0x0688(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTempIsEquipmentDisarm;                            // 0x0689(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B6[0x6];                                     // 0x068A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSetLeftSideParameterExpGaugeUpdateStop;          // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsEquippedWeaponSpawned;                          // 0x06A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B7[0x7];                                     // 0x06A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           TempOwnItemInfo;                                   // 0x06A8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsEquipmentInStorage;                             // 0x07C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B8[0x7];                                     // 0x07C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnCharaDetailedStatus;                             // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTermEnd;                                         // 0x07D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         SpawnedWeaponCnt;                                  // 0x07E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsPlayerStatusRecalculated;                       // 0x07EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84B9[0x3];                                     // 0x07ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WaitTimerEventCntMax;                              // 0x07F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaitTimerEventCnt;                                 // 0x07F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SavedPlayerActorLocation;                          // 0x07F8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SavedPlayerActorRotation;                          // 0x0804(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsProcListItemSelected;                           // 0x0810(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnHideWindowFinished__DelegateSignature();
	void OnEquipmentListItemSelected__DelegateSignature(const class FString& InEquippedEquipmentUniqueId, const class FString& InSelectedEquipmentUniqueId);
	void OnEquipmentChangeBtnPressed__DelegateSignature();
	void OnPlayerCharacterEquippedCostumeChanged__DelegateSignature();
	void OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate);
	void OnResetLeftSideParameterDiffMark__DelegateSignature();
	void OnEquippedWeaponSpawned__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType);
	void OnClassChanged__DelegateSignature();
	void OnEquippedBattleImagineChangeRequestCompleted__DelegateSignature();
	void OnEquippedInnerImagineChangeRequestCompleted__DelegateSignature();
	void OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature(bool InIsUpdateStop);
	void OnEquippedWeaponChangeRequestCompleted__DelegateSignature();
	void OnCharaDetailedStatus__DelegateSignature();
	void OnTermEnd__DelegateSignature();
	void ExecuteUbergraph_EquipmentStatusDescAndListForBattleSet(int32 EntryPoint);
	void OnWaitPlayerStatusRecalcEndAtImagineEquipChange();
	void OnWaitEquippedWeaponSpawnTimerEnd();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_1_OnCancelBtnPressed__DelegateSignature();
	void OnImagineEquipChangeCompleted(int32 RetCode, const ESBCharaEquipType Param_EquipType, const class FString& UniqueId, const bool IsEquip, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void ChangeEquipmentResultProc(const TArray<class FString>& InExpiredWeaponStickerUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, bool InIsClassChange, bool InIsDisarm);
	void ExpiredItemNoticeSystemMessageTimerEnd();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature();
	void CloseDetailedStatus();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
	void OnCalcEquipStatusDiff();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_EquippedEquipmentStatusDesc_K2Node_ComponentBoundEvent_1_OnImagineRemoveBtnPressed__DelegateSignature();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_EquipmentList_K2Node_ComponentBoundEvent_0_OnFilterBtnBagOrStoragePressed__DelegateSignature(bool InIsFilterBtnStoragePressed);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_14_OnSortTypeSelected__DelegateSignature(ESBItemSortType InSelectedSortType);
	void BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_13_OnFilterApply__DelegateSignature();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_11_OnEquipChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, const class FString& InEquipmentUniqueId);
	void BndEvt__EquipmentStatusDescAndListForBattleSet_List_K2Node_ComponentBoundEvent_8_OnListItemSelected__DelegateSignature(class UItemIconBtn_C* InSelectedListItem);
	void BndEvt__MyCharaMenu_WeaponDescAndListlForBattleSet_StatusTypeSwitchBtn_K2Node_ComponentBoundEvent_7_OnSwitchBtnPressed__DelegateSignature(int32 InPressedSwitchBtnId);
	void Destruct();
	void UIInputBlockFrontRow(bool InIsBlock);
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void UiInputBlock(bool InIsBlock);
	void OnPress_Cancel();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void ShowQuestProgressUnableByClassChangeConfirmDialog();
	void ShowClassChangeUnableMessageDialog();
	void ShowBattleImagineWithPossessionSkillIsEquippedMessageDialog();
	void ShowBattleImagineDuplicateMessageDialog();
	void EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult);
	void ShowUsingUnusedEquipConfirmDialog();
	void ShowUnchangeableMessageDialog(ESBCharacterEquipsOrSkillsOrCostumesChangeableRetValues InUnchangeableRetValue, E_BattleSetInfoType InBattleSetInfoType);
	void SetWeaponModelRotateActive(bool InIsRotateActive);
	void OnClassChangeFailure(int32 InRetCode);
	void ReturnFromClassChangeProgressContinueConfirmDialog();
	void ContinueWeaponChangeProcFromMoveEquipmentToBagRequest();
	void ContinueWeaponChangeProcFromUseUnusedEquipConfirmDialog();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature();
	void OnSpawnWeapon(int32 InInventoryIndex, ESBWeaponEquipType InWeaponEquipType);
	void OnClientRestart();
	void OnClassChangeNotify(int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
	void BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestWeaponModelLoad__DelegateSignature(const struct FInventoryItemData& InWeaponInventoryItemData);
	void WeaponModelLoadCompleted();
	void OnWeaponEquipDelegate(int32 RetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void WeaponChangeProc(const class FString& InWeaponUniqueId);
	void OnImagineArtsChanged(const ESkillActionPosition ChangedSAP, const class FString& UniqueId);
	void ContinueBattleImagineChangeProcFromMoveEquipmentToBagRequest();
	void OnBattleImagineEquipChangeCompleted(int32 RetCode, const ESBCharaEquipType Param_EquipType, const class FString& UniqueId, const bool IsEquip, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void ContinueBattleImagineChangeProcFromUseUnusedEquipConfirmDialog();
	void BattleImagineChangeProc(const class FString& InBattleImagineUniqueId, bool InDisarm);
	void BattleImagineModelLoadCompleted();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_SelectedEquipmentStatusDesc_K2Node_ComponentBoundEvent_0_OnRequestBattleImagineModelLoad__DelegateSignature(const struct FInventoryItemData& InBattleImagineInventoryItemData);
	void OnCharaEquipPassiveImagineChanged();
	void ContinueInnerImagineChangeProcFromMoveEquipmentToBagRequest();
	void OnInnerImagineEquipChangeCompleted(int32 RetCode, const ESBCharaEquipType Param_EquipType, const class FString& UniqueId, const bool IsEquip, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void ContinueInnerImagineChangeProcFromUseUnusedEquipConfirmDialog();
	void InnerImagineChangeProc(const class FString& InInnerImagineUniqueId, bool InDisarm);
	void OnSaveItemStorage(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void MoveEquipmentToBagRequestProc(EItemType InEquipmentItemType);
	void ShowWindow(E_BattleSetInfoType InInfoType, ESBClassType InEquipClassType, ESBCharaEquipType InEquipType, bool InIsStorageMode);
	void HideWindow();
	void UpdateEquippedEquipmentDesc(const class FString& InEquipmentUniqueId, bool InForceUpdate);
	void UpdateSelectedEquipmentDesc(const class FString& InEquipmentUniqueId, bool InForceUpdate);
	void SwitchStatusType(int32 InStatusTypeId);
	void CreateEquipmentModelCaptureStudio(E_BattleSetInfoType InInfoType);
	void SetEquipmentModelCaptureStudioEnable(bool InIsEnabled);
	void SetIsCostumePartsLoading(bool InIsCostumePartsLoading);
	void GetIsCostumePartsLoading(bool* OutIsCostumePartsLoading);
	void UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate);
	void RequestPlayerCharacterCalcEquipStatusDiff(const class FString& InCurrEquipmentUniqueId, const class FString& InNewEquipmentUniqueId);
	void GetBattleSetInfoType(E_BattleSetInfoType* OutBattleSetInfoType);
	void IsCharaDetailedStatusOpen(bool* OutIsOpen);
	void SetClassChangedJingleVisibility(bool InIsVisible);
	void SetClassChangeLoadingVisibility(bool InIsVisible);
	void IsHideWindowAnimePlaying(bool* OutIsPlaying);
	void CheckIfBattleImagineIdDuplicate(int32 InImagineId, ESBCharaEquipType InBattleImagineEquipType, bool* OutDuplicate);
	void CheckIfBattleImagineWithPossessionSkillIsMultiple(int32 InImagineId, ESBCharaEquipType InBattleImagineEquipType, bool* OutIsEquipped);
	void SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop);
	void InitEquippedEquipmentStatusDesc(const class FString& InEquippedEquipmentUniqueId, E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType);
	void InitSelectedEquipmentStatusDesc(E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType, bool InIsStorageMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipmentStatusDescAndListForBattleSet_C">();
	}
	static class UEquipmentStatusDescAndListForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipmentStatusDescAndListForBattleSet_C>();
	}
};
static_assert(alignof(UEquipmentStatusDescAndListForBattleSet_C) == 0x000008, "Wrong alignment on UEquipmentStatusDescAndListForBattleSet_C");
static_assert(sizeof(UEquipmentStatusDescAndListForBattleSet_C) == 0x000818, "Wrong size on UEquipmentStatusDescAndListForBattleSet_C");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, UberGraphFrame) == 0x0002B0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, AnimOut) == 0x0002B8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, AnimIn) == 0x0002C0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, BackToBattleSetTopLevelBtn) == 0x0002C8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::BackToBattleSetTopLevelBtn' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, Bg01) == 0x0002D0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::Bg01' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, BtnFullScreenForCharaDetailedStatus) == 0x0002D8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::BtnFullScreenForCharaDetailedStatus' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, BtnScreen) == 0x0002E0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, CaptureStudioCanvas) == 0x0002E8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::CaptureStudioCanvas' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, CharaDetailedStatus) == 0x0002F0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::CharaDetailedStatus' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, ClassChangedJingle) == 0x0002F8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::ClassChangedJingle' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, ClassChangeLoading) == 0x000300, "Member 'UEquipmentStatusDescAndListForBattleSet_C::ClassChangeLoading' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, CmnImageThrobber) == 0x000308, "Member 'UEquipmentStatusDescAndListForBattleSet_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, EquipmentList) == 0x000310, "Member 'UEquipmentStatusDescAndListForBattleSet_C::EquipmentList' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, EquippedEquipmentStatusDesc) == 0x000318, "Member 'UEquipmentStatusDescAndListForBattleSet_C::EquippedEquipmentStatusDesc' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, EquippedEquipmentStatusDescHeadingIcon) == 0x000320, "Member 'UEquipmentStatusDescAndListForBattleSet_C::EquippedEquipmentStatusDescHeadingIcon' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, EquippedEquipmentStatusDescHeadingTxt) == 0x000328, "Member 'UEquipmentStatusDescAndListForBattleSet_C::EquippedEquipmentStatusDescHeadingTxt' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, LeftSideParametersForSecondLevel) == 0x000330, "Member 'UEquipmentStatusDescAndListForBattleSet_C::LeftSideParametersForSecondLevel' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, Line) == 0x000338, "Member 'UEquipmentStatusDescAndListForBattleSet_C::Line' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, SelectedEquipmentStatusDesc) == 0x000340, "Member 'UEquipmentStatusDescAndListForBattleSet_C::SelectedEquipmentStatusDesc' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, StatusTypeSwitchBtn) == 0x000348, "Member 'UEquipmentStatusDescAndListForBattleSet_C::StatusTypeSwitchBtn' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, UIBlocker) == 0x000350, "Member 'UEquipmentStatusDescAndListForBattleSet_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, UIBlockerFrontRow) == 0x000358, "Member 'UEquipmentStatusDescAndListForBattleSet_C::UIBlockerFrontRow' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, BattleSetInfoType) == 0x000360, "Member 'UEquipmentStatusDescAndListForBattleSet_C::BattleSetInfoType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, EquipType) == 0x000361, "Member 'UEquipmentStatusDescAndListForBattleSet_C::EquipType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, EquipClassType) == 0x000362, "Member 'UEquipmentStatusDescAndListForBattleSet_C::EquipClassType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, SortType) == 0x000363, "Member 'UEquipmentStatusDescAndListForBattleSet_C::SortType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsStorageMode) == 0x000364, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsStorageMode' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, SelectedStatusTypeId) == 0x000368, "Member 'UEquipmentStatusDescAndListForBattleSet_C::SelectedStatusTypeId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, SelectedItemBtn) == 0x000370, "Member 'UEquipmentStatusDescAndListForBattleSet_C::SelectedItemBtn' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnHideWindowFinished) == 0x000378, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnHideWindowFinished' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, CurrEquippedEquipmentUniqueId) == 0x000388, "Member 'UEquipmentStatusDescAndListForBattleSet_C::CurrEquippedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, CurrSelectedEquipmentUniqueId) == 0x000398, "Member 'UEquipmentStatusDescAndListForBattleSet_C::CurrSelectedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsEquipmentChangeRequested) == 0x0003A8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsEquipmentChangeRequested' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, SortFilter) == 0x0003B0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::SortFilter' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsFilterSelectorOpen) == 0x0003C0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsFilterSelectorOpen' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsWeaponModelLoadedDelegateBinded) == 0x0003C1, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsWeaponModelLoadedDelegateBinded' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, WeaponItemId) == 0x0003C4, "Member 'UEquipmentStatusDescAndListForBattleSet_C::WeaponItemId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, WeaponStickerWeaponItemId) == 0x0003C8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::WeaponStickerWeaponItemId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsWeaponStickerAttached) == 0x0003CC, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsWeaponStickerAttached' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsEquipmentListItemSelected) == 0x0003CD, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsEquipmentListItemSelected' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, WeaponModelLoadTimeoutHandle) == 0x0003D0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::WeaponModelLoadTimeoutHandle' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempSBPlayerController) == 0x0003D8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempSBPlayerController' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempSBPlayerCharacter) == 0x0003E0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempOwnItemListContainer) == 0x0003E8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempOwnItemListContainer' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempInventoryItemData) == 0x0003F0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempInventoryItemData' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsSelectedWeaponModelLoadRegistered) == 0x000450, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsSelectedWeaponModelLoadRegistered' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, EquipOrSkillChangeableRetValue) == 0x000451, "Member 'UEquipmentStatusDescAndListForBattleSet_C::EquipOrSkillChangeableRetValue' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, CaptureStudioForWeaponModel) == 0x000458, "Member 'UEquipmentStatusDescAndListForBattleSet_C::CaptureStudioForWeaponModel' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, CaptureStudioForBattleImagineModel) == 0x000460, "Member 'UEquipmentStatusDescAndListForBattleSet_C::CaptureStudioForBattleImagineModel' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnEquipmentListItemSelected) == 0x000468, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnEquipmentListItemSelected' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnEquipmentChangeBtnPressed) == 0x000478, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnEquipmentChangeBtnPressed' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempUnchangableMessageDialogTargetText) == 0x000488, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempUnchangableMessageDialogTargetText' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsCostumePartsLoading) == 0x0004A0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsCostumePartsLoading' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempRetCode) == 0x0004A4, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempRetCode' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bTempIsEquipmentExpired) == 0x0004A8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bTempIsEquipmentExpired' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempExpiredWeaponStickerUsingWeaponUniqueIds) == 0x0004B0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempExpiredWeaponStickerUsingWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempExpiredEquipmentData) == 0x0004C0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bTempIsEquippedWeaponUsingWeaponStickerExpired) == 0x0005F0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bTempIsEquippedWeaponUsingWeaponStickerExpired' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempCurrEquipWeaponId) == 0x0005F4, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempCurrEquipWeaponId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnPlayerCharacterEquippedCostumeChanged) == 0x0005F8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnPlayerCharacterEquippedCostumeChanged' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnLeftSideParameterStatusUpdated) == 0x000608, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnLeftSideParameterStatusUpdated' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempNormalWeaponId) == 0x000618, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempNormalWeaponId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempWeaponStickerWeaponId) == 0x00061C, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempWeaponStickerWeaponId' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bTempIsWeaponStickerAttached) == 0x000620, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bTempIsWeaponStickerAttached' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bTempIsWeaponDecayed) == 0x000621, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bTempIsWeaponDecayed' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsCalcStatusDiffRequestForWeaponDecayed) == 0x000622, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsCalcStatusDiffRequestForWeaponDecayed' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempSelectedWeaponClassType) == 0x000623, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempSelectedWeaponClassType' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsClassChangeRequested) == 0x000624, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsClassChangeRequested' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnResetLeftSideParameterDiffMark) == 0x000628, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnResetLeftSideParameterDiffMark' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnEquippedWeaponSpawned) == 0x000638, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnEquippedWeaponSpawned' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnClassChanged) == 0x000648, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnClassChanged' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnEquippedWeaponChangeRequestCompleted) == 0x000658, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnEquippedWeaponChangeRequestCompleted' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnEquippedBattleImagineChangeRequestCompleted) == 0x000668, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnEquippedBattleImagineChangeRequestCompleted' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnEquippedInnerImagineChangeRequestCompleted) == 0x000678, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnEquippedInnerImagineChangeRequestCompleted' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bTempSetSelectedEquipmentDescEmpty) == 0x000688, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bTempSetSelectedEquipmentDescEmpty' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bTempIsEquipmentDisarm) == 0x000689, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bTempIsEquipmentDisarm' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnSetLeftSideParameterExpGaugeUpdateStop) == 0x000690, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnSetLeftSideParameterExpGaugeUpdateStop' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsEquippedWeaponSpawned) == 0x0006A0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsEquippedWeaponSpawned' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, TempOwnItemInfo) == 0x0006A8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::TempOwnItemInfo' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsEquipmentInStorage) == 0x0007C0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsEquipmentInStorage' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnCharaDetailedStatus) == 0x0007C8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnCharaDetailedStatus' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, OnTermEnd) == 0x0007D8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::OnTermEnd' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, SpawnedWeaponCnt) == 0x0007E8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::SpawnedWeaponCnt' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsPlayerStatusRecalculated) == 0x0007EC, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsPlayerStatusRecalculated' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, WaitTimerEventCntMax) == 0x0007F0, "Member 'UEquipmentStatusDescAndListForBattleSet_C::WaitTimerEventCntMax' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, WaitTimerEventCnt) == 0x0007F4, "Member 'UEquipmentStatusDescAndListForBattleSet_C::WaitTimerEventCnt' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, SavedPlayerActorLocation) == 0x0007F8, "Member 'UEquipmentStatusDescAndListForBattleSet_C::SavedPlayerActorLocation' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, SavedPlayerActorRotation) == 0x000804, "Member 'UEquipmentStatusDescAndListForBattleSet_C::SavedPlayerActorRotation' has a wrong offset!");
static_assert(offsetof(UEquipmentStatusDescAndListForBattleSet_C, bIsProcListItemSelected) == 0x000810, "Member 'UEquipmentStatusDescAndListForBattleSet_C::bIsProcListItemSelected' has a wrong offset!");

}


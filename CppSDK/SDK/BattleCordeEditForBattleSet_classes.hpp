#pragma once

 

// Package: BattleCordeEditForBattleSet

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BattleCordeEditForBattleSet.BattleCordeEditForBattleSet_C
// 0x05E8 (0x0898 - 0x02B0)
class UBattleCordeEditForBattleSet_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnAlertIcon_C*                        AlertIcon01;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           BackToBattleSetTopLevelBtn;                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    BattleCordeGuideTxt;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleSetTopInfoBase_C*                BattleCordeInfo;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBattleCordeList_C*                     BattleCordeList;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             BattleCordeNameTxt;                                // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BeltBg;                                            // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg01;                                              // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG03;                                              // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BlackFilter;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnFullScreenForCharaDetailedStatus;               // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreen;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyCharaMenu_DetailedStatus_C*          CharaDetailedStatus;                               // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassChangedJingle_C*                  ClassChangedJingle;                                // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                ClassChangeLoading;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnOperationRotate_C*                  CmnOperationRotate;                                // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            EquipCordeBtn;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBoxForUnableToEquipSelectedCordeAlertMessage;     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULeftSideParametersForBattleSetSecondLevel_C* LeftSideParametersForSecondLevel;                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PlayerAvatarImage;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            RegisterCordeBtn;                                  // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StorageEquip;                                      // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerFrontRow;                                 // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bIsStorageMode;                                    // 0x0390(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  EquipClassType;                                    // 0x0391(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5837[0x6];                                     // 0x0392(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnHideWindowFinished;                              // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 CurrEquippedEquipmentUniqueId;                     // 0x03A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 CurrSelectedEquipmentUniqueId;                     // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsBattleCordeProcessInProgress;                   // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5838[0x3];                                     // 0x03C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponItemId;                                      // 0x03CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WeaponStickerWeaponItemId;                         // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsWeaponStickerAttached;                          // 0x03D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5839[0x3];                                     // 0x03D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    TempSBPlayerController;                            // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     TempInventoryItemData;                             // 0x03E0(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                   TempUnchangableMessageDialogTargetText;            // 0x0440(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsCostumePartsLoading;                            // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_583A[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempRetCode;                                       // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTempIsEquipmentExpired;                           // 0x0460(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_583B[0x7];                                     // 0x0461(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         TempExpiredWeaponStickerUsingWeaponUniqueIds;      // 0x0468(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSBExpiredEquipmentData                TempExpiredEquipmentData;                          // 0x0478(0x0130)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bTempIsEquippedWeaponUsingWeaponStickerExpired;    // 0x05A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_583C[0x3];                                     // 0x05A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TempCurrEquipWeaponId;                             // 0x05AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnPlayerCharacterEquippedCostumeChanged;           // 0x05B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnLeftSideParameterStatusUpdated;                  // 0x05C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         TempNormalWeaponId;                                // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempWeaponStickerWeaponId;                         // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bTempIsWeaponStickerAttached;                      // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bTempIsWeaponDecayed;                              // 0x05D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCalcStatusDiffRequestForWeaponDecayed;          // 0x05DA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsClassChangeRequested;                           // 0x05DB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_583D[0x4];                                     // 0x05DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnResetLeftSideParameterDiffMark;                  // 0x05E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquippedWeaponSpawned;                           // 0x05F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnClassChanged;                                    // 0x0600(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSetPlayerAvatarRotateActive;                     // 0x0610(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UNameSettingDialog_C*                   NameSettingDialog;                                 // 0x0620(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 NewRegisterCordeName;                              // 0x0628(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bIsCordeNameInputForRename;                        // 0x0638(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCordeDelete;                                    // 0x0639(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_583E[0x6];                                     // 0x063A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UBattleCordeListItem_C*                 CurrSelectedCordeListItem;                         // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipList               CurrSelectedCordeData;                             // 0x0648(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBPlayerPresetEquipItem>       CurrSelectedCordeEquipItems;                       // 0x0660(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBOwnItemListContainer*                EquipmentBag;                                      // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CharacterStorage;                                  // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSBPlayerPresetEquipItem               TempWeaponPresetEquipItem;                         // 0x0680(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FOwnItemInfo                           TempWeaponOwnItemInfo;                             // 0x06A8(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         CurrCordeId;                                       // 0x07C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsEquipCordeOccuringClassChange;                  // 0x07C4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCordeEquipmentsAreAllValid;                     // 0x07C5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_583F[0x2];                                     // 0x07C6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSetLeftSideParameterExpGaugeUpdateStop;          // 0x07C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnBattleCordeDataReloaded;                         // 0x07D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsCordeDataReloadRequested;                       // 0x07E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCordeEquipmentInStorage;                        // 0x07E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5840[0x6];                                     // 0x07EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBStorageItemData>             CordeEquipmentStorageItemDatas;                    // 0x07F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnBattleCordeDataReloadRequestedAtInit;            // 0x0800(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FSBPlayerPresetEquipItem>       TempCordeEquipItems;                               // 0x0810(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnBattleCordeSaveRequestCompleted;                 // 0x0820(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnTermEnd;                                         // 0x0830(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ASBPlayerCharacter*                     TempSBPlayerCharacter;                             // 0x0840(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBPlayerPresetEquipItem>       TempCordeItemList;                                 // 0x0848(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         TempEmptyCordeSlotId;                              // 0x0858(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SpawnedWeaponCnt;                                  // 0x085C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TempCordeId;                                       // 0x0860(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SavedPlayerActorLocation;                          // 0x0864(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               SavedPlayerActorRotation;                          // 0x0870(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsCurrEquippedCodeId;                             // 0x087C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5841[0x3];                                     // 0x087D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrCordeName;                                     // 0x0880(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         OverwriteCordeId;                                  // 0x0890(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnHideWindowFinished__DelegateSignature();
	void OnPlayerCharacterEquippedCostumeChanged__DelegateSignature();
	void OnLeftSideParameterStatusUpdated__DelegateSignature(E_BattleSetInfoType InBattleSetInfoType, bool InIncludesClassInfoUpdate);
	void OnResetLeftSideParameterDiffMark__DelegateSignature();
	void OnEquippedWeaponSpawned__DelegateSignature();
	void OnClassChanged__DelegateSignature();
	void OnSetPlayerAvatarRotateActive__DelegateSignature(bool InRotateActive);
	void OnSetLeftSideParameterExpGaugeUpdateStop__DelegateSignature(bool InIsUpdateStop);
	void OnBattleCordeDataReloaded__DelegateSignature();
	void OnBattleCordeDataReloadRequestedAtInit__DelegateSignature();
	void OnTermEnd__DelegateSignature();
	void OnBattleCordeSaveRequestCompleted__DelegateSignature();
	void ExecuteUbergraph_BattleCordeEditForBattleSet(int32 EntryPoint);
	void OnClassChangeFailure(int32 InRetCode);
	void OnCharaEquipPassiveImagineChange();
	void ReturnFromClassChangeProgressContinueConfirmDialog();
	void BndEvt__BattleCordeEditForBattleSet_EquipCordeBtn_K2Node_ComponentBoundEvent_13_EventOnClicked__DelegateSignature();
	void BndEvt__BattleCordeEditForBattleSet_RegisterCordeBtn_K2Node_ComponentBoundEvent_12_EventOnClicked__DelegateSignature();
	void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_11_OnCordeDataLoaded__DelegateSignature(bool InIsDataLoadSuccessed);
	void BndEvt__EquipmentStatusDescAndListForBattleSet_ClassChangedJingle_K2Node_ComponentBoundEvent_1_OnPlayedAnim__DelegateSignature();
	void ClassChangeResultProc(const TArray<class FString>& InExpiredWeaponStickerUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData, bool InIsClassChange, bool InIsDisarm);
	void ExpiredItemNoticeSystemMessageTimerEnd();
	void OnClientRestart();
	void OnClassChangeNotify(int32 InRetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InDirtyExpiredEquipmentData);
	void OnSwapPresetEquipmentList(const int32 RetCode, const int32 DstListIndex);
	void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_10_OnCordeReplaceBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSrcCordeListItem, class UBattleCordeListItem_C* InDstCordListItem);
	void OnSpawnWeapon(const int32 InventoryIndex, ESBWeaponEquipType InWeaponEquipType);
	void OnSaveCharaBattlePresetEquipment(int32 RetCode);
	void BattleCordeEquipProc();
	void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_9_OnCordeRenameBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem);
	void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_8_OnCordeDeleteBtnPressed__DelegateSignature(class UBattleCordeListItem_C* InSelectedCordeListItem);
	void BndEvt__BattleCordeEditForBattleSet_BattleCordeList_K2Node_ComponentBoundEvent_5_OnCordeListItemPresssed__DelegateSignature(class UBattleCordeListItem_C* InListItem);
	void CloseCharaDetailedStatus();
	void BndEvt__BattleCordeEditForBattleSet_CharaDetailedStatus_K2Node_ComponentBoundEvent_4_CloseEvent__DelegateSignature();
	void OnSavePlayerPresetEquipment(int32 RetCode);
	void UIInputBlockFrontRow(bool InIsBlock);
	void OnPress_Cancel();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_BtnFullScreenForDetailedStatus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_LeftSideParametersForSecondLevel_K2Node_ComponentBoundEvent_6_OnDetailStatusBtnClicked__DelegateSignature();
	void BndEvt__EquipmentStatusDescAndListForBattleSet_BackToBattleSetTopLevelBtn_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
	void OnCalcEquipStatusDiff();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void BndEvt__BtnScreen_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void UiInputBlock(bool InIsBlock);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void ShowEquippedTacticalSkillIsActiveMessageDialog();
	void ShowQuestProgressUnableByClassChangeConfirmDialog();
	void ContinueCordeEquipmentProc();
	void ShowEquipmentBagIsFullMessageDialog();
	void EquipCordeNotAllValidConfirmEnd(const EYesNoDialogResult Result);
	void MoveCordeEquipmentFromStorageComfirmEnd(const EYesNoDialogResult Result);
	void ShowMoveCordeEquipmentFromStorageConfirmDialog();
	void ShowEquipCordeNotAllValidConfirmDialog();
	void ShowCordeEquipSuccessedMessageDialog();
	void EquipCordeConfirmEnd(const EYesNoDialogResult Result);
	void ShowEquipCordeConfirmMessageDialog(const class FString& InCordeName);
	void ShowCordeDeleteSuccessedMessageDialog();
	void EndCordeDeleteConfirmDialog(EYesNoDialogResult InYesNoResult);
	void ShowCordeDeleteConfirmDialog();
	void ShowRenameCordeNameSuccessedMessageDialog(const class FString& InRenamedCordeName);
	void ShowNewCordeRegisterSuccessedMessageDialog(const class FString& InNewCordeName, bool bInIsCordeOverwrite);
	void ShowCordeSlotIsFullMessageDialog();
	void EndUsingUnusedEquipConfirmDialog(EYesNoDialogResult InYesNoResult);
	void ShowUsingUnusedEquipConfirmDialog();
	void ShowCordeUnequippableMessageDialog();
	void OnNameInputDialogButtonFullScreenClicked();
	void OnNameInputDilaogClosed();
	void OnNameInputDialogNameDecided(const class FString& PlayerName);
	void SetupNameInputDialogEventBind(bool InUnbindEvent);
	void StartCordeNameInputProc(bool InIsForRename);
	void OnSaveItemStorage(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void ShowWindow(ESBClassType InEquipClassType, bool InIsStorageMode);
	void HideWindow();
	void IsHideWindowAnimePlaying(bool* OutIsPlaying);
	void SetIsCostumePartsLoading(bool InIsCostumePartsLoading);
	void GetIsCostumePartsLoading(bool* OutIsCostumePartsLoading);
	void UpdateLeftSideParameterStatus(bool InIncludesClassInfoUpdate);
	void RequestPlayerCharacterCalcEquipStatusDiff(int32 InCordeId);
	void IsCharaDetailedStatusOpen(bool* OutIsOpen);
	void CreateCordeList(bool InResetSelectedCordeListItem);
	void GetCordeListEmptySlotId(int32* OutListIndex);
	void RegisterCorde(int32 InCordeListId, const class FString& InCordeName);
	void SetEquipCordeBtnEnable(bool InIsEnabled);
	void SetIsSelectedCordeEquippable(bool InIsEquippable);
	void CheckCordeWeaponIsValid(int32 InCordeId, bool InIsStorageMode, bool* OutIsValid);
	void CheckCordeEquipmentsAreAllValid(int32 InCordeId, bool* OutIsAllEquipmentValid, bool* OutIsEquipmentInStorage);
	void CheckCordeEquipmentsAreUnused(int32 InCordeId, bool InIsStorageMode, bool* OutIsUnused);
	void ShowCharaCapture2D();
	void HideCharaCapture2D();
	void SetClassChangedJingleVisibility(bool InIsVisible);
	void SetClassChangeLoadingVisibility(bool InIsVisible);
	void SetLeftSideParameterExpGaugeUpdateStop(bool InIsUpdateStop);
	void RequestCordeDataReload(bool* OutRequestSuccessed);
	void UpdateBattleCordeGuide(bool InIsStorageMode);
	void GetCordeEquipmentStorageItemDatas(int32 InCordeId, TArray<struct FSBStorageItemData>* OutEquipmentStorageItemDatas);
	void CheckIfTacticalSkillIsActive(bool* OutIsActive);
	void ExtractCordeEquipItemsInEquipmentBag(TArray<struct FSBPlayerPresetEquipItem>& InCordeEquipItemList, TArray<struct FSBPlayerPresetEquipItem>* OutExtractedCordeEquipItems);
	void Update_Register_Corde_Btn_Text(bool bInIsOverwriteMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BattleCordeEditForBattleSet_C">();
	}
	static class UBattleCordeEditForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBattleCordeEditForBattleSet_C>();
	}
};
static_assert(alignof(UBattleCordeEditForBattleSet_C) == 0x000008, "Wrong alignment on UBattleCordeEditForBattleSet_C");
static_assert(sizeof(UBattleCordeEditForBattleSet_C) == 0x000898, "Wrong size on UBattleCordeEditForBattleSet_C");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, UberGraphFrame) == 0x0002B0, "Member 'UBattleCordeEditForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, AnimOut) == 0x0002B8, "Member 'UBattleCordeEditForBattleSet_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, AnimIn) == 0x0002C0, "Member 'UBattleCordeEditForBattleSet_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, AlertIcon01) == 0x0002C8, "Member 'UBattleCordeEditForBattleSet_C::AlertIcon01' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BackToBattleSetTopLevelBtn) == 0x0002D0, "Member 'UBattleCordeEditForBattleSet_C::BackToBattleSetTopLevelBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BattleCordeGuideTxt) == 0x0002D8, "Member 'UBattleCordeEditForBattleSet_C::BattleCordeGuideTxt' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BattleCordeInfo) == 0x0002E0, "Member 'UBattleCordeEditForBattleSet_C::BattleCordeInfo' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BattleCordeList) == 0x0002E8, "Member 'UBattleCordeEditForBattleSet_C::BattleCordeList' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BattleCordeNameTxt) == 0x0002F0, "Member 'UBattleCordeEditForBattleSet_C::BattleCordeNameTxt' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BeltBg) == 0x0002F8, "Member 'UBattleCordeEditForBattleSet_C::BeltBg' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, Bg01) == 0x000300, "Member 'UBattleCordeEditForBattleSet_C::Bg01' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BG03) == 0x000308, "Member 'UBattleCordeEditForBattleSet_C::BG03' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BlackFilter) == 0x000310, "Member 'UBattleCordeEditForBattleSet_C::BlackFilter' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BtnFullScreenForCharaDetailedStatus) == 0x000318, "Member 'UBattleCordeEditForBattleSet_C::BtnFullScreenForCharaDetailedStatus' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, BtnScreen) == 0x000320, "Member 'UBattleCordeEditForBattleSet_C::BtnScreen' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CharaDetailedStatus) == 0x000328, "Member 'UBattleCordeEditForBattleSet_C::CharaDetailedStatus' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, ClassChangedJingle) == 0x000330, "Member 'UBattleCordeEditForBattleSet_C::ClassChangedJingle' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, ClassChangeLoading) == 0x000338, "Member 'UBattleCordeEditForBattleSet_C::ClassChangeLoading' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CmnImageThrobber) == 0x000340, "Member 'UBattleCordeEditForBattleSet_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CmnOperationRotate) == 0x000348, "Member 'UBattleCordeEditForBattleSet_C::CmnOperationRotate' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, EquipCordeBtn) == 0x000350, "Member 'UBattleCordeEditForBattleSet_C::EquipCordeBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, HBoxForUnableToEquipSelectedCordeAlertMessage) == 0x000358, "Member 'UBattleCordeEditForBattleSet_C::HBoxForUnableToEquipSelectedCordeAlertMessage' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, LeftSideParametersForSecondLevel) == 0x000360, "Member 'UBattleCordeEditForBattleSet_C::LeftSideParametersForSecondLevel' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, PlayerAvatarImage) == 0x000368, "Member 'UBattleCordeEditForBattleSet_C::PlayerAvatarImage' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, RegisterCordeBtn) == 0x000370, "Member 'UBattleCordeEditForBattleSet_C::RegisterCordeBtn' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, StorageEquip) == 0x000378, "Member 'UBattleCordeEditForBattleSet_C::StorageEquip' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, UIBlocker) == 0x000380, "Member 'UBattleCordeEditForBattleSet_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, UIBlockerFrontRow) == 0x000388, "Member 'UBattleCordeEditForBattleSet_C::UIBlockerFrontRow' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsStorageMode) == 0x000390, "Member 'UBattleCordeEditForBattleSet_C::bIsStorageMode' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, EquipClassType) == 0x000391, "Member 'UBattleCordeEditForBattleSet_C::EquipClassType' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnHideWindowFinished) == 0x000398, "Member 'UBattleCordeEditForBattleSet_C::OnHideWindowFinished' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CurrEquippedEquipmentUniqueId) == 0x0003A8, "Member 'UBattleCordeEditForBattleSet_C::CurrEquippedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CurrSelectedEquipmentUniqueId) == 0x0003B8, "Member 'UBattleCordeEditForBattleSet_C::CurrSelectedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsBattleCordeProcessInProgress) == 0x0003C8, "Member 'UBattleCordeEditForBattleSet_C::bIsBattleCordeProcessInProgress' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, WeaponItemId) == 0x0003CC, "Member 'UBattleCordeEditForBattleSet_C::WeaponItemId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, WeaponStickerWeaponItemId) == 0x0003D0, "Member 'UBattleCordeEditForBattleSet_C::WeaponStickerWeaponItemId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsWeaponStickerAttached) == 0x0003D4, "Member 'UBattleCordeEditForBattleSet_C::bIsWeaponStickerAttached' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempSBPlayerController) == 0x0003D8, "Member 'UBattleCordeEditForBattleSet_C::TempSBPlayerController' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempInventoryItemData) == 0x0003E0, "Member 'UBattleCordeEditForBattleSet_C::TempInventoryItemData' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempUnchangableMessageDialogTargetText) == 0x000440, "Member 'UBattleCordeEditForBattleSet_C::TempUnchangableMessageDialogTargetText' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsCostumePartsLoading) == 0x000458, "Member 'UBattleCordeEditForBattleSet_C::bIsCostumePartsLoading' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempRetCode) == 0x00045C, "Member 'UBattleCordeEditForBattleSet_C::TempRetCode' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bTempIsEquipmentExpired) == 0x000460, "Member 'UBattleCordeEditForBattleSet_C::bTempIsEquipmentExpired' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempExpiredWeaponStickerUsingWeaponUniqueIds) == 0x000468, "Member 'UBattleCordeEditForBattleSet_C::TempExpiredWeaponStickerUsingWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempExpiredEquipmentData) == 0x000478, "Member 'UBattleCordeEditForBattleSet_C::TempExpiredEquipmentData' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bTempIsEquippedWeaponUsingWeaponStickerExpired) == 0x0005A8, "Member 'UBattleCordeEditForBattleSet_C::bTempIsEquippedWeaponUsingWeaponStickerExpired' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempCurrEquipWeaponId) == 0x0005AC, "Member 'UBattleCordeEditForBattleSet_C::TempCurrEquipWeaponId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnPlayerCharacterEquippedCostumeChanged) == 0x0005B0, "Member 'UBattleCordeEditForBattleSet_C::OnPlayerCharacterEquippedCostumeChanged' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnLeftSideParameterStatusUpdated) == 0x0005C0, "Member 'UBattleCordeEditForBattleSet_C::OnLeftSideParameterStatusUpdated' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempNormalWeaponId) == 0x0005D0, "Member 'UBattleCordeEditForBattleSet_C::TempNormalWeaponId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempWeaponStickerWeaponId) == 0x0005D4, "Member 'UBattleCordeEditForBattleSet_C::TempWeaponStickerWeaponId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bTempIsWeaponStickerAttached) == 0x0005D8, "Member 'UBattleCordeEditForBattleSet_C::bTempIsWeaponStickerAttached' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bTempIsWeaponDecayed) == 0x0005D9, "Member 'UBattleCordeEditForBattleSet_C::bTempIsWeaponDecayed' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsCalcStatusDiffRequestForWeaponDecayed) == 0x0005DA, "Member 'UBattleCordeEditForBattleSet_C::bIsCalcStatusDiffRequestForWeaponDecayed' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsClassChangeRequested) == 0x0005DB, "Member 'UBattleCordeEditForBattleSet_C::bIsClassChangeRequested' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnResetLeftSideParameterDiffMark) == 0x0005E0, "Member 'UBattleCordeEditForBattleSet_C::OnResetLeftSideParameterDiffMark' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnEquippedWeaponSpawned) == 0x0005F0, "Member 'UBattleCordeEditForBattleSet_C::OnEquippedWeaponSpawned' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnClassChanged) == 0x000600, "Member 'UBattleCordeEditForBattleSet_C::OnClassChanged' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnSetPlayerAvatarRotateActive) == 0x000610, "Member 'UBattleCordeEditForBattleSet_C::OnSetPlayerAvatarRotateActive' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, NameSettingDialog) == 0x000620, "Member 'UBattleCordeEditForBattleSet_C::NameSettingDialog' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, NewRegisterCordeName) == 0x000628, "Member 'UBattleCordeEditForBattleSet_C::NewRegisterCordeName' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsCordeNameInputForRename) == 0x000638, "Member 'UBattleCordeEditForBattleSet_C::bIsCordeNameInputForRename' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsCordeDelete) == 0x000639, "Member 'UBattleCordeEditForBattleSet_C::bIsCordeDelete' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CurrSelectedCordeListItem) == 0x000640, "Member 'UBattleCordeEditForBattleSet_C::CurrSelectedCordeListItem' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CurrSelectedCordeData) == 0x000648, "Member 'UBattleCordeEditForBattleSet_C::CurrSelectedCordeData' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CurrSelectedCordeEquipItems) == 0x000660, "Member 'UBattleCordeEditForBattleSet_C::CurrSelectedCordeEquipItems' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, EquipmentBag) == 0x000670, "Member 'UBattleCordeEditForBattleSet_C::EquipmentBag' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CharacterStorage) == 0x000678, "Member 'UBattleCordeEditForBattleSet_C::CharacterStorage' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempWeaponPresetEquipItem) == 0x000680, "Member 'UBattleCordeEditForBattleSet_C::TempWeaponPresetEquipItem' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempWeaponOwnItemInfo) == 0x0006A8, "Member 'UBattleCordeEditForBattleSet_C::TempWeaponOwnItemInfo' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CurrCordeId) == 0x0007C0, "Member 'UBattleCordeEditForBattleSet_C::CurrCordeId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsEquipCordeOccuringClassChange) == 0x0007C4, "Member 'UBattleCordeEditForBattleSet_C::bIsEquipCordeOccuringClassChange' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsCordeEquipmentsAreAllValid) == 0x0007C5, "Member 'UBattleCordeEditForBattleSet_C::bIsCordeEquipmentsAreAllValid' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnSetLeftSideParameterExpGaugeUpdateStop) == 0x0007C8, "Member 'UBattleCordeEditForBattleSet_C::OnSetLeftSideParameterExpGaugeUpdateStop' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnBattleCordeDataReloaded) == 0x0007D8, "Member 'UBattleCordeEditForBattleSet_C::OnBattleCordeDataReloaded' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsCordeDataReloadRequested) == 0x0007E8, "Member 'UBattleCordeEditForBattleSet_C::bIsCordeDataReloadRequested' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsCordeEquipmentInStorage) == 0x0007E9, "Member 'UBattleCordeEditForBattleSet_C::bIsCordeEquipmentInStorage' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CordeEquipmentStorageItemDatas) == 0x0007F0, "Member 'UBattleCordeEditForBattleSet_C::CordeEquipmentStorageItemDatas' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnBattleCordeDataReloadRequestedAtInit) == 0x000800, "Member 'UBattleCordeEditForBattleSet_C::OnBattleCordeDataReloadRequestedAtInit' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempCordeEquipItems) == 0x000810, "Member 'UBattleCordeEditForBattleSet_C::TempCordeEquipItems' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnBattleCordeSaveRequestCompleted) == 0x000820, "Member 'UBattleCordeEditForBattleSet_C::OnBattleCordeSaveRequestCompleted' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OnTermEnd) == 0x000830, "Member 'UBattleCordeEditForBattleSet_C::OnTermEnd' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempSBPlayerCharacter) == 0x000840, "Member 'UBattleCordeEditForBattleSet_C::TempSBPlayerCharacter' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempCordeItemList) == 0x000848, "Member 'UBattleCordeEditForBattleSet_C::TempCordeItemList' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempEmptyCordeSlotId) == 0x000858, "Member 'UBattleCordeEditForBattleSet_C::TempEmptyCordeSlotId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, SpawnedWeaponCnt) == 0x00085C, "Member 'UBattleCordeEditForBattleSet_C::SpawnedWeaponCnt' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, TempCordeId) == 0x000860, "Member 'UBattleCordeEditForBattleSet_C::TempCordeId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, SavedPlayerActorLocation) == 0x000864, "Member 'UBattleCordeEditForBattleSet_C::SavedPlayerActorLocation' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, SavedPlayerActorRotation) == 0x000870, "Member 'UBattleCordeEditForBattleSet_C::SavedPlayerActorRotation' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, bIsCurrEquippedCodeId) == 0x00087C, "Member 'UBattleCordeEditForBattleSet_C::bIsCurrEquippedCodeId' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, CurrCordeName) == 0x000880, "Member 'UBattleCordeEditForBattleSet_C::CurrCordeName' has a wrong offset!");
static_assert(offsetof(UBattleCordeEditForBattleSet_C, OverwriteCordeId) == 0x000890, "Member 'UBattleCordeEditForBattleSet_C::OverwriteCordeId' has a wrong offset!");

}


#pragma once

 

// Package: Inventory

#include "Basic.hpp"

#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "UseItemWindowType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "CharaParts_structs.hpp"
#include "InventoryType_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "InventoryMessageType_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Inventory.Inventory_C
// 0x0530 (0x07D8 - 0x02A8)
class UInventory_C final : public USBCommandMenuChildBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut2;                                          // 0x02B0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CaptureStudioCanvas;                               // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      CategoryTabButtonList;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_Line_C*                    CommandMenu_Line;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_SubMenuLine_C*             CommandMenu_SubMenuLine;                           // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenu_SubMenuLine_C*             CommandMenu_SubMenuLine2;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuBg_C*                       CommandMenuBg;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   DateTimeTextForWeaponSticker;                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDescriptionWindow_C*                   Descriptions;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBaseInventory_C*                       ItemInventory;                                     // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SubMenuGrp;                                        // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SubMenuGrp2;                                       // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      TabButtons;                                        // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      TabButtons2;                                       // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Tarm;                                    // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_Under;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlockerForSystemMessage;                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0358(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FOwnItemInfo>                   OwnItemList;                                       // 0x0368(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FInventoryItemData>             InventoryItemList;                                 // 0x0378(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsItemCommandOpen;                                 // 0x0388(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56EA[0x7];                                     // 0x0389(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UItemIconBtn_C*                         SelectedInventoryItem;                             // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 SelectedItemUniqueId;                              // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsShortcutRegUIOpen;                               // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56EB[0x3];                                     // 0x03A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FirstChosenShortcutIcon;                           // 0x03AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DumpNum;                                           // 0x03B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56EC[0x4];                                     // 0x03B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNumberInputDialog_C*                   NumberInputDialog;                                 // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           YesNoDialog;                                       // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharaEquipItemInfo                    NewCosItem;                                        // 0x03C8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBCharaEquipType                             SelectedCosType;                                   // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                CurrInventoryType;                                 // 0x03F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56ED[0x6];                                     // 0x03F2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBLockItemData                        LockItemData;                                      // 0x03F8(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsItemLock;                                       // 0x0418(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56EE[0x7];                                     // 0x0419(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWeaponBrakeAnim_C*                     WeaponBrakeAnim;                                   // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_Dialog_C*                           BrokeDialog;                                       // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Add_break_base;                                    // 0x0430(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Add_break_append;                                  // 0x0434(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FOwnItemInfo                           AppendItemData;                                    // 0x0438(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         BrokeErrorCode;                                    // 0x0550(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56EF[0x3];                                     // 0x0551(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ErrorTextId;                                       // 0x0554(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAfterTermReques;                                 // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F0[0x3];                                     // 0x0559(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HelpId;                                            // 0x055C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EInventoryType                                ClickItemInventoryType;                            // 0x0560(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F1[0x7];                                     // 0x0561(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           UpdateModelBlocker;                                // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioWeapon_N;                             // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioCostume_N;                            // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioImagine_N;                            // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CaptureStudio_C*                   CaptureStudioMountImagine_N;                       // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUseItemWindowType                            LastUseWindowType;                                 // 0x0590(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F2[0x3];                                     // 0x0591(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SwapValu;                                          // 0x0594(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                         BookmarkTypeList;                                  // 0x0598(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInventoryItemData                     LastUseItemData;                                   // 0x05A8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FInventoryItemData                     SelectedItemData;                                  // 0x0608(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	EItemType                                     TempItemType;                                      // 0x0668(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F3[0x7];                                     // 0x0669(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAppearanceWeaponStickerWeaponSelectMenuWindow_C* WeaponStickerWeaponSelectMenuWindow;               // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAppearanceWeaponStickerRemoveWindow_C* WeaponStickerRemoveWindow;                         // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAppearanceWeaponSticker               UseWeaponStickerInfo;                              // 0x0680(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FString                                 WeaponStickerRemoveItemUniqueId;                   // 0x0690(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          IsWeaponStickerUsedWeapon;                         // 0x06A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerUsedToEquippedWeapon;               // 0x06A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerRemovedFromEquippedWeapon;          // 0x06A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F4[0x1];                                     // 0x06A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         WeaponStickerWeaponId;                             // 0x06A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     TempItemDataForWeaponStickerInUseWeapon;           // 0x06A8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          TempIsExpiredStickerWeapons;                       // 0x0708(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F5[0x7];                                     // 0x0709(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 TempStickerUsedWeaponUniqueId;                     // 0x0710(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         TempExpiredStickerWeaponUniqueIds;                 // 0x0720(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 TempWeaponStickerName;                             // 0x0730(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FString                                 TempWeaponName;                                    // 0x0740(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UCommandMenuCommonSubButtonList_C*      SelectedTab;                                       // 0x0750(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           AssetLoadTimeoutHandle;                            // 0x0758(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWeaponStickerInUse;                              // 0x0760(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerIndefinite;                         // 0x0761(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsWeaponStickerDiscard;                            // 0x0762(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_56F6[0x5];                                     // 0x0763(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      WeaponItemData;                                    // 0x0768(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                 WeaponStickerName;                                 // 0x07B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	int32                                         AttachedWeaponStickerId;                           // 0x07C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56F7[0x4];                                     // 0x07CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               DetailViewWidget;                                  // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_Inventory(int32 EntryPoint);
	void CustomEvent_6();
	void CustomEvent_3(class UObject* Sender, class UObject* Param);
	void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
	void UnbindWeaponStickerEventDelegates();
	void UpdateBookmarkStatusButton();
	void BookmarkUpdateRequest();
	void ShowErrorMessageDialog(EInventoryMessageType InMessageType, int32 RetCode);
	void Destruct();
	void OnShortcutIconSelected(EShortcutIconType InShortcutKey);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();
	void SetLevelAfter(int32 Value, class UWBP_ExpIncrease_C* CallerDialg);
	void CustomEvent_2(ENumberInputDialogResult InResult, int32 InNumber);
	void UseLeve();
	void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
	void DetailView();
	void CustomEvent_4(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam);
	void ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog(const class FString& InStickerAttachedWeaponUniqueId);
	void ShowExpiredWeaponStickerSystemMessage(const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const class FString& InEquippedWeaponUniqueId, bool InActivateWeaponModelRotate);
	void EndSystemMessage();
	void BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
	void OnRemoveWeaponStickerDelegateEvent(const int32 InRetCode, const class FString& InStickerRemovedWeaponUniqueId, const bool InIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas);
	void OnUseWeaponStickerDelegateEvent(const int32 InRetCode, const class FString& InStickerUsedWeaponUniqueId, const bool InIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const TArray<struct FSBWeaponItemData>& InExpiredStickerWeaponItemDatas);
	void OnWeaponStickerRemoveWindowHideEnd();
	void OnWeaponStickerRemoveDecideEvent(bool InIsStickerDiscardSelected);
	void BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
	void OnWeaponStickerWeaponSelectWindowHideEndEvent(bool InIsHideWindowCalledByDecide);
	void OnUseWeaponStickerDecideEvent(const class FString& InSelectedWeaponUniqueItemId);
	void UseWeaponSticker(const struct FAppearanceWeaponSticker& InWeaponStickerInfo, const class FString& InWeaponStickerUniqueId);
	void UseItemBox();
	void CustomEvent_5(const int32 InRetCode, const struct FSBStorageItemBoxResultData& InItemBoxResultData);
	void UseExp(int32 Amount);
	void NowBookmarkUpdate(EInventoryType Selection);
	void IQStartCheck(bool Start);
	void CustomEvent_1(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox);
	void UseItemAfter();
	void UseItem_Internal(int32 Amount);
	void ItemUseAfter(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void UseItem();
	void UpdateSubMenuGrp(EInventoryType InputPin);
	void OnSaveItemLockCompleteDelegate(const bool Result, const TArray<struct FSBLockItemData>& Param_LockItemData, const int32 InRetCode);
	void BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 ButtonId);
	void SetSubMenuVisiblity(class UCanvasPanel* SubMenu, class UCommandMenuCommonSubButtonList_C* Tab, bool StorageFlag, bool InventoryFlag);
	void UpdateCommandMenuBgHelp(EInventoryType InInventoryType);
	void BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 ButtonId);
	void DestroyNewInventory();
	void OnSaveCharaCostumeEquipDelegate_____(int32 RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void OnPressItemButton(class UItemIconBtn_C* SelectButton, const struct FInventoryData& InventoryData);
	void ItemLock();
	void OnClick_MenuButton(int32 ButtonId);
	void OnEndRegister();
	void OnUploded_Costume_Data(bool Result);
	void UploadEquipment();
	void OnSaveEquipInfo(int32 RetCode);
	void Item_Equipment_Costume();
	void Equipment();
	void WeaponEquipmented(int32 RetCode);
	void OnWeaponEquipDelegate______0(int32 RetCode, const bool bInIsExpiredStickerWeapons, const TArray<class FString>& InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
	void UiInputBlock(bool Param_IsVisible);
	void Item_Equipment_Weapon();
	void OnClickedButton_Type(EDescripionButtonType Button);
	void Init_BaseInventories();
	void OnClickedItemButton_Event(const struct FInventoryData& InventoryData);
	void Timeout();
	void AssetLoadComplete();
	void UpdateModelStudio(const struct FInventoryItemData& InInventoryItemData);
	void CustomEvent_7(const EYesNoDialogResult Result);
	void OnHideDeligate(ENumberInputDialogResult InResult, int32 InNumber);
	void TrashItem();
	void CustomEvent_0(const EYesNoDialogResult Result);
	void QueryTrashItem();
	void OnSaveItemStorageDelegate_Event_0(const int32 InRetCode, const TArray<struct FOwnItemInfo>& InDirtyItems);
	void ResetMouseCursorTypeToDefaultRequest();
	void OnSubMenuUpdate(int32 MainPage, int32 SubPage);
	void OnRMShopClosed();
	void OnParentTerm();
	void SortItemList(TArray<struct FInventoryItemData>& ItemList);
	void FindInventoryItem(int32 ItemIndex, TArray<struct FInventoryItemData>& Param_InventoryItemList, struct FInventoryItemData* InventoryItem);
	void RefreshOnRegister();
	void GetEquipItemCharaCreateInfoFromEquipItemInfo(const struct FCharaEquipItemInfo& InEquipItemInfo, ESBCharaEquipType InEquipType, bool* IsValid, struct FCharaEquipItemCharaCreateInfo* OutEquipItemCharaCreateInfo);
	void GetCostumePartsLocationFromCostumeEquipType(ESBCharaEquipType InCostumeType, bool* IsValid, ECharaPartsLocation* OutPartsLocation);
	void Enable_Capture_Studios(bool Enable);
	void Create_Capture_Studio(EInventoryType InventoryType);
	void Initialize_Open_Menu_Type();
	void Update_New_Button();
	ESubMenuTermRequestReply TermRequest(const ESubMenuTermReason InReason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Inventory_C">();
	}
	static class UInventory_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventory_C>();
	}
};
static_assert(alignof(UInventory_C) == 0x000008, "Wrong alignment on UInventory_C");
static_assert(sizeof(UInventory_C) == 0x0007D8, "Wrong size on UInventory_C");
static_assert(offsetof(UInventory_C, UberGraphFrame) == 0x0002A8, "Member 'UInventory_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInventory_C, AnimOut2) == 0x0002B0, "Member 'UInventory_C::AnimOut2' has a wrong offset!");
static_assert(offsetof(UInventory_C, AnimOut) == 0x0002B8, "Member 'UInventory_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UInventory_C, CanvasPanel) == 0x0002C0, "Member 'UInventory_C::CanvasPanel' has a wrong offset!");
static_assert(offsetof(UInventory_C, CaptureStudioCanvas) == 0x0002C8, "Member 'UInventory_C::CaptureStudioCanvas' has a wrong offset!");
static_assert(offsetof(UInventory_C, CategoryTabButtonList) == 0x0002D0, "Member 'UInventory_C::CategoryTabButtonList' has a wrong offset!");
static_assert(offsetof(UInventory_C, CmnImageThrobber) == 0x0002D8, "Member 'UInventory_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UInventory_C, CommandMenu_Line) == 0x0002E0, "Member 'UInventory_C::CommandMenu_Line' has a wrong offset!");
static_assert(offsetof(UInventory_C, CommandMenu_SubMenuLine) == 0x0002E8, "Member 'UInventory_C::CommandMenu_SubMenuLine' has a wrong offset!");
static_assert(offsetof(UInventory_C, CommandMenu_SubMenuLine2) == 0x0002F0, "Member 'UInventory_C::CommandMenu_SubMenuLine2' has a wrong offset!");
static_assert(offsetof(UInventory_C, CommandMenuBg) == 0x0002F8, "Member 'UInventory_C::CommandMenuBg' has a wrong offset!");
static_assert(offsetof(UInventory_C, DateTimeTextForWeaponSticker) == 0x000300, "Member 'UInventory_C::DateTimeTextForWeaponSticker' has a wrong offset!");
static_assert(offsetof(UInventory_C, Descriptions) == 0x000308, "Member 'UInventory_C::Descriptions' has a wrong offset!");
static_assert(offsetof(UInventory_C, ItemInventory) == 0x000310, "Member 'UInventory_C::ItemInventory' has a wrong offset!");
static_assert(offsetof(UInventory_C, SubMenuGrp) == 0x000318, "Member 'UInventory_C::SubMenuGrp' has a wrong offset!");
static_assert(offsetof(UInventory_C, SubMenuGrp2) == 0x000320, "Member 'UInventory_C::SubMenuGrp2' has a wrong offset!");
static_assert(offsetof(UInventory_C, TabButtons) == 0x000328, "Member 'UInventory_C::TabButtons' has a wrong offset!");
static_assert(offsetof(UInventory_C, TabButtons2) == 0x000330, "Member 'UInventory_C::TabButtons2' has a wrong offset!");
static_assert(offsetof(UInventory_C, UIBlocker) == 0x000338, "Member 'UInventory_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UInventory_C, UIBlocker_Tarm) == 0x000340, "Member 'UInventory_C::UIBlocker_Tarm' has a wrong offset!");
static_assert(offsetof(UInventory_C, UIBlocker_Under) == 0x000348, "Member 'UInventory_C::UIBlocker_Under' has a wrong offset!");
static_assert(offsetof(UInventory_C, UIBlockerForSystemMessage) == 0x000350, "Member 'UInventory_C::UIBlockerForSystemMessage' has a wrong offset!");
static_assert(offsetof(UInventory_C, OnClose) == 0x000358, "Member 'UInventory_C::OnClose' has a wrong offset!");
static_assert(offsetof(UInventory_C, OwnItemList) == 0x000368, "Member 'UInventory_C::OwnItemList' has a wrong offset!");
static_assert(offsetof(UInventory_C, InventoryItemList) == 0x000378, "Member 'UInventory_C::InventoryItemList' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsItemCommandOpen) == 0x000388, "Member 'UInventory_C::IsItemCommandOpen' has a wrong offset!");
static_assert(offsetof(UInventory_C, SelectedInventoryItem) == 0x000390, "Member 'UInventory_C::SelectedInventoryItem' has a wrong offset!");
static_assert(offsetof(UInventory_C, SelectedItemUniqueId) == 0x000398, "Member 'UInventory_C::SelectedItemUniqueId' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsShortcutRegUIOpen) == 0x0003A8, "Member 'UInventory_C::IsShortcutRegUIOpen' has a wrong offset!");
static_assert(offsetof(UInventory_C, FirstChosenShortcutIcon) == 0x0003AC, "Member 'UInventory_C::FirstChosenShortcutIcon' has a wrong offset!");
static_assert(offsetof(UInventory_C, DumpNum) == 0x0003B0, "Member 'UInventory_C::DumpNum' has a wrong offset!");
static_assert(offsetof(UInventory_C, NumberInputDialog) == 0x0003B8, "Member 'UInventory_C::NumberInputDialog' has a wrong offset!");
static_assert(offsetof(UInventory_C, YesNoDialog) == 0x0003C0, "Member 'UInventory_C::YesNoDialog' has a wrong offset!");
static_assert(offsetof(UInventory_C, NewCosItem) == 0x0003C8, "Member 'UInventory_C::NewCosItem' has a wrong offset!");
static_assert(offsetof(UInventory_C, SelectedCosType) == 0x0003F0, "Member 'UInventory_C::SelectedCosType' has a wrong offset!");
static_assert(offsetof(UInventory_C, CurrInventoryType) == 0x0003F1, "Member 'UInventory_C::CurrInventoryType' has a wrong offset!");
static_assert(offsetof(UInventory_C, LockItemData) == 0x0003F8, "Member 'UInventory_C::LockItemData' has a wrong offset!");
static_assert(offsetof(UInventory_C, bIsItemLock) == 0x000418, "Member 'UInventory_C::bIsItemLock' has a wrong offset!");
static_assert(offsetof(UInventory_C, WeaponBrakeAnim) == 0x000420, "Member 'UInventory_C::WeaponBrakeAnim' has a wrong offset!");
static_assert(offsetof(UInventory_C, BrokeDialog) == 0x000428, "Member 'UInventory_C::BrokeDialog' has a wrong offset!");
static_assert(offsetof(UInventory_C, Add_break_base) == 0x000430, "Member 'UInventory_C::Add_break_base' has a wrong offset!");
static_assert(offsetof(UInventory_C, Add_break_append) == 0x000434, "Member 'UInventory_C::Add_break_append' has a wrong offset!");
static_assert(offsetof(UInventory_C, AppendItemData) == 0x000438, "Member 'UInventory_C::AppendItemData' has a wrong offset!");
static_assert(offsetof(UInventory_C, BrokeErrorCode) == 0x000550, "Member 'UInventory_C::BrokeErrorCode' has a wrong offset!");
static_assert(offsetof(UInventory_C, ErrorTextId) == 0x000554, "Member 'UInventory_C::ErrorTextId' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsAfterTermReques) == 0x000558, "Member 'UInventory_C::IsAfterTermReques' has a wrong offset!");
static_assert(offsetof(UInventory_C, HelpId) == 0x00055C, "Member 'UInventory_C::HelpId' has a wrong offset!");
static_assert(offsetof(UInventory_C, ClickItemInventoryType) == 0x000560, "Member 'UInventory_C::ClickItemInventoryType' has a wrong offset!");
static_assert(offsetof(UInventory_C, UpdateModelBlocker) == 0x000568, "Member 'UInventory_C::UpdateModelBlocker' has a wrong offset!");
static_assert(offsetof(UInventory_C, CaptureStudioWeapon_N) == 0x000570, "Member 'UInventory_C::CaptureStudioWeapon_N' has a wrong offset!");
static_assert(offsetof(UInventory_C, CaptureStudioCostume_N) == 0x000578, "Member 'UInventory_C::CaptureStudioCostume_N' has a wrong offset!");
static_assert(offsetof(UInventory_C, CaptureStudioImagine_N) == 0x000580, "Member 'UInventory_C::CaptureStudioImagine_N' has a wrong offset!");
static_assert(offsetof(UInventory_C, CaptureStudioMountImagine_N) == 0x000588, "Member 'UInventory_C::CaptureStudioMountImagine_N' has a wrong offset!");
static_assert(offsetof(UInventory_C, LastUseWindowType) == 0x000590, "Member 'UInventory_C::LastUseWindowType' has a wrong offset!");
static_assert(offsetof(UInventory_C, SwapValu) == 0x000594, "Member 'UInventory_C::SwapValu' has a wrong offset!");
static_assert(offsetof(UInventory_C, BookmarkTypeList) == 0x000598, "Member 'UInventory_C::BookmarkTypeList' has a wrong offset!");
static_assert(offsetof(UInventory_C, LastUseItemData) == 0x0005A8, "Member 'UInventory_C::LastUseItemData' has a wrong offset!");
static_assert(offsetof(UInventory_C, SelectedItemData) == 0x000608, "Member 'UInventory_C::SelectedItemData' has a wrong offset!");
static_assert(offsetof(UInventory_C, TempItemType) == 0x000668, "Member 'UInventory_C::TempItemType' has a wrong offset!");
static_assert(offsetof(UInventory_C, WeaponStickerWeaponSelectMenuWindow) == 0x000670, "Member 'UInventory_C::WeaponStickerWeaponSelectMenuWindow' has a wrong offset!");
static_assert(offsetof(UInventory_C, WeaponStickerRemoveWindow) == 0x000678, "Member 'UInventory_C::WeaponStickerRemoveWindow' has a wrong offset!");
static_assert(offsetof(UInventory_C, UseWeaponStickerInfo) == 0x000680, "Member 'UInventory_C::UseWeaponStickerInfo' has a wrong offset!");
static_assert(offsetof(UInventory_C, WeaponStickerRemoveItemUniqueId) == 0x000690, "Member 'UInventory_C::WeaponStickerRemoveItemUniqueId' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsWeaponStickerUsedWeapon) == 0x0006A0, "Member 'UInventory_C::IsWeaponStickerUsedWeapon' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsWeaponStickerUsedToEquippedWeapon) == 0x0006A1, "Member 'UInventory_C::IsWeaponStickerUsedToEquippedWeapon' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsWeaponStickerRemovedFromEquippedWeapon) == 0x0006A2, "Member 'UInventory_C::IsWeaponStickerRemovedFromEquippedWeapon' has a wrong offset!");
static_assert(offsetof(UInventory_C, WeaponStickerWeaponId) == 0x0006A4, "Member 'UInventory_C::WeaponStickerWeaponId' has a wrong offset!");
static_assert(offsetof(UInventory_C, TempItemDataForWeaponStickerInUseWeapon) == 0x0006A8, "Member 'UInventory_C::TempItemDataForWeaponStickerInUseWeapon' has a wrong offset!");
static_assert(offsetof(UInventory_C, TempIsExpiredStickerWeapons) == 0x000708, "Member 'UInventory_C::TempIsExpiredStickerWeapons' has a wrong offset!");
static_assert(offsetof(UInventory_C, TempStickerUsedWeaponUniqueId) == 0x000710, "Member 'UInventory_C::TempStickerUsedWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(UInventory_C, TempExpiredStickerWeaponUniqueIds) == 0x000720, "Member 'UInventory_C::TempExpiredStickerWeaponUniqueIds' has a wrong offset!");
static_assert(offsetof(UInventory_C, TempWeaponStickerName) == 0x000730, "Member 'UInventory_C::TempWeaponStickerName' has a wrong offset!");
static_assert(offsetof(UInventory_C, TempWeaponName) == 0x000740, "Member 'UInventory_C::TempWeaponName' has a wrong offset!");
static_assert(offsetof(UInventory_C, SelectedTab) == 0x000750, "Member 'UInventory_C::SelectedTab' has a wrong offset!");
static_assert(offsetof(UInventory_C, AssetLoadTimeoutHandle) == 0x000758, "Member 'UInventory_C::AssetLoadTimeoutHandle' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsWeaponStickerInUse) == 0x000760, "Member 'UInventory_C::IsWeaponStickerInUse' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsWeaponStickerIndefinite) == 0x000761, "Member 'UInventory_C::IsWeaponStickerIndefinite' has a wrong offset!");
static_assert(offsetof(UInventory_C, IsWeaponStickerDiscard) == 0x000762, "Member 'UInventory_C::IsWeaponStickerDiscard' has a wrong offset!");
static_assert(offsetof(UInventory_C, WeaponItemData) == 0x000768, "Member 'UInventory_C::WeaponItemData' has a wrong offset!");
static_assert(offsetof(UInventory_C, WeaponStickerName) == 0x0007B8, "Member 'UInventory_C::WeaponStickerName' has a wrong offset!");
static_assert(offsetof(UInventory_C, AttachedWeaponStickerId) == 0x0007C8, "Member 'UInventory_C::AttachedWeaponStickerId' has a wrong offset!");
static_assert(offsetof(UInventory_C, DetailViewWidget) == 0x0007D0, "Member 'UInventory_C::DetailViewWidget' has a wrong offset!");

}


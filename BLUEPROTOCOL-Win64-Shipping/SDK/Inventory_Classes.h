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
	 * WidgetBlueprintGeneratedClass Inventory.Inventory_C
	 * Size -> 0x0598 (FullSize[0x0840] - InheritedSize[0x02A8])
	 */
	class UInventory_C : public USBCommandMenuChildBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimOut2;                                                // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimOut;                                                 // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CaptureStudioCanvas;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   CategoryTabButtonList;                                   // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCmnImageThrobber_C*                                 CmnImageThrobber;                                        // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_Line_C*                                 CommandMenu_Line;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_SubMenuLine_C*                          CommandMenu_SubMenuLine;                                 // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenu_SubMenuLine_C*                          CommandMenu_SubMenuLine2;                                // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuBg_C*                                    CommandMenuBg;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USBDateTimeTextBlock*                                DateTimeTextForWeaponSticker;                            // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UDescriptionWindow_C*                                Descriptions;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBaseInventory_C*                                    ItemInventory;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SubMenuGrp;                                              // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        SubMenuGrp2;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   TabButtons;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   TabButtons2;                                             // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker;                                               // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Tarm;                                          // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlocker_Under;                                         // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UUIBlocker_C*                                        UIBlockerForSystemMessage;                               // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnClose;                                                 // 0x0358(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<struct FOwnItemInfo>                                OwnItemList;                                             // 0x0368(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FInventoryItemData>                          InventoryItemList;                                       // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       IsItemCommandOpen;                                       // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_GPM3[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItemIconBtn_C*                                      SelectedInventoryItem;                                   // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              SelectedItemUniqueId;                                    // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsShortcutRegUIOpen;                                     // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZBVR[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FirstChosenShortcutIcon;                                 // 0x03AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DumpNum;                                                 // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CTS2[0x4];                                   // 0x03B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNumberInputDialog_C*                                NumberInputDialog;                                       // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Dialog_C*                                        YesNoDialog;                                             // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCharaEquipItemInfo                                 NewCosItem;                                              // 0x03C8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance
		ESBCharaEquipType                                          SelectedCosType;                                         // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInventoryType                                             CurrInventoryType;                                       // 0x03F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NALO[0x6];                                   // 0x03F2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBLockItemData                                     LockItemData;                                            // 0x03F8(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       bIsItemLock;                                             // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FTH0[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWeaponBrakeAnim_C*                                  WeaponBrakeAnim;                                         // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBP_Dialog_C*                                        BrokeDialog;                                             // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    add_break_base;                                          // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    add_break_append;                                        // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FOwnItemInfo                                        AppendItemData;                                          // 0x0438(0x0150) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              BrokeErrorCode;                                          // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G2SN[0x3];                                   // 0x0589(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ErrorTextId;                                             // 0x058C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsAfterTermReques;                                       // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ADVA[0x3];                                   // 0x0591(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HelpId;                                                  // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EInventoryType                                             ClickItemInventoryType;                                  // 0x0598(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GOGF[0x7];                                   // 0x0599(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUIBlocker_C*                                        UpdateModelBlocker;                                      // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioWeapon_N;                                   // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioCostume_N;                                  // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioImagine_N;                                  // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioMountImagine_N;                             // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUMG_CaptureStudio_C*                                CaptureStudioOrnament_N;                                 // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUseItemWindowType                                         LastUseWindowType;                                       // 0x05D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VH8H[0x3];                                   // 0x05D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SwapValu;                                                // 0x05D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      BookmarkTypeList;                                        // 0x05D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FInventoryItemData                                  LastUseItemData;                                         // 0x05E8(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FInventoryItemData                                  SelectedItemData;                                        // 0x0648(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		EItemType                                                  TempItemType;                                            // 0x06A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U9CG[0x7];                                   // 0x06A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAppearanceWeaponStickerWeaponSelectMenuWindow_C*    WeaponStickerWeaponSelectMenuWindow;                     // 0x06B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAppearanceWeaponStickerRemoveWindow_C*              WeaponStickerRemoveWindow;                               // 0x06B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAppearanceWeaponSticker                            UseWeaponStickerInfo;                                    // 0x06C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FString                                              WeaponStickerRemoveItemUniqueId;                         // 0x06D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       IsWeaponStickerUsedWeapon;                               // 0x06E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWeaponStickerUsedToEquippedWeapon;                     // 0x06E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWeaponStickerRemovedFromEquippedWeapon;                // 0x06E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FJLR[0x1];                                   // 0x06E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    WeaponStickerWeaponId;                                   // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInventoryItemData                                  TempItemDataForWeaponStickerInUseWeapon;                 // 0x06E8(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       TempIsExpiredStickerWeapons;                             // 0x0748(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IR6C[0x7];                                   // 0x0749(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TempStickerUsedWeaponUniqueId;                           // 0x0750(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<class FString>                                      TempExpiredStickerWeaponUniqueIds;                       // 0x0760(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              TempWeaponStickerName;                                   // 0x0770(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              TempWeaponName;                                          // 0x0780(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UCommandMenuCommonSubButtonList_C*                   SelectedTab;                                             // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        AssetLoadTimeoutHandle;                                  // 0x0798(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       IsWeaponStickerInUse;                                    // 0x07A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWeaponStickerIndefinite;                               // 0x07A1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       IsWeaponStickerDiscard;                                  // 0x07A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S4Z3[0x5];                                   // 0x07A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSBWeaponItemData                                   WeaponItemData;                                          // 0x07A8(0x0078) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              WeaponStickerName;                                       // 0x0820(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    AttachedWeaponStickerId;                                 // 0x0830(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B77Q[0x4];                                   // 0x0834(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUMG_ProductDetailMenu_C*                            DetailViewWidget;                                        // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		ESubMenuTermRequestReply TermRequest(ESubMenuTermReason InReason);
		void UpdateNewButton();
		void InitializeOpenMenuType();
		void CreateCaptureStudio(EInventoryType InventoryType);
		void EnableCaptureStudios(bool enable);
		void GetCostumePartsLocationFromCostumeEquipType(ESBCharaEquipType InCostumeType, bool* IsValid, ECharaPartsLocation* OutPartsLocation);
		void GetEquipItemCharaCreateInfoFromEquipItemInfo(const struct FCharaEquipItemInfo& InEquipItemInfo, ESBCharaEquipType InEquipType, bool* IsValid, struct FCharaEquipItemCharaCreateInfo* OutEquipItemCharaCreateInfo);
		void RefreshOnRegister();
		void FindInventoryItem(int32_t ItemIndex, TArray<struct FInventoryItemData>* InventoryItemList, struct FInventoryItemData* InventoryItem);
		void SortItemList(TArray<struct FInventoryItemData>* ItemList);
		void OnParentTerm();
		void OnRMShopClosed();
		void OnSubMenuUpdate(int32_t MainPage, int32_t SubPage);
		void ResetMouseCursorTypeToDefaultRequest();
		void OnSaveItemStorageDelegate_Event_1(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void QueryTrashItem();
		void CustomEvent_1(EYesNoDialogResult Result);
		void TrashItem();
		void OnHideDeligate(ENumberInputDialogResult InResult, int32_t InNumber);
		void CustomEvent_8(EYesNoDialogResult Result);
		void UpdateModelStudio(const struct FInventoryItemData& InInventoryItemData);
		void AssetLoadComplete();
		void Timeout();
		void OnClickedItemButton_Event(const struct FInventoryData& InventoryData);
		void InitBaseInventories();
		void OnClickedButton_Type(EDescripionButtonType Button);
		void ItemEquipmentWeapon();
		void UiInputBlock(bool IsVisible);
		void OnWeaponEquipDelegate__1(int32_t RetCode, bool bInIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void WeaponEquipmented(int32_t RetCode);
		void Equipment();
		void ItemEquipmentCostume();
		void OnSaveEquipInfo(int32_t RetCode);
		void UploadEquipment();
		void OnUplodedCostumeData(bool Result);
		void OnEndRegister();
		void OnClick_MenuButton(int32_t ButtonId);
		void ItemLock();
		void OnPressItemButton(class UItemIconBtn_C* SelectButton, const struct FInventoryData& InventoryData);
		void OnSaveCharaCostumeEquipDelegate_(int32_t RetCode, const struct FSBExpiredEquipmentData& InExpiredEquipmentData);
		void DestroyNewInventory();
		void BndEvt__TabButtons_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32_t ButtonId);
		void UpdateCommandMenuBgHelp(EInventoryType InInventoryType);
		void SetSubMenuVisiblity(class UCanvasPanel* SubMenu, class UCommandMenuCommonSubButtonList_C* Tab, bool StorageFlag, bool InventoryFlag);
		void BndEvt__TabButtons2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32_t ButtonId);
		void OnSaveItemLockCompleteDelegate(bool Result, TArray<struct FSBLockItemData> LockItemData, int32_t InRetCode);
		void UpdateSubMenuGrp(EInventoryType InputPin);
		void UseItem();
		void ItemUseAfter(int32_t InRetCode, TArray<struct FOwnItemInfo> InDirtyItems);
		void UseItem_Internal(int32_t Amount);
		void UseItemAfter();
		void CustomEvent_2(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox);
		void IQStartCheck(bool Start);
		void NowBookmarkUpdate(EInventoryType Selection);
		void UseExp(int32_t Amount);
		void CustomEvent_6(int32_t InRetCode, const struct FSBStorageItemBoxResultData& InItemBoxResultData);
		void UseItemBox();
		void UseWeaponSticker(const struct FAppearanceWeaponSticker& InWeaponStickerInfo, const class FString& InWeaponStickerUniqueId);
		void OnUseWeaponStickerDecideEvent(const class FString& InSelectedWeaponUniqueItemId);
		void OnWeaponStickerWeaponSelectWindowHideEndEvent(bool InIsHideWindowCalledByDecide);
		void BndEvt__Descriptions_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
		void OnWeaponStickerRemoveDecideEvent(bool InIsStickerDiscardSelected);
		void OnWeaponStickerRemoveWindowHideEnd();
		void OnUseWeaponStickerDelegateEvent(int32_t InRetCode, const class FString& InStickerUsedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData> InExpiredStickerWeaponItemDatas);
		void OnRemoveWeaponStickerDelegateEvent(int32_t InRetCode, const class FString& InStickerRemovedWeaponUniqueId, bool InIsExpiredStickerWeapons, TArray<class FString> InExpiredStickerWeaponUniqueIds, TArray<struct FSBWeaponItemData> InExpiredStickerWeaponItemDatas);
		void BndEvt__Descriptions_K2Node_ComponentBoundEvent_3_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
		void EndSystemMessage();
		void ShowExpiredWeaponStickerSystemMessage(TArray<class FString> InExpiredStickerWeaponUniqueIds, const class FString& InEquippedWeaponUniqueId, bool InActivateWeaponModelRotate);
		void ShowUsedWeaponStickerAndAttachedWeaponNoticeDialog(const class FString& InStickerAttachedWeaponUniqueId);
		void CustomEvent_5(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam);
		void DetailView();
		void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
		void UseLeve();
		void CustomEvent_3(ENumberInputDialogResult InResult, int32_t InNumber);
		void SetLevelAfter(int32_t Value, class UWBP_ExpIncrease_C* CallerDialg);
		void Construct();
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnShortcutIconSelected(EShortcutIconType InShortcutKey);
		void Destruct();
		void ShowErrorMessageDialog(EInventoryMessageType InMessageType, int32_t RetCode);
		void BookmarkUpdateRequest();
		void UpdateBookmarkStatusButton();
		void UnbindWeaponStickerEventDelegates();
		void OnSameMenuBookmarkAccessNew(const class FString& InBookMarkType);
		void CustomEvent_4(class UObject* Sender, class UObject* Param);
		void CustomEvent_7();
		void ExecuteUbergraph_Inventory(int32_t EntryPoint);
		void OnClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

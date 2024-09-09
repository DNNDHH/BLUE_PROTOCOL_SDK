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
	 * BlueprintGeneratedClass InventoryFunctionLibrary.InventoryFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UInventoryFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void GetSortType(int32_t SortIndex, const class FName& RowName, int32_t FilterIndex, class UObject* __WorldContext, ESBItemSortType* ArrayElement);
		void GetSortIndex(ESBItemSortType Sort, const class FName& RowName, int32_t FilterIndex, class UObject* __WorldContext, int32_t* Index);
		class FString GetSortText(ESBItemSortType Sort, class UObject* __WorldContext);
		void SetSortComboBox(class UComboBoxString* Target, const class FName& RowName, int32_t FilterIndex, ESBItemSortType Select, class UObject* __WorldContext);
		void GetFilterBtnType(const class FName& RowName, int32_t Index, class UObject* __WorldContext, EItemFilterType* Filter);
		void SetFilterBtnType(class UFilterButton_C* Target, const class FName& RowName, int32_t Index, class UObject* __WorldContext);
		void SetFilterComboBox(class UComboBoxString* Target, const class FName& RowName, class UObject* __WorldContext);
		class FString GetFilterText(EItemFilterType Filter, class UObject* __WorldContext);
		void CalcPageIndex(bool Use, int32_t IconIndex, int32_t CurrentPage, int32_t PageIconMax, class UObject* __WorldContext, bool* Active, int32_t* Index);
		void IsWeaponStickerAttachd(const class FString& UniqueId, int32_t StorageNumber, class UObject* __WorldContext, bool* IsAttach);
		void SetWeaponStatusTextOneItem(const struct FOwnItemInfo& OwnItemInfo, class UTextBlock* Ap, class UTextBlock* Cp, class UTextBlock* STR, class UTextBlock* VIT, class UTextBlock* DEX, class UTextBlock* INT, class UTextBlock* MND, class UTextBlock* Attribute, class UTextBlock* Special, class UObject* __WorldContext);
		void GetInventorySortModeNum(EItemFilterType Filter, bool IsItemMode, bool NotBStack, class UObject* __WorldContext, int32_t* ModeNum);
		void GetInventorySortIndex(int32_t Index, ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index1);
		void GetInventorySortName(int32_t Index, class UObject* __WorldContext, TArray<class FName>* SortList1);
		void GetInventorySortIndex_Weapon(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index);
		void GetInventorySortIndex_Equipment(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index);
		void GetInventorySortIndex_NoLv(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index);
		void GetInventorySortIndex_Plug(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index);
		void GetInventorySortIndex_Item(ESBItemSortType SortType, class UObject* __WorldContext, int32_t* Index);
		void GetInventorySortName_Weapon(class UObject* __WorldContext, TArray<class FName>* SortList1);
		void GetInventorySortName_Equipment(class UObject* __WorldContext, TArray<class FName>* SortList1);
		void GetInventorySortName_NoLv(class UObject* __WorldContext, TArray<class FName>* SortList1);
		void GetInventorySortName_Plug(class UObject* __WorldContext, TArray<class FName>* SortList1);
		void GetInventorySortName_Item(class UObject* __WorldContext, TArray<class FName>* SortList1);
		void GetInventorySortRule(int32_t SelectIndex, int32_t ModeNum, class UObject* __WorldContext, ESBItemSortType* SortType);
		void GetInventorySortRuleWeapon(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
		void GetInventorySortRuleEquipment(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
		void GetInventorySortRuleNoLv(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
		void GetInventorySortRulePlug(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
		void GetInventorySortRuleItem(int32_t SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
		void GetWeaponStickerRemoveItemName(class UObject* __WorldContext, class FString* OutItemName);
		void FindWeaponDataInEquipmentBagOrCharacterStorage(const class FString& InWeaponUniqueId, class UObject* __WorldContext, bool* IsValid, struct FSBWeaponItemData* WeaponData);
		void CollapsedGridSlot(class UGridPanel* GridPanel, class UObject* __WorldContext);
		void IsItemNotSale(int32_t ItemIndex, EItemType ItemType, class UObject* __WorldContext, bool* NotSale);
		void CreateDelayAddGridItemIconBtn(class UGridPanel* ParentGridPanel, int32_t CreateNum, int32_t MatricesNam, float MagineintervalTop, float MagineintervalLeft, bool IsImagineSimpleTooltip, bool IsToolTipEnable, bool bIsRightClickAccept, class UObject* __WorldContext);
		void CheckAllowUseOtherItem(const struct FItemMasterData& TargetMasterData1, class UObject* __WorldContext, bool* CanUseItem);
		void IsUseCheckOutBuffItem(int32_t ItemId, class UObject* __WorldContext, bool* NeedToCheck);
		void IsBPPChangeItem(int32_t ItemId, EItemType InItemType, class UObject* __WorldContext, bool* bChange);
		void IsUsedItem(const class FString& InUniqueId, int32_t InStorageNumber, EItemType InItemType, class UObject* __WorldContext, bool* bUse);
		void GetSellItemUpRate(class UObject* __WorldContext, float* Rare);
		void GetImagineParkData(int32_t PerkId, class UObject* __WorldContext, bool* Result, class FText* ParkName, class FText* EffectValue);
		void GetUseItemWindowType(int32_t ItemIndex, class UObject* __WorldContext, EUseItemWindowType* WindowType, int32_t* Valu, int32_t* Time);
		void IsLockItem(const class FString& InItemUniqueId, int32_t StorageNumber, EItemType InItemType, class UObject* __WorldContext, bool* bLock);
		void StorageSortRuleToItemSortType(unsigned char StorageSortRule, class UObject* __WorldContext, ESBItemSortType* ItemSortType);
		void ItemSortTypeToStorageSortRule(ESBItemSortType ItemSortType, class UObject* __WorldContext, unsigned char* StorageSortRule);
		void GetItemPlayerSalePrice(int32_t ItemIndex, EItemType ItemType, bool IsUseLiquidMemory, class UObject* __WorldContext, int32_t* Price);
		void SetSpecialEffectText(int32_t WeaponID, int32_t Level, int32_t SpecialParkID, int32_t SpecialPerkValue, class UObject* __WorldContext, class FString* SpecialName, class FText* SpecialValue, int32_t* SpecialIntValue, class FString* Dest, class FString* PerkName);
		void SetWeaponStatusText(int32_t InWeaponID, int32_t InLevel, class UTextBlock* Ap, class UTextBlock* Cp, class UTextBlock* STR, class UTextBlock* VIT, class UTextBlock* DEX, class UTextBlock* INT, class UTextBlock* MND, class UTextBlock* Attribute, class UTextBlock* Special, class UObject* __WorldContext);
		void GetFindWeaponData(const class FString& UniqueId, int32_t StorageNumber, class UObject* __WorldContext, struct FSBWeaponItemData* WeaponData);
		void GetImagineSlotNumber(const struct FSBMasterImagine& MasterImagine, class UObject* __WorldContext, int32_t* Result);
		void AddPlusText(int32_t Num, class UObject* __WorldContext, class FText* Return);
		void UnbindSaveItemMoveToStorage(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void RequestSaveItemMoveToStorage(const class FScriptDelegate& Event, const struct FInventoryItemData& InventoryItemData, int32_t StorageNumber, class UObject* __WorldContext);
		void UnbindRequestSaveItemDrop(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void RequestSaveItemDrop(const class FScriptDelegate& Event, const struct FInventoryItemData& InventoryItem, int32_t DumpNum, class UObject* __WorldContext, bool* Success);
		void UpdateItemLockaVisibility(class UGridPanel* InventorySlot, const class FString& UniqueId, bool bIsVisibility, class UObject* __WorldContext);
		void UnbindItemLockDelegate(const class FScriptDelegate& Event, class UObject* __WorldContext);
		void SetItemLockSave(const class FScriptDelegate& InputPin, const class FString& UniqueId, int32_t StorageNumber, EItemType InItemType, class UObject* __WorldContext, struct FSBLockItemData* LockItemData, bool* bIsItemLock);
		void SetCaptureStudioEnable(class UUMG_CaptureStudio_C* CaptureStudioWeapon, class UUMG_CaptureStudio_C* CaptureStudioCostume, class UUMG_CaptureStudio_C* CaptureStudioImagine, class UUMG_CaptureStudio_C* CaptureStudioMountImagine, class UUMG_CaptureStudio_C* CaptureStudioOrnament, EItemType ItemType, class UObject* __WorldContext, bool* Result);
		void EmptyGridSlot(class UGridPanel* GridPanel, int32_t SlotNum, class UObject* __WorldContext);
		void CreateAddGridItemIconBtn(class UGridPanel* ParentGridPanel, int32_t FirstIndex, int32_t CreateNum, int32_t MatricesNam, float MagineintervalTop, float MagineintervalLeft, bool IsImagineSimpleTooltip, bool IsToolTipEnable, bool bIsRightClickAccept, float BaseSize, float OverSize, class UObject* __WorldContext);
		void CreateInventoryData(const struct FOwnItemInfo& OwnItemInfo, class UObject* __WorldContext, struct FInventoryData* InventoryData, bool* IsSuccess);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

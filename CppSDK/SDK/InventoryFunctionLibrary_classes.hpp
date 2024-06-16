#pragma once

 

// Package: InventoryFunctionLibrary

#include "Basic.hpp"

#include "UseItemWindowType_structs.hpp"
#include "Engine_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass InventoryFunctionLibrary.InventoryFunctionLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UInventoryFunctionLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void CreateInventoryData(const struct FOwnItemInfo& OwnItemInfo, class UObject* __WorldContext, struct FInventoryData* InventoryData, bool* IsSuccess);
	static void Create_Add_Grid_Item_Icon_Btn(class UGridPanel* ParentGridPanel, int32 FirstIndex, int32 CreateNum, int32 MatricesNam, float MagineintervalTop, float MagineintervalLeft, bool IsImagineSimpleTooltip, bool IsToolTipEnable, bool bIsRightClickAccept, float BaseSize, float OverSize, class UObject* __WorldContext);
	static void EmptyGridSlot(class UGridPanel* GridPanel, int32 SlotNum, class UObject* __WorldContext);
	static void SetCaptureStudioEnable(class UUMG_CaptureStudio_C* CaptureStudioWeapon, class UUMG_CaptureStudio_C* CaptureStudioCostume, class UUMG_CaptureStudio_C* CaptureStudioImagine, class UUMG_CaptureStudio_C* CaptureStudioMountImagine, EItemType ItemType, class UObject* __WorldContext, bool* Result);
	static void Set_Item_Lock_Save(const TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)>& InputPin, const class FString& UniqueId, int32 StorageNumber, const EItemType InItemType, class UObject* __WorldContext, struct FSBLockItemData* LockItemData, bool* bIsItemLock);
	static void UnbindItemLockDelegate(const TDelegate<void(bool Result, TArray<struct FSBLockItemData>& LockItemData, int32 InRetCode)>& Event, class UObject* __WorldContext);
	static void UpdateItemLockaVisibility(class UGridPanel* InventorySlot, const class FString& UniqueId, bool bIsVisibility, class UObject* __WorldContext);
	static void RequestSaveItemDrop(const TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>& Event, const struct FInventoryItemData& InventoryItem, int32 DumpNum, class UObject* __WorldContext, bool* Success);
	static void UnbindRequestSaveItemDrop(const TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>& Event, class UObject* __WorldContext);
	static void RequestSaveItemMoveToStorage(const TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>& Event, const struct FInventoryItemData& InventoryItemData, int32 StorageNumber, class UObject* __WorldContext);
	static void UnbindSaveItemMoveToStorage(const TDelegate<void(int32 InRetCode, TArray<struct FOwnItemInfo>& InDirtyItems)>& Event, class UObject* __WorldContext);
	static void Add_Plus_Text(int32 Num, class UObject* __WorldContext, class FText* Return);
	static void GetImagineSlotNumber(const struct FSBMasterImagine& MasterImagine, class UObject* __WorldContext, int32* Result);
	static void GetFindWeaponData(const class FString& UniqueId, int32 StorageNumber, class UObject* __WorldContext, struct FSBWeaponItemData* WeaponData);
	static void SetWeaponStatusText(const int32 InWeaponID, const int32 InLevel, class UTextBlock* Ap, class UTextBlock* Cp, class UTextBlock* STR, class UTextBlock* VIT, class UTextBlock* DEX, class UTextBlock* INT, class UTextBlock* MND, class UTextBlock* Attribute, class UTextBlock* Special, class UObject* __WorldContext);
	static void SetSpecialEffectText(const int32 WeaponID, int32 Level, int32 SpecialParkID, int32 SpecialPerkValue, class UObject* __WorldContext, class FString* SpecialName, class FText* SpecialValue);
	static void Get_Item_Player_Sale_Price_(int32 ItemIndex, EItemType ItemType, bool IsUseLiquidMemory, class UObject* __WorldContext, int32* Price);
	static void ItemSortTypeToStorageSortRule(ESBItemSortType ItemSortType, class UObject* __WorldContext, uint8* StorageSortRule);
	static void StorageSortRuleToItemSortType(uint8 StorageSortRule, class UObject* __WorldContext, ESBItemSortType* ItemSortType);
	static void Is_Lock_Item(const class FString& InItemUniqueId, const int32 StorageNumber, class UObject* __WorldContext, bool* bLock);
	static void Get_Use_Item_Window_Type(int32 ItemIndex, class UObject* __WorldContext, EUseItemWindowType* WindowType, int32* Valu, int32* Time);
	static void Get_Imagine_Park_Data(int32 PerkId, class UObject* __WorldContext, bool* Result, class FText* ParkName, class FText* Effect_Value);
	static void GetSellItemUpRate(class UObject* __WorldContext, float* Rare);
	static void IsUsedItem(const class FString& InUniqueId, const int32 InStorageNumber, class UObject* __WorldContext, bool* bUse);
	static void Is_BPPChange_Item(int32 ItemId, EItemType InItemType, class UObject* __WorldContext, bool* bChange);
	static void IsUseCheckOutBuffItem(int32 ItemId, class UObject* __WorldContext, bool* NeedToCheck);
	static void CheckAllowUseOtherItem(const struct FItemMasterData& TargetMasterData1, class UObject* __WorldContext, bool* CanUseItem);
	static void CreateDelayAddGridItemIconBtn(class UGridPanel* ParentGridPanel, int32 CreateNum, int32 MatricesNam, float MagineintervalTop, float MagineintervalLeft, bool IsImagineSimpleTooltip, bool IsToolTipEnable, bool bIsRightClickAccept, class UObject* __WorldContext);
	static void IsItemNotSale(int32 ItemIndex, EItemType ItemType, class UObject* __WorldContext, bool* NotSale);
	static void CollapsedGridSlot(class UGridPanel* GridPanel, class UObject* __WorldContext);
	static void FindWeaponDataInEquipmentBagOrCharacterStorage(const class FString& InWeaponUniqueId, class UObject* __WorldContext, bool* IsValid, struct FSBWeaponItemData* WeaponData);
	static void GetWeaponStickerRemoveItemName(class UObject* __WorldContext, class FString* OutItemName);
	static void Get_Inventory_Sort_Rule_Item(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
	static void Get_Inventory_Sort_Rule_Plug(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
	static void GetInventorySortRuleNoLv(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
	static void Get_Inventory_Sort_Rule_Equipment(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
	static void Get_Inventory_Sort_Rule_Weapon(int32 SelectIndex, class UObject* __WorldContext, ESBItemSortType* SortType);
	static void Get_Inventory_Sort_Rule(int32 SelectIndex, int32 ModeNum, class UObject* __WorldContext, ESBItemSortType* SortType);
	static void GetInventorySortName_Item(class UObject* __WorldContext, TArray<class FName>* SortList1);
	static void GetInventorySortName_Plug(class UObject* __WorldContext, TArray<class FName>* SortList1);
	static void GetInventorySortName_NoLv(class UObject* __WorldContext, TArray<class FName>* SortList1);
	static void GetInventorySortName_Equipment(class UObject* __WorldContext, TArray<class FName>* SortList1);
	static void GetInventorySortName_Weapon(class UObject* __WorldContext, TArray<class FName>* SortList1);
	static void GetInventorySortIndex_Item(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index);
	static void GetInventorySortIndex_Plug(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index);
	static void GetInventorySortIndex_NoLv(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index);
	static void GetInventorySortIndex_Equipment(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index);
	static void GetInventorySortIndex_Weapon(ESBItemSortType SortType, class UObject* __WorldContext, int32* Param_Index);
	static void GetInventorySortName(int32 Param_Index, class UObject* __WorldContext, TArray<class FName>* SortList1);
	static void GetInventorySortIndex(int32 Param_Index, ESBItemSortType SortType, class UObject* __WorldContext, int32* Index1);
	static void Get_Inventory_Sort_Mode_Num(EItemFilterType Filter, bool IsItemMode, bool NotBStack, class UObject* __WorldContext, int32* ModeNum);
	static void SetWeaponStatusTextOneItem(const struct FOwnItemInfo& OwnItemInfo, class UTextBlock* Ap, class UTextBlock* Cp, class UTextBlock* STR, class UTextBlock* VIT, class UTextBlock* DEX, class UTextBlock* INT, class UTextBlock* MND, class UTextBlock* Attribute, class UTextBlock* Special, class UObject* __WorldContext);
	static void IsWeaponStickerAttachd(const class FString& UniqueId, int32 StorageNumber, class UObject* __WorldContext, bool* IsAttach);
	static void CalcPageIndex(bool Use, int32 IconIndex, int32 CurrentPage, int32 PageIconMax, class UObject* __WorldContext, bool* Active, int32* Param_Index);
	static class FString GetFilterText(EItemFilterType Filter, class UObject* __WorldContext);
	static void SetFilterComboBox(class UComboBoxString* Target, class FName RowName, class UObject* __WorldContext);
	static void SetFilterBtnType(class UFilterButton_C* Target, class FName RowName, int32 Param_Index, class UObject* __WorldContext);
	static void GetFilterBtnType(class FName RowName, int32 Param_Index, class UObject* __WorldContext, EItemFilterType* Filter);
	static void SetSortComboBox(class UComboBoxString* Target, class FName RowName, int32 FilterIndex, ESBItemSortType Select, class UObject* __WorldContext);
	static class FString GetSortText(ESBItemSortType Sort, class UObject* __WorldContext);
	static void GetSortIndex(ESBItemSortType Sort, class FName RowName, int32 FilterIndex, class UObject* __WorldContext, int32* Param_Index);
	static void GetSortType(int32 SortIndex, class FName RowName, int32 FilterIndex, class UObject* __WorldContext, ESBItemSortType* Array_Element);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InventoryFunctionLibrary_C">();
	}
	static class UInventoryFunctionLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInventoryFunctionLibrary_C>();
	}
};
static_assert(alignof(UInventoryFunctionLibrary_C) == 0x000008, "Wrong alignment on UInventoryFunctionLibrary_C");
static_assert(sizeof(UInventoryFunctionLibrary_C) == 0x000028, "Wrong size on UInventoryFunctionLibrary_C");

}


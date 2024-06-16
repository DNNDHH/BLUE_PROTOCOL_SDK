#pragma once

 

// Package: WBP_StorageRowListOwner

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_classes.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_StorageRowListOwner.WBP_StorageRowListOwner_C
// 0x0170 (0x03E8 - 0x0278)
class UWBP_StorageRowListOwner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                           ItemListSlot;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                           SortList;                                          // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           SortList_Storage;                                  // 0x02A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FilterList;                                        // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FilterList_Storage;                                // 0x02C0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_StorageRowListItemWrap_C*>  ItemRowList;                                       // 0x02D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FOwnItemInfo>                   StorageItemList;                                   // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         TestData;                                          // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DebugCnt;                                          // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugAddCnt;                                       // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugBlock;                                        // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7794[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemClick;                                       // 0x0310(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0320(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UWBP_StorageRowListItem_C*              LastClickItem;                                     // 0x0380(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFilterGroup                           FilterGroup;                                       // 0x0388(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBItemSortType                               SortType;                                          // 0x0398(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               FilterType;                                        // 0x0399(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7795[0x6];                                     // 0x039A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemClickRight;                                  // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bMultipleSelection;                                // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7796[0x7];                                     // 0x03B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_StorageRowListItem_C*>      SelectListItems;                                   // 0x03B8(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FFilterGroup>                   OptionFilter;                                      // 0x03C8(0x0010)(Edit, BlueprintVisible)
	bool                                          BPPointExchangeMode;                               // 0x03D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          SizeSelect;                                        // 0x03D9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7797[0x2];                                     // 0x03DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              OptionSize;                                        // 0x03DC(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LastOffset;                                        // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnItemClick__DelegateSignature(const struct FInventoryData& Param_OnItemClick);
	void OnItemClickRight__DelegateSignature(const struct FInventoryData& NewParam);
	void ExecuteUbergraph_WBP_StorageRowListOwner(int32 EntryPoint);
	void ScrollVisibleUpdate(float Offset);
	void BndEvt__WBP_StorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void PreConstruct(bool IsDesignTime);
	void AddOptionFilter();
	void Reset();
	void MultiStart();
	void CustomEvent_1(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem);
	void IconAllSelectfalse();
	void LockIconUpdate(const class FString& UniqueId, bool bLock);
	void CustomEvent_0(const struct FInventoryData& ItemData, class UWBP_StorageRowListItem_C* UpdetaListItem);
	void UpdetaItemList(const ESBItemSortType SortType2, EItemFilterType Param_FilterType, TArray<struct FFilterGroup>& FilterArray, bool ScrollReset);
	void ResettingStorageListItem();
	void AddStorageListItem(float CreateDelay);
	void StorageItemGet(const ESBItemSortType Param_SortType, EItemFilterType InFilter, TArray<struct FFilterGroup>& FilterArray);
	void SetScrollBoxSizeX(float SizeX);
	void RemoveSelectListItems();
	void CreateLists();
	void SwitchMultipleSelection(bool* bAdd);
	void SelectsItems(const class UWBP_StorageRowListItem_C*& InputPin, bool* bAdd);
	float MaxScrollOffset();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_StorageRowListOwner_C">();
	}
	static class UWBP_StorageRowListOwner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_StorageRowListOwner_C>();
	}
};
static_assert(alignof(UWBP_StorageRowListOwner_C) == 0x000008, "Wrong alignment on UWBP_StorageRowListOwner_C");
static_assert(sizeof(UWBP_StorageRowListOwner_C) == 0x0003E8, "Wrong size on UWBP_StorageRowListOwner_C");
static_assert(offsetof(UWBP_StorageRowListOwner_C, UberGraphFrame) == 0x000278, "Member 'UWBP_StorageRowListOwner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, ItemListSlot) == 0x000280, "Member 'UWBP_StorageRowListOwner_C::ItemListSlot' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, ScrollBox_0) == 0x000288, "Member 'UWBP_StorageRowListOwner_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, SortList) == 0x000290, "Member 'UWBP_StorageRowListOwner_C::SortList' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, SortList_Storage) == 0x0002A0, "Member 'UWBP_StorageRowListOwner_C::SortList_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, FilterList) == 0x0002B0, "Member 'UWBP_StorageRowListOwner_C::FilterList' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, FilterList_Storage) == 0x0002C0, "Member 'UWBP_StorageRowListOwner_C::FilterList_Storage' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, ItemRowList) == 0x0002D0, "Member 'UWBP_StorageRowListOwner_C::ItemRowList' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, StorageItemList) == 0x0002E0, "Member 'UWBP_StorageRowListOwner_C::StorageItemList' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, TestData) == 0x0002F0, "Member 'UWBP_StorageRowListOwner_C::TestData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, DebugCnt) == 0x000300, "Member 'UWBP_StorageRowListOwner_C::DebugCnt' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, DebugAddCnt) == 0x000304, "Member 'UWBP_StorageRowListOwner_C::DebugAddCnt' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, DebugBlock) == 0x000308, "Member 'UWBP_StorageRowListOwner_C::DebugBlock' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, OnItemClick) == 0x000310, "Member 'UWBP_StorageRowListOwner_C::OnItemClick' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, InventoryItemData) == 0x000320, "Member 'UWBP_StorageRowListOwner_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, LastClickItem) == 0x000380, "Member 'UWBP_StorageRowListOwner_C::LastClickItem' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, FilterGroup) == 0x000388, "Member 'UWBP_StorageRowListOwner_C::FilterGroup' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, SortType) == 0x000398, "Member 'UWBP_StorageRowListOwner_C::SortType' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, FilterType) == 0x000399, "Member 'UWBP_StorageRowListOwner_C::FilterType' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, OnItemClickRight) == 0x0003A0, "Member 'UWBP_StorageRowListOwner_C::OnItemClickRight' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, bMultipleSelection) == 0x0003B0, "Member 'UWBP_StorageRowListOwner_C::bMultipleSelection' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, SelectListItems) == 0x0003B8, "Member 'UWBP_StorageRowListOwner_C::SelectListItems' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, OptionFilter) == 0x0003C8, "Member 'UWBP_StorageRowListOwner_C::OptionFilter' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, BPPointExchangeMode) == 0x0003D8, "Member 'UWBP_StorageRowListOwner_C::BPPointExchangeMode' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, SizeSelect) == 0x0003D9, "Member 'UWBP_StorageRowListOwner_C::SizeSelect' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, OptionSize) == 0x0003DC, "Member 'UWBP_StorageRowListOwner_C::OptionSize' has a wrong offset!");
static_assert(offsetof(UWBP_StorageRowListOwner_C, LastOffset) == 0x0003E4, "Member 'UWBP_StorageRowListOwner_C::LastOffset' has a wrong offset!");

}


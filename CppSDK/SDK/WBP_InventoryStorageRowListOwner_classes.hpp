#pragma once

 

// Package: WBP_InventoryStorageRowListOwner

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_classes.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_InventoryStorageRowListOwner.WBP_InventoryStorageRowListOwner_C
// 0x0180 (0x03F8 - 0x0278)
class UWBP_InventoryStorageRowListOwner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBComboBoxCmn01_C*                     ComboBoxString_Filter;                             // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     ComboBoxString_Sort;                               // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     InventoryStorageRowListItem;                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           ItemListSlot;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            SBButton_C_80;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_0;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_129;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 UI_InventoryIcon1_1;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FName>                           SortList;                                          // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                           FilterList;                                        // 0x02D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWBP_InventoryStorageRowListItemWrap_C*> ItemLists;                                         // 0x02E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<struct FOwnItemInfo>                   StorageItemList;                                   // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FString>                         TestData;                                          // 0x0308(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         DebugCnt;                                          // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DebugAddCnt;                                       // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DebugBlock;                                        // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5917[0x7];                                     // 0x0321(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemClick;                                       // 0x0328(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0338(0x0060)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UWBP_InventoryStorageRowListItem_C*     LastClickItem;                                     // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFilterGroup                           FilterGroup;                                       // 0x03A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	uint8                                         SortType;                                          // 0x03B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemFilterType                               FilterType;                                        // 0x03B1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5918[0x6];                                     // 0x03B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnItemClickRight;                                  // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bMultipleSelection;                                // 0x03C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5919[0x7];                                     // 0x03C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_InventoryStorageRowListItem_C*> SelectListItems;                                   // 0x03D0(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                          IsComboSetting;                                    // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          InventoryUpdate;                                   // 0x03E1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_591A[0x6];                                     // 0x03E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   Filters;                                           // 0x03E8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnItemClick__DelegateSignature(const struct FInventoryData& Param_OnItemClick);
	void OnItemClickRight__DelegateSignature();
	void ExecuteUbergraph_WBP_InventoryStorageRowListOwner(int32 EntryPoint);
	void ScrollVisibleUpdate(float Offset);
	void BndEvt__WBP_InventoryStorageRowListOwner_ScrollBox_0_K2Node_ComponentBoundEvent_4_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void UpdateFilterButton();
	void UpdateFilterCombo();
	void UpdateSortCombo();
	void BndEvt__WBP_InventoryStorageRowListOwner_FilterButton_K2Node_ComponentBoundEvent_3_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters);
	void Update();
	void Open();
	void BndEvt__ComboBoxString_Sort_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__ComboBoxString_Filter_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void InitializeComboBox();
	void CustomEvent_3(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem);
	void CustomEvent_2(const struct FInventoryData& ItemData, class UWBP_InventoryStorageRowListItem_C* UpdetaListItem);
	void MultiStart();
	void IconAllSelectfalse();
	void LockIconUpdate(const class FString& UniqueId, bool bLock);
	void UpdetaItemList(const ESBItemSortType InSortType, EItemFilterType Param_FilterType);
	void ResettingStorageListItem();
	void BndEvt__SBButton_C_80_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void AddStorageListItem(float CreateDelay);
	void StorageItemGet(const ESBItemSortType InSortType, EItemFilterType InFilter);
	void Construct();
	void SetScrollBoxSizeX(float SizeX);
	void RemoveSelectListItems();
	class UWidget* On_ComboBoxString_Sort_GenerateWidget_0(const class FString& Item);
	void SetInventoryUpdeta();
	void Create_List();
	void GetSortMode(int32* ModeNum);
	void GetFilterType(EItemFilterType* Param_FilterType);
	void GetSortRule(ESBItemSortType* Param_SortType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_InventoryStorageRowListOwner_C">();
	}
	static class UWBP_InventoryStorageRowListOwner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_InventoryStorageRowListOwner_C>();
	}
};
static_assert(alignof(UWBP_InventoryStorageRowListOwner_C) == 0x000008, "Wrong alignment on UWBP_InventoryStorageRowListOwner_C");
static_assert(sizeof(UWBP_InventoryStorageRowListOwner_C) == 0x0003F8, "Wrong size on UWBP_InventoryStorageRowListOwner_C");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, UberGraphFrame) == 0x000278, "Member 'UWBP_InventoryStorageRowListOwner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, ComboBoxString_Filter) == 0x000280, "Member 'UWBP_InventoryStorageRowListOwner_C::ComboBoxString_Filter' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, ComboBoxString_Sort) == 0x000288, "Member 'UWBP_InventoryStorageRowListOwner_C::ComboBoxString_Sort' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, FilterButton) == 0x000290, "Member 'UWBP_InventoryStorageRowListOwner_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, InventoryStorageRowListItem) == 0x000298, "Member 'UWBP_InventoryStorageRowListOwner_C::InventoryStorageRowListItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, ItemListSlot) == 0x0002A0, "Member 'UWBP_InventoryStorageRowListOwner_C::ItemListSlot' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, SBButton_C_80) == 0x0002A8, "Member 'UWBP_InventoryStorageRowListOwner_C::SBButton_C_80' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, ScrollBox_0) == 0x0002B0, "Member 'UWBP_InventoryStorageRowListOwner_C::ScrollBox_0' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, TextBlock_129) == 0x0002B8, "Member 'UWBP_InventoryStorageRowListOwner_C::TextBlock_129' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, UI_InventoryIcon1_1) == 0x0002C0, "Member 'UWBP_InventoryStorageRowListOwner_C::UI_InventoryIcon1_1' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, SortList) == 0x0002C8, "Member 'UWBP_InventoryStorageRowListOwner_C::SortList' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, FilterList) == 0x0002D8, "Member 'UWBP_InventoryStorageRowListOwner_C::FilterList' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, ItemLists) == 0x0002E8, "Member 'UWBP_InventoryStorageRowListOwner_C::ItemLists' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, StorageItemList) == 0x0002F8, "Member 'UWBP_InventoryStorageRowListOwner_C::StorageItemList' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, TestData) == 0x000308, "Member 'UWBP_InventoryStorageRowListOwner_C::TestData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, DebugCnt) == 0x000318, "Member 'UWBP_InventoryStorageRowListOwner_C::DebugCnt' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, DebugAddCnt) == 0x00031C, "Member 'UWBP_InventoryStorageRowListOwner_C::DebugAddCnt' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, DebugBlock) == 0x000320, "Member 'UWBP_InventoryStorageRowListOwner_C::DebugBlock' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, OnItemClick) == 0x000328, "Member 'UWBP_InventoryStorageRowListOwner_C::OnItemClick' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, InventoryItemData) == 0x000338, "Member 'UWBP_InventoryStorageRowListOwner_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, LastClickItem) == 0x000398, "Member 'UWBP_InventoryStorageRowListOwner_C::LastClickItem' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, FilterGroup) == 0x0003A0, "Member 'UWBP_InventoryStorageRowListOwner_C::FilterGroup' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, SortType) == 0x0003B0, "Member 'UWBP_InventoryStorageRowListOwner_C::SortType' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, FilterType) == 0x0003B1, "Member 'UWBP_InventoryStorageRowListOwner_C::FilterType' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, OnItemClickRight) == 0x0003B8, "Member 'UWBP_InventoryStorageRowListOwner_C::OnItemClickRight' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, bMultipleSelection) == 0x0003C8, "Member 'UWBP_InventoryStorageRowListOwner_C::bMultipleSelection' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, SelectListItems) == 0x0003D0, "Member 'UWBP_InventoryStorageRowListOwner_C::SelectListItems' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, IsComboSetting) == 0x0003E0, "Member 'UWBP_InventoryStorageRowListOwner_C::IsComboSetting' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, InventoryUpdate) == 0x0003E1, "Member 'UWBP_InventoryStorageRowListOwner_C::InventoryUpdate' has a wrong offset!");
static_assert(offsetof(UWBP_InventoryStorageRowListOwner_C, Filters) == 0x0003E8, "Member 'UWBP_InventoryStorageRowListOwner_C::Filters' has a wrong offset!");

}


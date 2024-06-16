#pragma once

 

// Package: FusionItemList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass FusionItemList.FusionItemList_C
// 0x0078 (0x02F0 - 0x0278)
class UFusionItemList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasicPager_C*                          BasicPager;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             SB_FusionItem;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             SortBox;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTemporallyStorage*                   TempStorage;                                       // 0x02A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D5F[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   Filters;                                           // 0x02B0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         Page;                                              // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D60[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectItemData;                                  // 0x02C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         EmptySlotNum;                                      // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D61[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 InvalidItemIds;                                    // 0x02E0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnSelectItemData__DelegateSignature(const struct FOwnItemInfo& Item);
	void ExecuteUbergraph_FusionItemList(int32 EntryPoint);
	void Destruct();
	void BndEvt__FusionItemList_SortBox_K2Node_ComponentBoundEvent_2_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType);
	void BndEvt__FusionItemList_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters);
	void BndEvt__FusionItemList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature(int32 Param_Page);
	void OnSelectItem(const struct FOwnItemInfo& OwnItem, class UFusionitemListItem_C* OnSelected);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Initialize();
	void Terminate();
	void SetFusionWepon(const struct FOwnItemInfo& Weapon);
	void SetEmptySlotNum(int32 SlotNum);
	void InitializeFusionItemList_();
	void CreateFusionItemList_();
	void DeleteFusionItemList();
	void UpdateSelected(bool bIsSelected);
	void UpfateSlotNum();
	void UpdateEnable();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FusionItemList_C">();
	}
	static class UFusionItemList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFusionItemList_C>();
	}
};
static_assert(alignof(UFusionItemList_C) == 0x000008, "Wrong alignment on UFusionItemList_C");
static_assert(sizeof(UFusionItemList_C) == 0x0002F0, "Wrong size on UFusionItemList_C");
static_assert(offsetof(UFusionItemList_C, UberGraphFrame) == 0x000278, "Member 'UFusionItemList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, BasicPager) == 0x000280, "Member 'UFusionItemList_C::BasicPager' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, FilterButton) == 0x000288, "Member 'UFusionItemList_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, SB_FusionItem) == 0x000290, "Member 'UFusionItemList_C::SB_FusionItem' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, SortBox) == 0x000298, "Member 'UFusionItemList_C::SortBox' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, TempStorage) == 0x0002A0, "Member 'UFusionItemList_C::TempStorage' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, SortType) == 0x0002A8, "Member 'UFusionItemList_C::SortType' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, Filters) == 0x0002B0, "Member 'UFusionItemList_C::Filters' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, Page) == 0x0002C0, "Member 'UFusionItemList_C::Page' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, OnSelectItemData) == 0x0002C8, "Member 'UFusionItemList_C::OnSelectItemData' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, EmptySlotNum) == 0x0002D8, "Member 'UFusionItemList_C::EmptySlotNum' has a wrong offset!");
static_assert(offsetof(UFusionItemList_C, InvalidItemIds) == 0x0002E0, "Member 'UFusionItemList_C::InvalidItemIds' has a wrong offset!");

}


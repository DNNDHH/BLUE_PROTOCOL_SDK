#pragma once

 

// Package: EquipmentListForBattleSet

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "E_BattleSetInfoType_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SortTypeCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EquipmentListForBattleSet.EquipmentListForBattleSet_C
// 0x0138 (0x03B0 - 0x0278)
class UEquipmentListForBattleSet_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimListIn;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BagIconSelectedImage;                              // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnScreenForFilterSelector;                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonActiveColor_Bag;                             // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ButtonActiveColor_Storage;                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            CancelBtn;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            EquipChangeBtn;                                    // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FilterButton_Bag;                                  // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FilterButton_Storage;                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterSelector_C*                      FilterSelector;                                    // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            FilterSelectorBtn;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             GridForEquipmentIcons;                             // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    HeadingTxt;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ListBodyGrp;                                       // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    NoEquipmentIconMsgTxt;                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             SortBox;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForEquipmentIcons;                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherForFilterButton_Bag;                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	E_BattleSetInfoType                           InfoType;                                          // 0x0310(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBCharaEquipType                             EquipType;                                         // 0x0311(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBItemSortType                               SortType;                                          // 0x0312(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_835F[0x5];                                     // 0x0313(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   SortFilter;                                        // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBOwnItemListContainer*                OwnItemListContainer;                              // 0x0328(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnListItemSelected;                                // 0x0330(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnCancelBtnPressed;                                // 0x0340(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnEquipChangeBtnPressed;                           // 0x0350(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnFilterApply;                                     // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSortTypeSelected;                                // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bIsStorageMode;                                    // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFilterSelectorOpened;                           // 0x0381(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bIsFilterBtnStorageSelected;                       // 0x0382(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8360[0x5];                                     // 0x0383(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnFilterBtnBagOrStoragePressed;                    // 0x0388(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FString                                 SelectedEquipmentUniqueId;                         // 0x0398(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	ESBItemSortType                               DefaultSortType;                                   // 0x03A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnListItemSelected__DelegateSignature(class UItemIconBtn_C* InSelectedListItem);
	void OnEquipChangeBtnPressed__DelegateSignature(E_BattleSetInfoType InInfoType, const class FString& InEquipmentUniqueId);
	void OnFilterApply__DelegateSignature();
	void OnSortTypeSelected__DelegateSignature(ESBItemSortType InSelectedSortType);
	void OnFilterBtnBagOrStoragePressed__DelegateSignature(bool InIsFilterBtnStoragePressed);
	void OnCancelBtnPressed__DelegateSignature();
	void ExecuteUbergraph_EquipmentListForBattleSet(int32 EntryPoint);
	void Construct();
	void BndEvt__EquipmentListForBattleSet_BtnScreenForFilterSelector_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EquipmentListForBattleSet_CancelBtn_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature();
	void BndEvt__EquipmentListForBattleSet_FilterButton_Storage_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EquipmentListForBattleSet_FilterButton_Bag_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_4_OnClose__DelegateSignature();
	void BndEvt__EquipmentListForBattleSet_FilterSelector_K2Node_ComponentBoundEvent_3_OnFilterApply__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void BndEvt__EquipmentListForBattleSet_BtnEquipChange_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void BndEvt__EquipmentListForBattleSet_BtnFilter_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void OnItemIconBtnSelected(class UItemIconBtn_C* SelectItem);
	void BndEvt__EquipmentListForBattleSet_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType);
	void Init(E_BattleSetInfoType InBattleSetInfoType, ESBCharaEquipType InEquipType, bool InIsStorageMode);
	void UpdateOwnItemListContainer();
	void CreateList(E_BattleSetInfoType InInfoType);
	void InitListSetting(E_BattleSetInfoType InInfoType, bool InIgnoreSortAndFilterInit);
	void SortList();
	void HideListItemAll();
	void ResetSelectedIconAll();
	void SetIsEquipChangeBtnEnabled(bool InIsEnabled);
	void ChangeFilterType(EFilter_Type InFilterType);
	void SetListVisibility(ESlateVisibility InVisibility);
	void SetStorageMode(bool InIsForStorage);
	void PlayListInAnimForward();
	void PlayListInAnimReverse();
	void ChangeActiveWindow(bool InIsFilterSelectorWindowActive, bool InDoAnimation);
	void IsFilterSelectorOpened(bool* OutIsOpened);
	void SetInfoType(E_BattleSetInfoType InInfoType);
	void SetEquipType(ESBCharaEquipType InEquipType);
	void GetEquipType(ESBCharaEquipType* OutEquipType);
	void ExtractInnerImagineEquipPositionFlagByEquipType(ESBCharaEquipType InEquipType, bool InEquipPosition1, bool InEquipPosition2, bool InEquipPosition3, bool InEquipPosition4, bool InEquipPosition5, bool* OutEquipPositionMatch);
	void SetFilterBtnSelected(bool InIsFilterBtnStorageSelected);
	void SwitchEquipmentIconListBody(bool InIsEquipmentIconListBodyEmpty);
	void SetEquipmentIconSelectedByUniqueId(const class FString& InEquipmentUinqueId);
	void CheckIfSelectedEquipmentIsEquipped(const class FString& InEquipmentUniqueId, ESBCharaEquipType InEquipType, bool* OutIsEquipped);
	void PlayFilterSelectorAnimInOrOut(bool InPlayAnimIn);
	void IsFilterSelectorAnimInfOutPlaying(bool* OutIsPlaying);
	void SetFilterPosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipmentListForBattleSet_C">();
	}
	static class UEquipmentListForBattleSet_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipmentListForBattleSet_C>();
	}
};
static_assert(alignof(UEquipmentListForBattleSet_C) == 0x000008, "Wrong alignment on UEquipmentListForBattleSet_C");
static_assert(sizeof(UEquipmentListForBattleSet_C) == 0x0003B0, "Wrong size on UEquipmentListForBattleSet_C");
static_assert(offsetof(UEquipmentListForBattleSet_C, UberGraphFrame) == 0x000278, "Member 'UEquipmentListForBattleSet_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, AnimListIn) == 0x000280, "Member 'UEquipmentListForBattleSet_C::AnimListIn' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, BagIconSelectedImage) == 0x000288, "Member 'UEquipmentListForBattleSet_C::BagIconSelectedImage' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, BtnScreenForFilterSelector) == 0x000290, "Member 'UEquipmentListForBattleSet_C::BtnScreenForFilterSelector' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, ButtonActiveColor_Bag) == 0x000298, "Member 'UEquipmentListForBattleSet_C::ButtonActiveColor_Bag' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, ButtonActiveColor_Storage) == 0x0002A0, "Member 'UEquipmentListForBattleSet_C::ButtonActiveColor_Storage' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, CancelBtn) == 0x0002A8, "Member 'UEquipmentListForBattleSet_C::CancelBtn' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, EquipChangeBtn) == 0x0002B0, "Member 'UEquipmentListForBattleSet_C::EquipChangeBtn' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, FilterButton_Bag) == 0x0002B8, "Member 'UEquipmentListForBattleSet_C::FilterButton_Bag' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, FilterButton_Storage) == 0x0002C0, "Member 'UEquipmentListForBattleSet_C::FilterButton_Storage' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, FilterSelector) == 0x0002C8, "Member 'UEquipmentListForBattleSet_C::FilterSelector' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, FilterSelectorBtn) == 0x0002D0, "Member 'UEquipmentListForBattleSet_C::FilterSelectorBtn' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, GridForEquipmentIcons) == 0x0002D8, "Member 'UEquipmentListForBattleSet_C::GridForEquipmentIcons' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, HeadingTxt) == 0x0002E0, "Member 'UEquipmentListForBattleSet_C::HeadingTxt' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, ListBodyGrp) == 0x0002E8, "Member 'UEquipmentListForBattleSet_C::ListBodyGrp' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, NoEquipmentIconMsgTxt) == 0x0002F0, "Member 'UEquipmentListForBattleSet_C::NoEquipmentIconMsgTxt' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, SortBox) == 0x0002F8, "Member 'UEquipmentListForBattleSet_C::SortBox' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, SwitcherForEquipmentIcons) == 0x000300, "Member 'UEquipmentListForBattleSet_C::SwitcherForEquipmentIcons' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, SwitcherForFilterButton_Bag) == 0x000308, "Member 'UEquipmentListForBattleSet_C::SwitcherForFilterButton_Bag' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, InfoType) == 0x000310, "Member 'UEquipmentListForBattleSet_C::InfoType' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, EquipType) == 0x000311, "Member 'UEquipmentListForBattleSet_C::EquipType' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, SortType) == 0x000312, "Member 'UEquipmentListForBattleSet_C::SortType' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, SortFilter) == 0x000318, "Member 'UEquipmentListForBattleSet_C::SortFilter' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, OwnItemListContainer) == 0x000328, "Member 'UEquipmentListForBattleSet_C::OwnItemListContainer' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, OnListItemSelected) == 0x000330, "Member 'UEquipmentListForBattleSet_C::OnListItemSelected' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, OnCancelBtnPressed) == 0x000340, "Member 'UEquipmentListForBattleSet_C::OnCancelBtnPressed' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, OnEquipChangeBtnPressed) == 0x000350, "Member 'UEquipmentListForBattleSet_C::OnEquipChangeBtnPressed' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, OnFilterApply) == 0x000360, "Member 'UEquipmentListForBattleSet_C::OnFilterApply' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, OnSortTypeSelected) == 0x000370, "Member 'UEquipmentListForBattleSet_C::OnSortTypeSelected' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, bIsStorageMode) == 0x000380, "Member 'UEquipmentListForBattleSet_C::bIsStorageMode' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, bIsFilterSelectorOpened) == 0x000381, "Member 'UEquipmentListForBattleSet_C::bIsFilterSelectorOpened' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, bIsFilterBtnStorageSelected) == 0x000382, "Member 'UEquipmentListForBattleSet_C::bIsFilterBtnStorageSelected' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, OnFilterBtnBagOrStoragePressed) == 0x000388, "Member 'UEquipmentListForBattleSet_C::OnFilterBtnBagOrStoragePressed' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, SelectedEquipmentUniqueId) == 0x000398, "Member 'UEquipmentListForBattleSet_C::SelectedEquipmentUniqueId' has a wrong offset!");
static_assert(offsetof(UEquipmentListForBattleSet_C, DefaultSortType) == 0x0003A8, "Member 'UEquipmentListForBattleSet_C::DefaultSortType' has a wrong offset!");

}


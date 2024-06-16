#pragma once

 

// Package: SelectGrid

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"
#include "SortTypeCategory_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SelectGrid.SelectGrid_C
// 0x01A8 (0x0420 - 0x0278)
class USelectGrid_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Bag;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Storage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnBagSelected;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnStorageSelected;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonPagerWidget_C*                   CommonPagerWidget;                                 // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UContainerGridView_C*                   ContainerGridView;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBag;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconStorage;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_163;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             SortBox;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Btn_Bag;                                       // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Btn_Storage;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTemporallyStorage*                   TargetContainer;                                   // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBagSelected;                                     // 0x02F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D96[0x7];                                     // 0x02F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             SelectedItem;                                      // 0x02F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FOwnItemInfo                           SelectItem;                                        // 0x0308(0x0118)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void SelectedItem__DelegateSignature(const struct FOwnItemInfo& Param_SelectItem);
	void ExecuteUbergraph_SelectGrid(int32 EntryPoint);
	void BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature(int32 PageCurrent);
	void BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
	void BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature(const struct FOwnItemInfo& Param_SelectItem);
	void BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void SetStorage();
	void SetBag();
	void SetBaseFilterSimple(EItemFilterType Filter);
	void SetBaseFilterCustom(const struct FFilterGroup& Filter);
	void SetBaseFilteVerbose(TArray<struct FFilterGroup>& BaseFilter);
	void SetHoverdStorage(bool Param_IsHovered);
	void SetHoverdBag(bool Param_IsHovered);
	void SetFilterType(EFilter_Type FilterType);
	void SetBaseSortType(ESBSortFilterSaveType SaveType, ESortTypeCategory SortTypeCategory);

	void IsSelectBag(bool* IsBag) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SelectGrid_C">();
	}
	static class USelectGrid_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USelectGrid_C>();
	}
};
static_assert(alignof(USelectGrid_C) == 0x000008, "Wrong alignment on USelectGrid_C");
static_assert(sizeof(USelectGrid_C) == 0x000420, "Wrong size on USelectGrid_C");
static_assert(offsetof(USelectGrid_C, UberGraphFrame) == 0x000278, "Member 'USelectGrid_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, Btn_Bag) == 0x000280, "Member 'USelectGrid_C::Btn_Bag' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, Btn_Storage) == 0x000288, "Member 'USelectGrid_C::Btn_Storage' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, BtnBagSelected) == 0x000290, "Member 'USelectGrid_C::BtnBagSelected' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, BtnStorageSelected) == 0x000298, "Member 'USelectGrid_C::BtnStorageSelected' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, CommonPagerWidget) == 0x0002A0, "Member 'USelectGrid_C::CommonPagerWidget' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, ContainerGridView) == 0x0002A8, "Member 'USelectGrid_C::ContainerGridView' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, FilterButton) == 0x0002B0, "Member 'USelectGrid_C::FilterButton' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, IconBag) == 0x0002B8, "Member 'USelectGrid_C::IconBag' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, IconStorage) == 0x0002C0, "Member 'USelectGrid_C::IconStorage' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, Image_163) == 0x0002C8, "Member 'USelectGrid_C::Image_163' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, SortBox) == 0x0002D0, "Member 'USelectGrid_C::SortBox' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, Txt_Btn_Bag) == 0x0002D8, "Member 'USelectGrid_C::Txt_Btn_Bag' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, Txt_Btn_Storage) == 0x0002E0, "Member 'USelectGrid_C::Txt_Btn_Storage' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, TargetContainer) == 0x0002E8, "Member 'USelectGrid_C::TargetContainer' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, IsBagSelected) == 0x0002F0, "Member 'USelectGrid_C::IsBagSelected' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, SelectedItem) == 0x0002F8, "Member 'USelectGrid_C::SelectedItem' has a wrong offset!");
static_assert(offsetof(USelectGrid_C, SelectItem) == 0x000308, "Member 'USelectGrid_C::SelectItem' has a wrong offset!");

}


#pragma once

 

// Package: WeaponCustomStorageView

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Filter_Type_structs.hpp"
#include "SortTypeCategory_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponCustomStorageView.WeaponCustomStorageView_C
// 0x0078 (0x02F0 - 0x0278)
class UWeaponCustomStorageView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_Bag;                                           // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Storage;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnBagSelected;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BtnStorageSelected;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconBag;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconStorage;                                       // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USortBox_C*                             SortBox;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Btn_Bag;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Btn_Storage;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWeaponCustomList_C*                    WeaponCustomList;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnSelectListItem;                                  // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	EFilter_Type                                  Filter_Type;                                       // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSortFilterSaveType                         Save_Type;                                         // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESortTypeCategory                             Sort_Type_Category;                                // 0x02EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBag_;                                            // 0x02EB(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void ExecuteUbergraph_WeaponCustomStorageView(int32 EntryPoint);
	void BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature(const struct FOwnItemInfo& SelectData);
	void BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters);
	void BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature(ESBItemSortType SortType);
	void SetBag();
	void SetStorage();
	void SetBaseFilter(TArray<struct FFilterGroup>& BaseFilter);
	void SetFilterType(EFilter_Type FilterType);
	void SetSortMode(ESBSortFilterSaveType Param_Save_Type, ESortTypeCategory Param_Sort_Type_Category);
	void UpdateStorageData();
	void SetHoverdStorage(bool Param_IsHovered);
	void SetHoverdBag(bool Param_IsHovered);

	void IsBag(bool* Param_IsBag_) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponCustomStorageView_C">();
	}
	static class UWeaponCustomStorageView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponCustomStorageView_C>();
	}
};
static_assert(alignof(UWeaponCustomStorageView_C) == 0x000008, "Wrong alignment on UWeaponCustomStorageView_C");
static_assert(sizeof(UWeaponCustomStorageView_C) == 0x0002F0, "Wrong size on UWeaponCustomStorageView_C");
static_assert(offsetof(UWeaponCustomStorageView_C, UberGraphFrame) == 0x000278, "Member 'UWeaponCustomStorageView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, Btn_Bag) == 0x000280, "Member 'UWeaponCustomStorageView_C::Btn_Bag' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, Btn_Storage) == 0x000288, "Member 'UWeaponCustomStorageView_C::Btn_Storage' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, BtnBagSelected) == 0x000290, "Member 'UWeaponCustomStorageView_C::BtnBagSelected' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, BtnStorageSelected) == 0x000298, "Member 'UWeaponCustomStorageView_C::BtnStorageSelected' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, FilterButton) == 0x0002A0, "Member 'UWeaponCustomStorageView_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, IconBag) == 0x0002A8, "Member 'UWeaponCustomStorageView_C::IconBag' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, IconStorage) == 0x0002B0, "Member 'UWeaponCustomStorageView_C::IconStorage' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, SortBox) == 0x0002B8, "Member 'UWeaponCustomStorageView_C::SortBox' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, Txt_Btn_Bag) == 0x0002C0, "Member 'UWeaponCustomStorageView_C::Txt_Btn_Bag' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, Txt_Btn_Storage) == 0x0002C8, "Member 'UWeaponCustomStorageView_C::Txt_Btn_Storage' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, WeaponCustomList) == 0x0002D0, "Member 'UWeaponCustomStorageView_C::WeaponCustomList' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, OnSelectListItem) == 0x0002D8, "Member 'UWeaponCustomStorageView_C::OnSelectListItem' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, Filter_Type) == 0x0002E8, "Member 'UWeaponCustomStorageView_C::Filter_Type' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, Save_Type) == 0x0002E9, "Member 'UWeaponCustomStorageView_C::Save_Type' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, Sort_Type_Category) == 0x0002EA, "Member 'UWeaponCustomStorageView_C::Sort_Type_Category' has a wrong offset!");
static_assert(offsetof(UWeaponCustomStorageView_C, IsBag_) == 0x0002EB, "Member 'UWeaponCustomStorageView_C::IsBag_' has a wrong offset!");

}


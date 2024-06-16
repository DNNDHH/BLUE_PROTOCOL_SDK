#pragma once

 

// Package: WeaponCustomList

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WeaponCustomList.WeaponCustomList_C
// 0x0060 (0x02D8 - 0x0278)
class UWeaponCustomList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBasicPager_C*                          BasicPager;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             SB_ItemList;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTemporallyStorage*                   StorageData;                                       // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0298(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBItemSortType                               Sort_Type;                                         // 0x02A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D3A[0x7];                                     // 0x02A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelectWeapon;                                    // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         Page;                                              // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5D3B[0x4];                                     // 0x02C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   BaseFilter;                                        // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void OnSelectWeapon__DelegateSignature(const struct FOwnItemInfo& SelectData);
	void ExecuteUbergraph_WeaponCustomList(int32 EntryPoint);
	void BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature(int32 Param_Page);
	void OnSelect(const struct FOwnItemInfo& OnSelectWeapn, class UWeaponCustomListitem_C* Select);
	void PreConstruct(bool IsDesignTime);
	void SetStorage(class USBOwnItemListContainer* Param_StorageData);
	void SetSortType(ESBItemSortType Param_Sort_Type);
	void SetFilter(TArray<struct FFilterGroup>& Param_Filters);
	void GenerateList();
	void ApplySortFilter();
	void SetBaseFilter(TArray<struct FFilterGroup>& Param_BaseFilter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WeaponCustomList_C">();
	}
	static class UWeaponCustomList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWeaponCustomList_C>();
	}
};
static_assert(alignof(UWeaponCustomList_C) == 0x000008, "Wrong alignment on UWeaponCustomList_C");
static_assert(sizeof(UWeaponCustomList_C) == 0x0002D8, "Wrong size on UWeaponCustomList_C");
static_assert(offsetof(UWeaponCustomList_C, UberGraphFrame) == 0x000278, "Member 'UWeaponCustomList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWeaponCustomList_C, BasicPager) == 0x000280, "Member 'UWeaponCustomList_C::BasicPager' has a wrong offset!");
static_assert(offsetof(UWeaponCustomList_C, SB_ItemList) == 0x000288, "Member 'UWeaponCustomList_C::SB_ItemList' has a wrong offset!");
static_assert(offsetof(UWeaponCustomList_C, StorageData) == 0x000290, "Member 'UWeaponCustomList_C::StorageData' has a wrong offset!");
static_assert(offsetof(UWeaponCustomList_C, Filters) == 0x000298, "Member 'UWeaponCustomList_C::Filters' has a wrong offset!");
static_assert(offsetof(UWeaponCustomList_C, Sort_Type) == 0x0002A8, "Member 'UWeaponCustomList_C::Sort_Type' has a wrong offset!");
static_assert(offsetof(UWeaponCustomList_C, OnSelectWeapon) == 0x0002B0, "Member 'UWeaponCustomList_C::OnSelectWeapon' has a wrong offset!");
static_assert(offsetof(UWeaponCustomList_C, Page) == 0x0002C0, "Member 'UWeaponCustomList_C::Page' has a wrong offset!");
static_assert(offsetof(UWeaponCustomList_C, BaseFilter) == 0x0002C8, "Member 'UWeaponCustomList_C::BaseFilter' has a wrong offset!");

}


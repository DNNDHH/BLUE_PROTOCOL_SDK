#pragma once

 

// Package: ContainerGridView

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ContainerGridView.ContainerGridView_C
// 0x0098 (0x0310 - 0x0278)
class UContainerGridView_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UGridPanel*                             Grid_Value;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBTemporallyStorage*                   TargetContainer;                                   // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0290(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             SelectedItem;                                      // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         ViewSlotNum;                                       // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DAB[0x4];                                     // 0x02B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   BaseFilter;                                        // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBItemSortType                               SortType;                                          // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DAC[0x3];                                     // 0x02C9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MaxtixNum;                                         // 0x02CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         MinimunViewGrid;                                   // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          bIsMultiSelectable;                                // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6DAD[0x3];                                     // 0x02D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FilterID;                                          // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6DAE[0x4];                                     // 0x02DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 SkipUniqueId;                                      // 0x02E0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<class FString>                         SelectedUIDs;                                      // 0x02F0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          DisableSelectAction;                               // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          bIsMaterialView;                                   // 0x0301(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bDisableNewMark;                                   // 0x0302(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bEnablePagenate;                                   // 0x0303(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                         PagenateNum;                                       // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Page;                                              // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem);
	void ExecuteUbergraph_ContainerGridView(int32 EntryPoint);
	void SetFilter(TArray<struct FFilterGroup>& Param_Filters);
	void OnSelectedIcon(class UItemIconBtn_C* OnSelectedBtn);
	void Set_Target(class USBTemporallyStorage* Param_TargetContainer);
	void GenerateIcons();
	void ApplySortFilters();
	void SetSelectedAll(bool Selected);
	void SetBaseFilterSimple(EItemFilterType Filter);
	void SetBaseFilterCustom(const struct FFilterGroup& Filter);
	void SetBaseFilteVerbose(TArray<struct FFilterGroup>& Param_BaseFilter);
	void SetSortType(ESBItemSortType Param_SortType);
	void SetNeedCount(int32 NeedCount);
	void MultiSelectOverViewUpdate(class UContainerGridView_C* GridView, bool bIsMaterialFull);
	void SetMultiSelectable(bool Param_bIsMultiSelectable);
	void AddTicket(int32 TokenID, int32 AddNum);
	void Set_FilterID(int32 Param_FilterID);
	void SetDropUID(const class FString& Param_SkipUniqueId);
	void SetSelectedUIDs(TArray<class FString>& Param_SelectedUIDs);
	void GetUsedGridNum(int32* UsedGridNum);
	void SetPage(int32 Param_Page);
	void GetPageMax(int32* MaxPage);

	void Find_IconBtn_To_OwnItem(class UItemIconBtn_C* FindIcon, struct FOwnItemInfo* FindedItem) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ContainerGridView_C">();
	}
	static class UContainerGridView_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UContainerGridView_C>();
	}
};
static_assert(alignof(UContainerGridView_C) == 0x000008, "Wrong alignment on UContainerGridView_C");
static_assert(sizeof(UContainerGridView_C) == 0x000310, "Wrong size on UContainerGridView_C");
static_assert(offsetof(UContainerGridView_C, UberGraphFrame) == 0x000278, "Member 'UContainerGridView_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, Grid_Value) == 0x000280, "Member 'UContainerGridView_C::Grid_Value' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, TargetContainer) == 0x000288, "Member 'UContainerGridView_C::TargetContainer' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, Filters) == 0x000290, "Member 'UContainerGridView_C::Filters' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, SelectedItem) == 0x0002A0, "Member 'UContainerGridView_C::SelectedItem' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, ViewSlotNum) == 0x0002B0, "Member 'UContainerGridView_C::ViewSlotNum' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, BaseFilter) == 0x0002B8, "Member 'UContainerGridView_C::BaseFilter' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, SortType) == 0x0002C8, "Member 'UContainerGridView_C::SortType' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, MaxtixNum) == 0x0002CC, "Member 'UContainerGridView_C::MaxtixNum' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, MinimunViewGrid) == 0x0002D0, "Member 'UContainerGridView_C::MinimunViewGrid' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, bIsMultiSelectable) == 0x0002D4, "Member 'UContainerGridView_C::bIsMultiSelectable' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, FilterID) == 0x0002D8, "Member 'UContainerGridView_C::FilterID' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, SkipUniqueId) == 0x0002E0, "Member 'UContainerGridView_C::SkipUniqueId' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, SelectedUIDs) == 0x0002F0, "Member 'UContainerGridView_C::SelectedUIDs' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, DisableSelectAction) == 0x000300, "Member 'UContainerGridView_C::DisableSelectAction' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, bIsMaterialView) == 0x000301, "Member 'UContainerGridView_C::bIsMaterialView' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, bDisableNewMark) == 0x000302, "Member 'UContainerGridView_C::bDisableNewMark' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, bEnablePagenate) == 0x000303, "Member 'UContainerGridView_C::bEnablePagenate' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, PagenateNum) == 0x000304, "Member 'UContainerGridView_C::PagenateNum' has a wrong offset!");
static_assert(offsetof(UContainerGridView_C, Page) == 0x000308, "Member 'UContainerGridView_C::Page' has a wrong offset!");

}


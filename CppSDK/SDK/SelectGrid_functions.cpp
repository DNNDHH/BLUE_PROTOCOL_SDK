#pragma once

 

// Package: SelectGrid

#include "Basic.hpp"

#include "SelectGrid_classes.hpp"
#include "SelectGrid_parameters.hpp"


namespace SDK
{

// Function SelectGrid.SelectGrid_C.SelectedItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_SelectItem                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void USelectGrid_C::SelectedItem__DelegateSignature(const struct FOwnItemInfo& Param_SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SelectedItem__DelegateSignature");

	Params::SelectGrid_C_SelectedItem__DelegateSignature Parms{};

	Parms.Param_SelectItem = std::move(Param_SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.ExecuteUbergraph_SelectGrid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectGrid_C::ExecuteUbergraph_SelectGrid(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "ExecuteUbergraph_SelectGrid");

	Params::SelectGrid_C_ExecuteUbergraph_SelectGrid Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   PageCurrent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectGrid_C::BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature(int32 PageCurrent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature");

	Params::SelectGrid_C_BndEvt__SelectGrid_CommonPagerWidget_K2Node_ComponentBoundEvent_9_OnPageChange__DelegateSignature Parms{};

	Parms.PageCurrent = PageCurrent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectGrid_C::BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectGrid_C::BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectGrid_C::BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void USelectGrid_C::BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectGrid_C::BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature");

	Params::SelectGrid_C_BndEvt__SelectGrid_SortBox_K2Node_ComponentBoundEvent_4_OnSelectSortType__DelegateSignature Parms{};

	Parms.SortType = SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_SelectItem                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void USelectGrid_C::BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature(const struct FOwnItemInfo& Param_SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature");

	Params::SelectGrid_C_BndEvt__SelectGrid_ContainerGridView_K2Node_ComponentBoundEvent_3_SelectedItem__DelegateSignature Parms{};

	Parms.Param_SelectItem = std::move(Param_SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectGrid_C::BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void USelectGrid_C::BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_Btn_Storage_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectGrid.SelectGrid_C.BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USelectGrid_C::BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature");

	Params::SelectGrid_C_BndEvt__SelectGrid_FilterButton_K2Node_ComponentBoundEvent_0_OnApplyFilter__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function SelectGrid.SelectGrid_C.SetStorage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectGrid_C::SetStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectGrid.SelectGrid_C.SetBag
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USelectGrid_C::SetBag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetBag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SelectGrid.SelectGrid_C.SetBaseFilterSimple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemFilterType                         Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectGrid_C::SetBaseFilterSimple(EItemFilterType Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetBaseFilterSimple");

	Params::SelectGrid_C_SetBaseFilterSimple Parms{};

	Parms.Filter = Filter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.SetBaseFilterCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFilterGroup                     Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void USelectGrid_C::SetBaseFilterCustom(const struct FFilterGroup& Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetBaseFilterCustom");

	Params::SelectGrid_C_SetBaseFilterCustom Parms{};

	Parms.Filter = std::move(Filter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.SetBaseFilteVerbose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             BaseFilter                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USelectGrid_C::SetBaseFilteVerbose(TArray<struct FFilterGroup>& BaseFilter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetBaseFilteVerbose");

	Params::SelectGrid_C_SetBaseFilteVerbose Parms{};

	Parms.BaseFilter = std::move(BaseFilter);

	UObject::ProcessEvent(Func, &Parms);

	BaseFilter = std::move(Parms.BaseFilter);
}


// Function SelectGrid.SelectGrid_C.SetHoverdStorage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectGrid_C::SetHoverdStorage(bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetHoverdStorage");

	Params::SelectGrid_C_SetHoverdStorage Parms{};

	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.SetHoverdBag
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectGrid_C::SetHoverdBag(bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetHoverdBag");

	Params::SelectGrid_C_SetHoverdBag Parms{};

	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.SetFilterType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFilter_Type                            FilterType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectGrid_C::SetFilterType(EFilter_Type FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetFilterType");

	Params::SelectGrid_C_SetFilterType Parms{};

	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.SetBaseSortType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSortFilterSaveType                   SaveType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESortTypeCategory                       SortTypeCategory                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USelectGrid_C::SetBaseSortType(ESBSortFilterSaveType SaveType, ESortTypeCategory SortTypeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "SetBaseSortType");

	Params::SelectGrid_C_SetBaseSortType Parms{};

	Parms.SaveType = SaveType;
	Parms.SortTypeCategory = SortTypeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SelectGrid.SelectGrid_C.IsSelectBag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsBag                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USelectGrid_C::IsSelectBag(bool* IsBag) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SelectGrid_C", "IsSelectBag");

	Params::SelectGrid_C_IsSelectBag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsBag != nullptr)
		*IsBag = Parms.IsBag;
}

}


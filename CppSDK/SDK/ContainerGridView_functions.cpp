#pragma once

 

// Package: ContainerGridView

#include "Basic.hpp"

#include "ContainerGridView_classes.hpp"
#include "ContainerGridView_parameters.hpp"


namespace SDK
{

// Function ContainerGridView.ContainerGridView_C.SelectedItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UContainerGridView_C::SelectedItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SelectedItem__DelegateSignature");

	Params::ContainerGridView_C_SelectedItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.ExecuteUbergraph_ContainerGridView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::ExecuteUbergraph_ContainerGridView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "ExecuteUbergraph_ContainerGridView");

	Params::ContainerGridView_C_ExecuteUbergraph_ContainerGridView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.SetFilter
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_Filters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UContainerGridView_C::SetFilter(TArray<struct FFilterGroup>& Param_Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetFilter");

	Params::ContainerGridView_C_SetFilter Parms{};

	Parms.Param_Filters = std::move(Param_Filters);

	UObject::ProcessEvent(Func, &Parms);

	Param_Filters = std::move(Parms.Param_Filters);
}


// Function ContainerGridView.ContainerGridView_C.OnSelectedIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   OnSelectedBtn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::OnSelectedIcon(class UItemIconBtn_C* OnSelectedBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "OnSelectedIcon");

	Params::ContainerGridView_C_OnSelectedIcon Parms{};

	Parms.OnSelectedBtn = OnSelectedBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.Set Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTemporallyStorage*             Param_TargetContainer                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::Set_Target(class USBTemporallyStorage* Param_TargetContainer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "Set Target");

	Params::ContainerGridView_C_Set_Target Parms{};

	Parms.Param_TargetContainer = Param_TargetContainer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.GenerateIcons
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UContainerGridView_C::GenerateIcons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "GenerateIcons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ContainerGridView.ContainerGridView_C.ApplySortFilters
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UContainerGridView_C::ApplySortFilters()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "ApplySortFilters");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ContainerGridView.ContainerGridView_C.SetSelectedAll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UContainerGridView_C::SetSelectedAll(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetSelectedAll");

	Params::ContainerGridView_C_SetSelectedAll Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.SetBaseFilterSimple
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemFilterType                         Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::SetBaseFilterSimple(EItemFilterType Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetBaseFilterSimple");

	Params::ContainerGridView_C_SetBaseFilterSimple Parms{};

	Parms.Filter = Filter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.SetBaseFilterCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFilterGroup                     Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UContainerGridView_C::SetBaseFilterCustom(const struct FFilterGroup& Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetBaseFilterCustom");

	Params::ContainerGridView_C_SetBaseFilterCustom Parms{};

	Parms.Filter = std::move(Filter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.SetBaseFilteVerbose
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_BaseFilter                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UContainerGridView_C::SetBaseFilteVerbose(TArray<struct FFilterGroup>& Param_BaseFilter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetBaseFilteVerbose");

	Params::ContainerGridView_C_SetBaseFilteVerbose Parms{};

	Parms.Param_BaseFilter = std::move(Param_BaseFilter);

	UObject::ProcessEvent(Func, &Parms);

	Param_BaseFilter = std::move(Parms.Param_BaseFilter);
}


// Function ContainerGridView.ContainerGridView_C.SetSortType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::SetSortType(ESBItemSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetSortType");

	Params::ContainerGridView_C_SetSortType Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.SetNeedCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NeedCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::SetNeedCount(int32 NeedCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetNeedCount");

	Params::ContainerGridView_C_SetNeedCount Parms{};

	Parms.NeedCount = NeedCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.MultiSelectOverViewUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UContainerGridView_C*             GridView                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsMaterialFull                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UContainerGridView_C::MultiSelectOverViewUpdate(class UContainerGridView_C* GridView, bool bIsMaterialFull)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "MultiSelectOverViewUpdate");

	Params::ContainerGridView_C_MultiSelectOverViewUpdate Parms{};

	Parms.GridView = GridView;
	Parms.bIsMaterialFull = bIsMaterialFull;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.SetMultiSelectable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bIsMultiSelectable                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UContainerGridView_C::SetMultiSelectable(bool Param_bIsMultiSelectable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetMultiSelectable");

	Params::ContainerGridView_C_SetMultiSelectable Parms{};

	Parms.Param_bIsMultiSelectable = Param_bIsMultiSelectable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.AddTicket
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AddNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::AddTicket(int32 TokenID, int32 AddNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "AddTicket");

	Params::ContainerGridView_C_AddTicket Parms{};

	Parms.TokenID = TokenID;
	Parms.AddNum = AddNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.Set FilterID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_FilterID                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::Set_FilterID(int32 Param_FilterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "Set FilterID");

	Params::ContainerGridView_C_Set_FilterID Parms{};

	Parms.Param_FilterID = Param_FilterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.SetDropUID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_SkipUniqueId                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UContainerGridView_C::SetDropUID(const class FString& Param_SkipUniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetDropUID");

	Params::ContainerGridView_C_SetDropUID Parms{};

	Parms.Param_SkipUniqueId = std::move(Param_SkipUniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.SetSelectedUIDs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Param_SelectedUIDs                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UContainerGridView_C::SetSelectedUIDs(TArray<class FString>& Param_SelectedUIDs)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetSelectedUIDs");

	Params::ContainerGridView_C_SetSelectedUIDs Parms{};

	Parms.Param_SelectedUIDs = std::move(Param_SelectedUIDs);

	UObject::ProcessEvent(Func, &Parms);

	Param_SelectedUIDs = std::move(Parms.Param_SelectedUIDs);
}


// Function ContainerGridView.ContainerGridView_C.GetUsedGridNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   UsedGridNum                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::GetUsedGridNum(int32* UsedGridNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "GetUsedGridNum");

	Params::ContainerGridView_C_GetUsedGridNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (UsedGridNum != nullptr)
		*UsedGridNum = Parms.UsedGridNum;
}


// Function ContainerGridView.ContainerGridView_C.SetPage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Page                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::SetPage(int32 Param_Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "SetPage");

	Params::ContainerGridView_C_SetPage Parms{};

	Parms.Param_Page = Param_Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ContainerGridView.ContainerGridView_C.GetPageMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MaxPage                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContainerGridView_C::GetPageMax(int32* MaxPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "GetPageMax");

	Params::ContainerGridView_C_GetPageMax Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxPage != nullptr)
		*MaxPage = Parms.MaxPage;
}


// Function ContainerGridView.ContainerGridView_C.Find IconBtn To OwnItem
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UItemIconBtn_C*                   FindIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOwnItemInfo                     FindedItem                                             (Parm, OutParm)

void UContainerGridView_C::Find_IconBtn_To_OwnItem(class UItemIconBtn_C* FindIcon, struct FOwnItemInfo* FindedItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ContainerGridView_C", "Find IconBtn To OwnItem");

	Params::ContainerGridView_C_Find_IconBtn_To_OwnItem Parms{};

	Parms.FindIcon = FindIcon;

	UObject::ProcessEvent(Func, &Parms);

	if (FindedItem != nullptr)
		*FindedItem = std::move(Parms.FindedItem);
}

}


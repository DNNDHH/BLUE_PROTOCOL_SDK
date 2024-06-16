#pragma once

 

// Package: WeaponCustomList

#include "Basic.hpp"

#include "WeaponCustomList_classes.hpp"
#include "WeaponCustomList_parameters.hpp"


namespace SDK
{

// Function WeaponCustomList.WeaponCustomList_C.OnSelectWeapon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponCustomList_C::OnSelectWeapon__DelegateSignature(const struct FOwnItemInfo& SelectData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "OnSelectWeapon__DelegateSignature");

	Params::WeaponCustomList_C_OnSelectWeapon__DelegateSignature Parms{};

	Parms.SelectData = std::move(SelectData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomList.WeaponCustomList_C.ExecuteUbergraph_WeaponCustomList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomList_C::ExecuteUbergraph_WeaponCustomList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "ExecuteUbergraph_WeaponCustomList");

	Params::WeaponCustomList_C_ExecuteUbergraph_WeaponCustomList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomList.WeaponCustomList_C.BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   Param_Page                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomList_C::BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature(int32 Param_Page)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature");

	Params::WeaponCustomList_C_BndEvt__WeaponCustomList_BasicPager_K2Node_ComponentBoundEvent_0_OnPageChange__DelegateSignature Parms{};

	Parms.Param_Page = Param_Page;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomList.WeaponCustomList_C.OnSelect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     OnSelectWeapn                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWeaponCustomListitem_C*          Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomList_C::OnSelect(const struct FOwnItemInfo& OnSelectWeapn, class UWeaponCustomListitem_C* Select)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "OnSelect");

	Params::WeaponCustomList_C_OnSelect Parms{};

	Parms.OnSelectWeapn = std::move(OnSelectWeapn);
	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomList.WeaponCustomList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "PreConstruct");

	Params::WeaponCustomList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomList.WeaponCustomList_C.SetStorage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBOwnItemListContainer*          Param_StorageData                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomList_C::SetStorage(class USBOwnItemListContainer* Param_StorageData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "SetStorage");

	Params::WeaponCustomList_C_SetStorage Parms{};

	Parms.Param_StorageData = Param_StorageData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomList.WeaponCustomList_C.SetSortType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_Sort_Type                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomList_C::SetSortType(ESBItemSortType Param_Sort_Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "SetSortType");

	Params::WeaponCustomList_C_SetSortType Parms{};

	Parms.Param_Sort_Type = Param_Sort_Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomList.WeaponCustomList_C.SetFilter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_Filters                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponCustomList_C::SetFilter(TArray<struct FFilterGroup>& Param_Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "SetFilter");

	Params::WeaponCustomList_C_SetFilter Parms{};

	Parms.Param_Filters = std::move(Param_Filters);

	UObject::ProcessEvent(Func, &Parms);

	Param_Filters = std::move(Parms.Param_Filters);
}


// Function WeaponCustomList.WeaponCustomList_C.GenerateList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponCustomList_C::GenerateList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "GenerateList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomList.WeaponCustomList_C.ApplySortFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponCustomList_C::ApplySortFilter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "ApplySortFilter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomList.WeaponCustomList_C.SetBaseFilter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Param_BaseFilter                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponCustomList_C::SetBaseFilter(TArray<struct FFilterGroup>& Param_BaseFilter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomList_C", "SetBaseFilter");

	Params::WeaponCustomList_C_SetBaseFilter Parms{};

	Parms.Param_BaseFilter = std::move(Param_BaseFilter);

	UObject::ProcessEvent(Func, &Parms);

	Param_BaseFilter = std::move(Parms.Param_BaseFilter);
}

}


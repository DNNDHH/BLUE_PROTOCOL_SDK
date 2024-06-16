#pragma once

 

// Package: WeaponCustomStorageView

#include "Basic.hpp"

#include "WeaponCustomStorageView_classes.hpp"
#include "WeaponCustomStorageView_parameters.hpp"


namespace SDK
{

// Function WeaponCustomStorageView.WeaponCustomStorageView_C.OnSelectListItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponCustomStorageView_C::OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "OnSelectListItem__DelegateSignature");

	Params::WeaponCustomStorageView_C_OnSelectListItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.ExecuteUbergraph_WeaponCustomStorageView
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomStorageView_C::ExecuteUbergraph_WeaponCustomStorageView(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "ExecuteUbergraph_WeaponCustomStorageView");

	Params::WeaponCustomStorageView_C_ExecuteUbergraph_WeaponCustomStorageView Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponCustomStorageView_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectData                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature(const struct FOwnItemInfo& SelectData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature");

	Params::WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_WeaponCustomList_K2Node_ComponentBoundEvent_4_OnSelectWeapon__DelegateSignature Parms{};

	Parms.SelectData = std::move(SelectData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_Btn_Storage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_Btn_Bag_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filters                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Filters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature");

	Params::WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_FilterButton_K2Node_ComponentBoundEvent_1_OnApplyFilter__DelegateSignature Parms{};

	Parms.Filters = std::move(Filters);

	UObject::ProcessEvent(Func, &Parms);

	Filters = std::move(Parms.Filters);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBItemSortType                         SortType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomStorageView_C::BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature(ESBItemSortType SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature");

	Params::WeaponCustomStorageView_C_BndEvt__WeaponCustomStorageView_SortBox_K2Node_ComponentBoundEvent_0_OnSelectSortType__DelegateSignature Parms{};

	Parms.SortType = SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetBag
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponCustomStorageView_C::SetBag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "SetBag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetStorage
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponCustomStorageView_C::SetStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "SetStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetBaseFilter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             BaseFilter                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponCustomStorageView_C::SetBaseFilter(TArray<struct FFilterGroup>& BaseFilter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "SetBaseFilter");

	Params::WeaponCustomStorageView_C_SetBaseFilter Parms{};

	Parms.BaseFilter = std::move(BaseFilter);

	UObject::ProcessEvent(Func, &Parms);

	BaseFilter = std::move(Parms.BaseFilter);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetFilterType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EFilter_Type                            FilterType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomStorageView_C::SetFilterType(EFilter_Type FilterType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "SetFilterType");

	Params::WeaponCustomStorageView_C_SetFilterType Parms{};

	Parms.FilterType = FilterType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetSortMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSortFilterSaveType                   Param_Save_Type                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESortTypeCategory                       Param_Sort_Type_Category                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponCustomStorageView_C::SetSortMode(ESBSortFilterSaveType Param_Save_Type, ESortTypeCategory Param_Sort_Type_Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "SetSortMode");

	Params::WeaponCustomStorageView_C_SetSortMode Parms{};

	Parms.Param_Save_Type = Param_Save_Type;
	Parms.Param_Sort_Type_Category = Param_Sort_Type_Category;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.UpdateStorageData
// (Public, BlueprintCallable, BlueprintEvent)

void UWeaponCustomStorageView_C::UpdateStorageData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "UpdateStorageData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetHoverdStorage
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomStorageView_C::SetHoverdStorage(bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "SetHoverdStorage");

	Params::WeaponCustomStorageView_C_SetHoverdStorage Parms{};

	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.SetHoverdBag
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomStorageView_C::SetHoverdBag(bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "SetHoverdBag");

	Params::WeaponCustomStorageView_C_SetHoverdBag Parms{};

	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponCustomStorageView.WeaponCustomStorageView_C.IsBag
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    Param_IsBag_                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponCustomStorageView_C::IsBag(bool* Param_IsBag_) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponCustomStorageView_C", "IsBag");

	Params::WeaponCustomStorageView_C_IsBag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsBag_ != nullptr)
		*Param_IsBag_ = Parms.Param_IsBag_;
}

}


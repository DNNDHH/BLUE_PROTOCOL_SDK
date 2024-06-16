#pragma once

 

// Package: SortBox

#include "Basic.hpp"

#include "SortBox_classes.hpp"
#include "SortBox_parameters.hpp"


namespace SDK
{

// Function SortBox.SortBox_C.OnSelectSortType__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USortBox_C::OnSelectSortType__DelegateSignature(ESBItemSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "OnSelectSortType__DelegateSignature");

	Params::SortBox_C_OnSelectSortType__DelegateSignature Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SortBox.SortBox_C.ExecuteUbergraph_SortBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USortBox_C::ExecuteUbergraph_SortBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "ExecuteUbergraph_SortBox");

	Params::SortBox_C_ExecuteUbergraph_SortBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SortBox.SortBox_C.BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USortBox_C::BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::SortBox_C_BndEvt__Cmb_Drop_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SortBox.SortBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USortBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SortBox.SortBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USortBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "PreConstruct");

	Params::SortBox_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SortBox.SortBox_C.On_Cmb_Drop_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* USortBox_C::On_Cmb_Drop_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "On_Cmb_Drop_GenerateWidget_0");

	Params::SortBox_C_On_Cmb_Drop_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SortBox.SortBox_C.GetSortType
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBItemSortType                         OutSortType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USortBox_C::GetSortType(ESBItemSortType* OutSortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "GetSortType");

	Params::SortBox_C_GetSortType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSortType != nullptr)
		*OutSortType = Parms.OutSortType;
}


// Function SortBox.SortBox_C.RemoveOption
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         InOptionType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USortBox_C::RemoveOption(ESBItemSortType InOptionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "RemoveOption");

	Params::SortBox_C_RemoveOption Parms{};

	Parms.InOptionType = InOptionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SortBox.SortBox_C.GenerateOptions
// (Private, BlueprintCallable, BlueprintEvent)

void USortBox_C::GenerateOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "GenerateOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SortBox.SortBox_C.LoadOptions
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void USortBox_C::LoadOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "LoadOptions");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SortBox.SortBox_C.SetSortType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSortFilterSaveType                   Param_SaveType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESortTypeCategory                       Param_SortTypeCategory                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USortBox_C::SetSortType(ESBSortFilterSaveType Param_SaveType, ESortTypeCategory Param_SortTypeCategory)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "SetSortType");

	Params::SortBox_C_SetSortType Parms{};

	Parms.Param_SaveType = Param_SaveType;
	Parms.Param_SortTypeCategory = Param_SortTypeCategory;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SortBox.SortBox_C.SetSelectedSortType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         InSortType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USortBox_C::SetSelectedSortType(ESBItemSortType InSortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "SetSelectedSortType");

	Params::SortBox_C_SetSelectedSortType Parms{};

	Parms.InSortType = InSortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SortBox.SortBox_C.GetSortTextId
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TextId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USortBox_C::GetSortTextId(ESBItemSortType Param_SortType, int32* TextId) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SortBox_C", "GetSortTextId");

	Params::SortBox_C_GetSortTextId Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);

	if (TextId != nullptr)
		*TextId = Parms.TextId;
}

}


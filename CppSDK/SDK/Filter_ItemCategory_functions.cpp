#pragma once

 

// Package: Filter_ItemCategory

#include "Basic.hpp"

#include "Filter_ItemCategory_classes.hpp"
#include "Filter_ItemCategory_parameters.hpp"


namespace SDK
{

// Function Filter_ItemCategory.Filter_ItemCategory_C.ExecuteUbergraph_Filter_ItemCategory
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_ItemCategory_C::ExecuteUbergraph_Filter_ItemCategory(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ItemCategory_C", "ExecuteUbergraph_Filter_ItemCategory");

	Params::Filter_ItemCategory_C_ExecuteUbergraph_Filter_ItemCategory Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ItemCategory.Filter_ItemCategory_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFilterRadioButton_C*             RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_ItemCategory_C::BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ItemCategory_C", "BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature");

	Params::Filter_ItemCategory_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_1_SelectButton__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ItemCategory.Filter_ItemCategory_C.ResetAll
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFilter_ItemCategory_C::ResetAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ItemCategory_C", "ResetAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_ItemCategory.Filter_ItemCategory_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFilter_ItemCategory_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ItemCategory_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_ItemCategory.Filter_ItemCategory_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilter_ItemCategory_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ItemCategory_C", "PreConstruct");

	Params::Filter_ItemCategory_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_ItemCategory.Filter_ItemCategory_C.Gen
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilter_ItemCategory_C::Gen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_ItemCategory_C", "Gen");

	UObject::ProcessEvent(Func, nullptr);
}

}

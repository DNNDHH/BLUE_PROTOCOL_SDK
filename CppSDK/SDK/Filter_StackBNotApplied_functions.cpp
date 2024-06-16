#pragma once

 

// Package: Filter_StackBNotApplied

#include "Basic.hpp"

#include "Filter_StackBNotApplied_classes.hpp"
#include "Filter_StackBNotApplied_parameters.hpp"


namespace SDK
{

// Function Filter_StackBNotApplied.Filter_StackBNotApplied_C.ExecuteUbergraph_Filter_StackBNotApplied
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_StackBNotApplied_C::ExecuteUbergraph_Filter_StackBNotApplied(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_StackBNotApplied_C", "ExecuteUbergraph_Filter_StackBNotApplied");

	Params::Filter_StackBNotApplied_C_ExecuteUbergraph_Filter_StackBNotApplied Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_StackBNotApplied.Filter_StackBNotApplied_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFilterRadioButton_C*             RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_StackBNotApplied_C::BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_StackBNotApplied_C", "BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");

	Params::Filter_StackBNotApplied_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_StackBNotApplied.Filter_StackBNotApplied_C.ResetAll
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFilter_StackBNotApplied_C::ResetAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_StackBNotApplied_C", "ResetAll");

	UObject::ProcessEvent(Func, nullptr);
}

}


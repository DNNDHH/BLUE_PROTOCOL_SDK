#pragma once

 

// Package: Filter_SlotNum

#include "Basic.hpp"

#include "Filter_SlotNum_classes.hpp"
#include "Filter_SlotNum_parameters.hpp"


namespace SDK
{

// Function Filter_SlotNum.Filter_SlotNum_C.ExecuteUbergraph_Filter_SlotNum
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_SlotNum_C::ExecuteUbergraph_Filter_SlotNum(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_SlotNum_C", "ExecuteUbergraph_Filter_SlotNum");

	Params::Filter_SlotNum_C_ExecuteUbergraph_Filter_SlotNum Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_SlotNum.Filter_SlotNum_C.ResetAll
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFilter_SlotNum_C::ResetAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_SlotNum_C", "ResetAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_SlotNum.Filter_SlotNum_C.BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFilterRadioButton_C*             RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_SlotNum_C::BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_SlotNum_C", "BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");

	Params::Filter_SlotNum_C_BndEvt__FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}


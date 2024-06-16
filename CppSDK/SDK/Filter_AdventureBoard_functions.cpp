#pragma once

 

// Package: Filter_AdventureBoard

#include "Basic.hpp"

#include "Filter_AdventureBoard_classes.hpp"
#include "Filter_AdventureBoard_parameters.hpp"


namespace SDK
{

// Function Filter_AdventureBoard.Filter_AdventureBoard_C.ExecuteUbergraph_Filter_AdventureBoard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_AdventureBoard_C::ExecuteUbergraph_Filter_AdventureBoard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_AdventureBoard_C", "ExecuteUbergraph_Filter_AdventureBoard");

	Params::Filter_AdventureBoard_C_ExecuteUbergraph_Filter_AdventureBoard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_AdventureBoard.Filter_AdventureBoard_C.ResetAll
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UFilter_AdventureBoard_C::ResetAll()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_AdventureBoard_C", "ResetAll");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_AdventureBoard.Filter_AdventureBoard_C.BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    IsChecked                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFilterRadioButton_C*             RadioButton                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFilter_AdventureBoard_C::BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature(bool IsChecked, class UFilterRadioButton_C* RadioButton, int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_AdventureBoard_C", "BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature");

	Params::Filter_AdventureBoard_C_BndEvt__Filter_AdventureBoard_FilterRadioButtons_K2Node_ComponentBoundEvent_0_SelectButton__DelegateSignature Parms{};

	Parms.IsChecked = IsChecked;
	Parms.RadioButton = RadioButton;
	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Filter_AdventureBoard.Filter_AdventureBoard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFilter_AdventureBoard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_AdventureBoard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_AdventureBoard.Filter_AdventureBoard_C.CreateFilterList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFilter_AdventureBoard_C::CreateFilterList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_AdventureBoard_C", "CreateFilterList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Filter_AdventureBoard.Filter_AdventureBoard_C.IsFilterActive
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsActive                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFilter_AdventureBoard_C::IsFilterActive(int32 InIndex, bool* IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Filter_AdventureBoard_C", "IsFilterActive");

	Params::Filter_AdventureBoard_C_IsFilterActive Parms{};

	Parms.InIndex = InIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (IsActive != nullptr)
		*IsActive = Parms.IsActive;
}

}


#pragma once

 

// Package: ProbabilityDisplayButton

#include "Basic.hpp"

#include "ProbabilityDisplayButton_classes.hpp"
#include "ProbabilityDisplayButton_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.OnClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UProbabilityDisplayButton_C::OnClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplayButton_C", "OnClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.ExecuteUbergraph_ProbabilityDisplayButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProbabilityDisplayButton_C::ExecuteUbergraph_ProbabilityDisplayButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplayButton_C", "ExecuteUbergraph_ProbabilityDisplayButton");

	Params::ProbabilityDisplayButton_C_ExecuteUbergraph_ProbabilityDisplayButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UProbabilityDisplayButton_C::BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplayButton_C", "BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UProbabilityDisplayButton_C::BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplayButton_C", "BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UProbabilityDisplayButton_C::BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplayButton_C", "BndEvt__ProbabilityDisplayButton_SBButton_C_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProbabilityDisplayButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplayButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProbabilityDisplayButton.ProbabilityDisplayButton_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProbabilityDisplayButton_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplayButton_C", "SetBtnSelected");

	Params::ProbabilityDisplayButton_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}


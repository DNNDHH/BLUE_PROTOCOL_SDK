#pragma once

 

// Package: Fang_expedition_BreakButton1

#include "Basic.hpp"

#include "Fang_expedition_BreakButton1_classes.hpp"
#include "Fang_expedition_BreakButton1_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.OnPressButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_BreakButton1_C::OnPressButton__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton1_C", "OnPressButton__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.ExecuteUbergraph_Fang_expedition_BreakButton1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_BreakButton1_C::ExecuteUbergraph_Fang_expedition_BreakButton1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton1_C", "ExecuteUbergraph_Fang_expedition_BreakButton1");

	Params::Fang_expedition_BreakButton1_C_ExecuteUbergraph_Fang_expedition_BreakButton1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.BndEvt__Fang_expedition_BreakButton1_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_BreakButton1_C::BndEvt__Fang_expedition_BreakButton1_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton1_C", "BndEvt__Fang_expedition_BreakButton1_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.SetCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_BreakButton1_C::SetCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton1_C", "SetCount");

	Params::Fang_expedition_BreakButton1_C_SetCount Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_BreakButton1.Fang_expedition_BreakButton1_C.SetButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_BreakButton1_C::SetButtonEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton1_C", "SetButtonEnabled");

	Params::Fang_expedition_BreakButton1_C_SetButtonEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

}


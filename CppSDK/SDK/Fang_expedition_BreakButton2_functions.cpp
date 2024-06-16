#pragma once

 

// Package: Fang_expedition_BreakButton2

#include "Basic.hpp"

#include "Fang_expedition_BreakButton2_classes.hpp"
#include "Fang_expedition_BreakButton2_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.OnButtonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_BreakButton2_C::OnButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton2_C", "OnButtonClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.ExecuteUbergraph_Fang_expedition_BreakButton2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_BreakButton2_C::ExecuteUbergraph_Fang_expedition_BreakButton2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton2_C", "ExecuteUbergraph_Fang_expedition_BreakButton2");

	Params::Fang_expedition_BreakButton2_C_ExecuteUbergraph_Fang_expedition_BreakButton2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.BndEvt__Fang_expedition_BreakButton2_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_BreakButton2_C::BndEvt__Fang_expedition_BreakButton2_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton2_C", "BndEvt__Fang_expedition_BreakButton2_CmnBtn16_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_BreakButton2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_BreakButton2_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton2_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_BreakButton2.Fang_expedition_BreakButton2_C.SetButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enabled                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_BreakButton2_C::SetButtonEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_BreakButton2_C", "SetButtonEnabled");

	Params::Fang_expedition_BreakButton2_C_SetButtonEnabled Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: CmnBack01

#include "Basic.hpp"

#include "CmnBack01_classes.hpp"
#include "CmnBack01_parameters.hpp"


namespace SDK
{

// Function CmnBack01.CmnBack01_C.EventClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCmnBack01_C::EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBack01_C", "EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBack01.CmnBack01_C.ExecuteUbergraph_CmnBack01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnBack01_C::ExecuteUbergraph_CmnBack01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBack01_C", "ExecuteUbergraph_CmnBack01");

	Params::CmnBack01_C_ExecuteUbergraph_CmnBack01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnBack01.CmnBack01_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UCmnBack01_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBack01_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBack01.CmnBack01_C.BndEvt__BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UCmnBack01_C::BndEvt__BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBack01_C", "BndEvt__BtnClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBack01.CmnBack01_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnBack01_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBack01_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnBack01.CmnBack01_C.UpdateEscText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UCmnBack01_C::UpdateEscText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnBack01_C", "UpdateEscText");

	UObject::ProcessEvent(Func, nullptr);
}

}


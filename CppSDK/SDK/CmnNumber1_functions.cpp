#pragma once

 

// Package: CmnNumber1

#include "Basic.hpp"

#include "CmnNumber1_classes.hpp"
#include "CmnNumber1_parameters.hpp"


namespace SDK
{

// Function CmnNumber1.CmnNumber1_C.ExecuteUbergraph_CmnNumber1
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnNumber1_C::ExecuteUbergraph_CmnNumber1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnNumber1_C", "ExecuteUbergraph_CmnNumber1");

	Params::CmnNumber1_C_ExecuteUbergraph_CmnNumber1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnNumber1.CmnNumber1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnNumber1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnNumber1_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnNumber1.CmnNumber1_C.SetNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnNumber1_C::SetNumber(int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnNumber1_C", "SetNumber");

	Params::CmnNumber1_C_SetNumber Parms{};

	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}

}


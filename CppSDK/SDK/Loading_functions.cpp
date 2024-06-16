#pragma once

 

// Package: Loading

#include "Basic.hpp"

#include "Loading_classes.hpp"
#include "Loading_parameters.hpp"


namespace SDK
{

// Function Loading.Loading_C.ExecuteUbergraph_Loading
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoading_C::ExecuteUbergraph_Loading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Loading_C", "ExecuteUbergraph_Loading");

	Params::Loading_C_ExecuteUbergraph_Loading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Loading.Loading_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoading_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Loading_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


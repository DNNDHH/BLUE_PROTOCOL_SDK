#pragma once

 

// Package: BP_PerformanceCheckComponent

#include "Basic.hpp"

#include "BP_PerformanceCheckComponent_classes.hpp"
#include "BP_PerformanceCheckComponent_parameters.hpp"


namespace SDK
{

// Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.ExecuteUbergraph_BP_PerformanceCheckComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PerformanceCheckComponent_C::ExecuteUbergraph_BP_PerformanceCheckComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCheckComponent_C", "ExecuteUbergraph_BP_PerformanceCheckComponent");

	Params::BP_PerformanceCheckComponent_C_ExecuteUbergraph_BP_PerformanceCheckComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.OnPerformanceCheckStart
// (Event, Public, BlueprintEvent)

void UBP_PerformanceCheckComponent_C::OnPerformanceCheckStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCheckComponent_C", "OnPerformanceCheckStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.OnPerformanceCheckStop
// (Event, Public, BlueprintEvent)

void UBP_PerformanceCheckComponent_C::OnPerformanceCheckStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCheckComponent_C", "OnPerformanceCheckStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.PerformanceCheckEvent
// (BlueprintCallable, BlueprintEvent)

void UBP_PerformanceCheckComponent_C::PerformanceCheckEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCheckComponent_C", "PerformanceCheckEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerformanceCheckComponent.BP_PerformanceCheckComponent_C.GenerateFilename
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Direction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_PerformanceCheckComponent_C::GenerateFilename(const class FString& Direction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCheckComponent_C", "GenerateFilename");

	Params::BP_PerformanceCheckComponent_C_GenerateFilename Parms{};

	Parms.Direction = std::move(Direction);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

 

// Package: BP_NowLoading

#include "Basic.hpp"

#include "BP_NowLoading_classes.hpp"
#include "BP_NowLoading_parameters.hpp"


namespace SDK
{

// Function BP_NowLoading.BP_NowLoading_C.ExecuteUbergraph_BP_NowLoading
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NowLoading_C::ExecuteUbergraph_BP_NowLoading(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NowLoading_C", "ExecuteUbergraph_BP_NowLoading");

	Params::BP_NowLoading_C_ExecuteUbergraph_BP_NowLoading Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_NowLoading.BP_NowLoading_C.StopAnim
// (BlueprintCallable, BlueprintEvent)

void UBP_NowLoading_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NowLoading_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_NowLoading.BP_NowLoading_C.StartAnim
// (BlueprintCallable, BlueprintEvent)

void UBP_NowLoading_C::StartAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NowLoading_C", "StartAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}


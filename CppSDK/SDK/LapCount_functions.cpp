#pragma once

 

// Package: LapCount

#include "Basic.hpp"

#include "LapCount_classes.hpp"
#include "LapCount_parameters.hpp"


namespace SDK
{

// Function LapCount.LapCount_C.ExecuteUbergraph_LapCount
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULapCount_C::ExecuteUbergraph_LapCount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LapCount_C", "ExecuteUbergraph_LapCount");

	Params::LapCount_C_ExecuteUbergraph_LapCount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LapCount.LapCount_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULapCount_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LapCount_C", "PreConstruct");

	Params::LapCount_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LapCount.LapCount_C.SetLapCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULapCount_C::SetLapCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LapCount_C", "SetLapCount");

	Params::LapCount_C_SetLapCount Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

}


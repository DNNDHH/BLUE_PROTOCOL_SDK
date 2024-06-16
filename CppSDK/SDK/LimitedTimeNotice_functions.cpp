#pragma once

 

// Package: LimitedTimeNotice

#include "Basic.hpp"

#include "LimitedTimeNotice_classes.hpp"
#include "LimitedTimeNotice_parameters.hpp"


namespace SDK
{

// Function LimitedTimeNotice.LimitedTimeNotice_C.ExecuteUbergraph_LimitedTimeNotice
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULimitedTimeNotice_C::ExecuteUbergraph_LimitedTimeNotice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LimitedTimeNotice_C", "ExecuteUbergraph_LimitedTimeNotice");

	Params::LimitedTimeNotice_C_ExecuteUbergraph_LimitedTimeNotice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LimitedTimeNotice.LimitedTimeNotice_C.Update
// (BlueprintCallable, BlueprintEvent)

void ULimitedTimeNotice_C::Update()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LimitedTimeNotice_C", "Update");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LimitedTimeNotice.LimitedTimeNotice_C.Set Limited Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InEndTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULimitedTimeNotice_C::Set_Limited_Time(const struct FDateTime& InEndTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LimitedTimeNotice_C", "Set Limited Time");

	Params::LimitedTimeNotice_C_Set_Limited_Time Parms{};

	Parms.InEndTime = std::move(InEndTime);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: CmnImageThrobber

#include "Basic.hpp"

#include "CmnImageThrobber_classes.hpp"
#include "CmnImageThrobber_parameters.hpp"


namespace SDK
{

// Function CmnImageThrobber.CmnImageThrobber_C.ExecuteUbergraph_CmnImageThrobber
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnImageThrobber_C::ExecuteUbergraph_CmnImageThrobber(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnImageThrobber_C", "ExecuteUbergraph_CmnImageThrobber");

	Params::CmnImageThrobber_C_ExecuteUbergraph_CmnImageThrobber Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnImageThrobber.CmnImageThrobber_C.StopAnim
// (BlueprintCallable, BlueprintEvent)

void UCmnImageThrobber_C::StopAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnImageThrobber_C", "StopAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnImageThrobber.CmnImageThrobber_C.StartAnim
// (BlueprintCallable, BlueprintEvent)

void UCmnImageThrobber_C::StartAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnImageThrobber_C", "StartAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnImageThrobber.CmnImageThrobber_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnImageThrobber_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnImageThrobber_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


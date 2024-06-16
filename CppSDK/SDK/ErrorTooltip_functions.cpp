#pragma once

 

// Package: ErrorTooltip

#include "Basic.hpp"

#include "ErrorTooltip_classes.hpp"
#include "ErrorTooltip_parameters.hpp"


namespace SDK
{

// Function ErrorTooltip.ErrorTooltip_C.ExecuteUbergraph_ErrorTooltip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorTooltip_C::ExecuteUbergraph_ErrorTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorTooltip_C", "ExecuteUbergraph_ErrorTooltip");

	Params::ErrorTooltip_C_ExecuteUbergraph_ErrorTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ErrorTooltip.ErrorTooltip_C.SetErrorType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGuildErrorDisplay                      Param_ErrorType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UErrorTooltip_C::SetErrorType(EGuildErrorDisplay Param_ErrorType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorTooltip_C", "SetErrorType");

	Params::ErrorTooltip_C_SetErrorType Parms{};

	Parms.Param_ErrorType = Param_ErrorType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ErrorTooltip.ErrorTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UErrorTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ErrorTooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


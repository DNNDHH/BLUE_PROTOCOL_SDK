#pragma once

 

// Package: Activity_AcceptEntry

#include "Basic.hpp"

#include "Activity_AcceptEntry_classes.hpp"
#include "Activity_AcceptEntry_parameters.hpp"


namespace SDK
{

// Function Activity_AcceptEntry.Activity_AcceptEntry_C.ExecuteUbergraph_Activity_AcceptEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivity_AcceptEntry_C::ExecuteUbergraph_Activity_AcceptEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_AcceptEntry_C", "ExecuteUbergraph_Activity_AcceptEntry");

	Params::Activity_AcceptEntry_C_ExecuteUbergraph_Activity_AcceptEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_AcceptEntry.Activity_AcceptEntry_C.OnClickedLink
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Keys                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   Values                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_AcceptEntry_C::OnClickedLink(const TArray<class FString>& Keys, const TArray<class FString>& Values)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_AcceptEntry_C", "OnClickedLink");

	Params::Activity_AcceptEntry_C_OnClickedLink Parms{};

	Parms.Keys = std::move(Keys);
	Parms.Values = std::move(Values);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_AcceptEntry.Activity_AcceptEntry_C.SetActivity_Internal
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGuildActivity                   Other                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_AcceptEntry_C::SetActivity_Internal(const struct FGuildActivity& Other)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_AcceptEntry_C", "SetActivity_Internal");

	Params::Activity_AcceptEntry_C_SetActivity_Internal Parms{};

	Parms.Other = std::move(Other);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_AcceptEntry.Activity_AcceptEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActivity_AcceptEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_AcceptEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


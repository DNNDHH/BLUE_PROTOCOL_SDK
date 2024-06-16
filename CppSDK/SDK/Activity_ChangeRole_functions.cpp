#pragma once

 

// Package: Activity_ChangeRole

#include "Basic.hpp"

#include "Activity_ChangeRole_classes.hpp"
#include "Activity_ChangeRole_parameters.hpp"


namespace SDK
{

// Function Activity_ChangeRole.Activity_ChangeRole_C.ExecuteUbergraph_Activity_ChangeRole
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivity_ChangeRole_C::ExecuteUbergraph_Activity_ChangeRole(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_ChangeRole_C", "ExecuteUbergraph_Activity_ChangeRole");

	Params::Activity_ChangeRole_C_ExecuteUbergraph_Activity_ChangeRole Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_ChangeRole.Activity_ChangeRole_C.�������_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Keys                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   Values                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_ChangeRole_C::_________0(const TArray<class FString>& Keys, const TArray<class FString>& Values)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_ChangeRole_C", "�������_0");

	Params::Activity_ChangeRole_C__________0 Parms{};

	Parms.Keys = std::move(Keys);
	Parms.Values = std::move(Values);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_ChangeRole.Activity_ChangeRole_C.SetActivity_Internal
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGuildActivity                   Other                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_ChangeRole_C::SetActivity_Internal(const struct FGuildActivity& Other)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_ChangeRole_C", "SetActivity_Internal");

	Params::Activity_ChangeRole_C_SetActivity_Internal Parms{};

	Parms.Other = std::move(Other);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_ChangeRole.Activity_ChangeRole_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActivity_ChangeRole_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_ChangeRole_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


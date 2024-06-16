#pragma once

 

// Package: BP_PlayerLevelStartSequence_CheckMailAcceptLimit

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequence_CheckMailAcceptLimit_classes.hpp"
#include "BP_PlayerLevelStartSequence_CheckMailAcceptLimit_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C", "ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit");

	Params::BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.PreStart
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::PreStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C", "PreStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.OnSynced
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSyncd                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::OnSynced(bool bIsSyncd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C", "OnSynced");

	Params::BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced Parms{};

	Parms.bIsSyncd = bIsSyncd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.FinishSequence
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::FinishSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C", "FinishSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.GetDescription
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C::GetDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C", "GetDescription");

	Params::BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


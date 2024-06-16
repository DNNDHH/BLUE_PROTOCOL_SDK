#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskCharacterJoinExt

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskCharacterJoinExt_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskCharacterJoinExt_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt");

	Params::BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.OnAPICompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::OnAPICompleted(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C", "OnAPICompleted");

	Params::BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.TryRequestAPI
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::TryRequestAPI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C", "TryRequestAPI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.RequestAPI_Internal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C::RequestAPI_Internal(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C", "RequestAPI_Internal");

	Params::BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}

}


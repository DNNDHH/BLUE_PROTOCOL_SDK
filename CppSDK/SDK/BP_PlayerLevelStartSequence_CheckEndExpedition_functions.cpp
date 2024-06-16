#pragma once

 

// Package: BP_PlayerLevelStartSequence_CheckEndExpedition

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequence_CheckEndExpedition_classes.hpp"
#include "BP_PlayerLevelStartSequence_CheckEndExpedition_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckEndExpedition_C", "ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition");

	Params::BP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckEndExpedition_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.CompleteWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   IdCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::CompleteWork(bool WasSuccessful, int32 ErrorCode, int32 IdCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckEndExpedition_C", "CompleteWork");

	Params::BP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.ErrorCode = ErrorCode;
	Parms.IdCount = IdCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.FinishSequence
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::FinishSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckEndExpedition_C", "FinishSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.OnLoaded_D99C7E054941241745424DB27741E175
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::OnLoaded_D99C7E054941241745424DB27741E175(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckEndExpedition_C", "OnLoaded_D99C7E054941241745424DB27741E175");

	Params::BP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.GetDescription
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_PlayerLevelStartSequence_CheckEndExpedition_C::GetDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckEndExpedition_C", "GetDescription");

	Params::BP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequence_CheckEndExpedition_C::SetMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckEndExpedition_C", "SetMessage");

	UObject::ProcessEvent(Func, nullptr);
}

}


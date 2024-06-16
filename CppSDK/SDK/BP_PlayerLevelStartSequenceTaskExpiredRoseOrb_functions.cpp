#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskExpiredRoseOrb

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb");

	Params::BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.�������_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Result                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCryptoCurrency                Cryptocurrency                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::_________0(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C", "�������_0");

	Params::BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__________0 Parms{};

	Parms.Result = Result;
	Parms.RetCode = RetCode;
	Parms.Cryptocurrency = std::move(Cryptocurrency);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCheckRequest
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFinish                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::ActiveCheckRequest(bool IsFinish)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C", "ActiveCheckRequest");

	Params::BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest Parms{};

	Parms.IsFinish = IsFinish;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.GetDetailWork
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::GetDetailWork(const bool bWasSuccessful, const int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C", "GetDetailWork");

	Params::BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCompletefunc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C::ActiveCompletefunc(const bool bWasSuccessful, const int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C", "ActiveCompletefunc");

	Params::BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}

}


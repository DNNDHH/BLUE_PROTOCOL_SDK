#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskRankingRewardResult

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskRankingRewardResult_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskRankingRewardResult_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskRankingRewardResult_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult");

	Params::BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.PreStart
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::PreStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskRankingRewardResult_C", "PreStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.CustomEvent_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBRankingRewardData>     RankingRewardDataList                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::CustomEvent_0(const int32 InRetCode, const TArray<struct FSBRankingRewardData>& RankingRewardDataList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskRankingRewardResult_C", "CustomEvent_0");

	Params::BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_0 Parms{};

	Parms.InRetCode = InRetCode;
	Parms.RankingRewardDataList = std::move(RankingRewardDataList);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.CustomEvent_2
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::CustomEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskRankingRewardResult_C", "CustomEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskRankingRewardResult_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.OnLoaded_581557924E9E2085AFE4E7A014C633C1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>              Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C::OnLoaded_581557924E9E2085AFE4E7A014C633C1(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskRankingRewardResult_C", "OnLoaded_581557924E9E2085AFE4E7A014C633C1");

	Params::BP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}


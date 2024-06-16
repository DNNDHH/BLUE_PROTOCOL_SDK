#pragma once

 

// Package: RankingRewardResult

#include "Basic.hpp"

#include "RankingRewardResult_classes.hpp"
#include "RankingRewardResult_parameters.hpp"


namespace SDK
{

// Function RankingRewardResult.RankingRewardResult_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URankingRewardResult_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardResult.RankingRewardResult_C.ExecuteUbergraph_RankingRewardResult
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingRewardResult_C::ExecuteUbergraph_RankingRewardResult(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "ExecuteUbergraph_RankingRewardResult");

	Params::RankingRewardResult_C_ExecuteUbergraph_RankingRewardResult Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingRewardResult.RankingRewardResult_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URankingRewardResult_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardResult.RankingRewardResult_C.StartEnd
// (BlueprintCallable, BlueprintEvent)

void URankingRewardResult_C::StartEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "StartEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardResult.RankingRewardResult_C.TryShowReward
// (BlueprintCallable, BlueprintEvent)

void URankingRewardResult_C::TryShowReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "TryShowReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardResult.RankingRewardResult_C.SetRankingRewardData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBRankingRewardData>     InRankingReward                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void URankingRewardResult_C::SetRankingRewardData(const TArray<struct FSBRankingRewardData>& InRankingReward)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "SetRankingRewardData");

	Params::RankingRewardResult_C_SetRankingRewardData Parms{};

	Parms.InRankingReward = std::move(InRankingReward);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingRewardResult.RankingRewardResult_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)

void URankingRewardResult_C::CustomEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "CustomEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardResult.RankingRewardResult_C.StartResult
// (BlueprintCallable, BlueprintEvent)

void URankingRewardResult_C::StartResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "StartResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardResult.RankingRewardResult_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void URankingRewardResult_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardResult.RankingRewardResult_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URankingRewardResult_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardResult.RankingRewardResult_C.GetIdRewardsList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRankingRewardData               Param_RankingRewardData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FName>                     List                                                   (Parm, OutParm)

void URankingRewardResult_C::GetIdRewardsList(const struct FRankingRewardData& Param_RankingRewardData, TArray<class FName>* List)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardResult_C", "GetIdRewardsList");

	Params::RankingRewardResult_C_GetIdRewardsList Parms{};

	Parms.Param_RankingRewardData = std::move(Param_RankingRewardData);

	UObject::ProcessEvent(Func, &Parms);

	if (List != nullptr)
		*List = std::move(Parms.List);
}

}


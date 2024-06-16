#pragma once

 

// Package: RankingRewardMenu

#include "Basic.hpp"

#include "RankingRewardMenu_classes.hpp"
#include "RankingRewardMenu_parameters.hpp"


namespace SDK
{

// Function RankingRewardMenu.RankingRewardMenu_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void URankingRewardMenu_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardMenu.RankingRewardMenu_C.ExecuteUbergraph_RankingRewardMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingRewardMenu_C::ExecuteUbergraph_RankingRewardMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "ExecuteUbergraph_RankingRewardMenu");

	Params::RankingRewardMenu_C_ExecuteUbergraph_RankingRewardMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingRewardMenu.RankingRewardMenu_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void URankingRewardMenu_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardMenu.RankingRewardMenu_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void URankingRewardMenu_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardMenu.RankingRewardMenu_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature
// (BlueprintEvent)

void URankingRewardMenu_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardMenu.RankingRewardMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URankingRewardMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardMenu.RankingRewardMenu_C.SetRankingRewardData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRankingHistoryData              RankingHistoryData                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsTotallingEnd                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   InMyRank                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingRewardMenu_C::SetRankingRewardData(const struct FRankingHistoryData& RankingHistoryData, ESBClassType InClassType, bool IsTotallingEnd, int32 InMyRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "SetRankingRewardData");

	Params::RankingRewardMenu_C_SetRankingRewardData Parms{};

	Parms.RankingHistoryData = std::move(RankingHistoryData);
	Parms.InClassType = InClassType;
	Parms.IsTotallingEnd = IsTotallingEnd;
	Parms.InMyRank = InMyRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankingRewardMenu.RankingRewardMenu_C.ListInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void URankingRewardMenu_C::ListInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "ListInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RankingRewardMenu.RankingRewardMenu_C.TryGetItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URankingRewardItem_C*             Param_RankingRewardItem                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URankingRewardMenu_C::TryGetItem(class URankingRewardItem_C** Param_RankingRewardItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardMenu_C", "TryGetItem");

	Params::RankingRewardMenu_C_TryGetItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_RankingRewardItem != nullptr)
		*Param_RankingRewardItem = Parms.Param_RankingRewardItem;
}

}


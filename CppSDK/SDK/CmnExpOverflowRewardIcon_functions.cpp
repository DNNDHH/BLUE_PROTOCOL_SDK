#pragma once

 

// Package: CmnExpOverflowRewardIcon

#include "Basic.hpp"

#include "CmnExpOverflowRewardIcon_classes.hpp"
#include "CmnExpOverflowRewardIcon_parameters.hpp"


namespace SDK
{

// Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.ExecuteUbergraph_CmnExpOverflowRewardIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnExpOverflowRewardIcon_C::ExecuteUbergraph_CmnExpOverflowRewardIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnExpOverflowRewardIcon_C", "ExecuteUbergraph_CmnExpOverflowRewardIcon");

	Params::CmnExpOverflowRewardIcon_C_ExecuteUbergraph_CmnExpOverflowRewardIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnExpOverflowRewardIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnExpOverflowRewardIcon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.SetIconType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsClassLevelCounterStop                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsClassLevelLimit                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsClassLevelLimitSmallerThanCounterStop             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsNoTooltip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnExpOverflowRewardIcon_C::SetIconType(bool bInIsClassLevelCounterStop, bool bInIsClassLevelLimit, bool bInIsClassLevelLimitSmallerThanCounterStop, bool bInIsNoTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnExpOverflowRewardIcon_C", "SetIconType");

	Params::CmnExpOverflowRewardIcon_C_SetIconType Parms{};

	Parms.bInIsClassLevelCounterStop = bInIsClassLevelCounterStop;
	Parms.bInIsClassLevelLimit = bInIsClassLevelLimit;
	Parms.bInIsClassLevelLimitSmallerThanCounterStop = bInIsClassLevelLimitSmallerThanCounterStop;
	Parms.bInIsNoTooltip = bInIsNoTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnExpOverflowRewardIcon.CmnExpOverflowRewardIcon_C.CreateTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInUpdateTooltip                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bInIsNoTooltip                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnExpOverflowRewardIcon_C::CreateTooltip(bool bInUpdateTooltip, bool bInIsNoTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnExpOverflowRewardIcon_C", "CreateTooltip");

	Params::CmnExpOverflowRewardIcon_C_CreateTooltip Parms{};

	Parms.bInUpdateTooltip = bInUpdateTooltip;
	Parms.bInIsNoTooltip = bInIsNoTooltip;

	UObject::ProcessEvent(Func, &Parms);
}

}


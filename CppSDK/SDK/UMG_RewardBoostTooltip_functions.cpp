#pragma once

 

// Package: UMG_RewardBoostTooltip

#include "Basic.hpp"

#include "UMG_RewardBoostTooltip_classes.hpp"
#include "UMG_RewardBoostTooltip_parameters.hpp"


namespace SDK
{

// Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.ExecuteUbergraph_UMG_RewardBoostTooltip
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RewardBoostTooltip_C::ExecuteUbergraph_UMG_RewardBoostTooltip(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_RewardBoostTooltip_C", "ExecuteUbergraph_UMG_RewardBoostTooltip");

	Params::UMG_RewardBoostTooltip_C_ExecuteUbergraph_UMG_RewardBoostTooltip Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_RewardBoostTooltip_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_RewardBoostTooltip_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_RewardBoostTooltip.UMG_RewardBoostTooltip_C.SetDataList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBRewardBoostTooltipData>DataList                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_RewardBoostTooltip_C::SetDataList(TArray<struct FSBRewardBoostTooltipData>& DataList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_RewardBoostTooltip_C", "SetDataList");

	Params::UMG_RewardBoostTooltip_C_SetDataList Parms{};

	Parms.DataList = std::move(DataList);

	UObject::ProcessEvent(Func, &Parms);

	DataList = std::move(Parms.DataList);
}

}


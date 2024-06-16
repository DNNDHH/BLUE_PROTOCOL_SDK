#pragma once

 

// Package: RankingRewardItem

#include "Basic.hpp"

#include "RankingRewardItem_classes.hpp"
#include "RankingRewardItem_parameters.hpp"


namespace SDK
{

// Function RankingRewardItem.RankingRewardItem_C.SetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRankingRewardData               RankingRewardData                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    TotallingEnd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Trophy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URankingRewardItem_C::SetData(const struct FRankingRewardData& RankingRewardData, bool TotallingEnd, bool Trophy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankingRewardItem_C", "SetData");

	Params::RankingRewardItem_C_SetData Parms{};

	Parms.RankingRewardData = std::move(RankingRewardData);
	Parms.TotallingEnd = TotallingEnd;
	Parms.Trophy = Trophy;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: RewardIconItem

#include "Basic.hpp"

#include "RewardIconItem_classes.hpp"
#include "RewardIconItem_parameters.hpp"


namespace SDK
{

// Function RewardIconItem.RewardIconItem_C.SetRewardData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterReward                  InMasterReward                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                                   SwitchId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URewardIconItem_C::SetRewardData(const struct FSBMasterReward& InMasterReward, int32 SwitchId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RewardIconItem_C", "SetRewardData");

	Params::RewardIconItem_C_SetRewardData Parms{};

	Parms.InMasterReward = std::move(InMasterReward);
	Parms.SwitchId = SwitchId;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: UMG_RewardBoostTooltopElement

#include "Basic.hpp"

#include "UMG_RewardBoostTooltopElement_classes.hpp"
#include "UMG_RewardBoostTooltopElement_parameters.hpp"


namespace SDK
{

// Function UMG_RewardBoostTooltopElement.UMG_RewardBoostTooltopElement_C.ExecuteUbergraph_UMG_RewardBoostTooltopElement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RewardBoostTooltopElement_C::ExecuteUbergraph_UMG_RewardBoostTooltopElement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_RewardBoostTooltopElement_C", "ExecuteUbergraph_UMG_RewardBoostTooltopElement");

	Params::UMG_RewardBoostTooltopElement_C_ExecuteUbergraph_UMG_RewardBoostTooltopElement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_RewardBoostTooltopElement.UMG_RewardBoostTooltopElement_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBRewardBoostTooltipData        Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_RewardBoostTooltopElement_C::SetData(const struct FSBRewardBoostTooltipData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_RewardBoostTooltopElement_C", "SetData");

	Params::UMG_RewardBoostTooltopElement_C_SetData Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: ProbabilityDisplay_Fang_expeditionListItem

#include "Basic.hpp"

#include "ProbabilityDisplay_Fang_expeditionListItem_classes.hpp"
#include "ProbabilityDisplay_Fang_expeditionListItem_parameters.hpp"


namespace SDK
{

// Function ProbabilityDisplay_Fang_expeditionListItem.ProbabilityDisplay_Fang_expeditionListItem_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FangCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionRandomRewardDataData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UProbabilityDisplay_Fang_expeditionListItem_C::SetData(int32 FangCount, const struct FSBFang_expeditionRandomRewardData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProbabilityDisplay_Fang_expeditionListItem_C", "SetData");

	Params::ProbabilityDisplay_Fang_expeditionListItem_C_SetData Parms{};

	Parms.FangCount = FangCount;
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: Fang_expedition_DetailReleaseConditions

#include "Basic.hpp"

#include "Fang_expedition_DetailReleaseConditions_classes.hpp"
#include "Fang_expedition_DetailReleaseConditions_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailReleaseConditions.Fang_expedition_DetailReleaseConditions_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionLimitData      LimitData                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DetailReleaseConditions_C::SetData(const struct FSBFang_expeditionLimitData& LimitData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailReleaseConditions_C", "SetData");

	Params::Fang_expedition_DetailReleaseConditions_C_SetData Parms{};

	Parms.LimitData = std::move(LimitData);

	UObject::ProcessEvent(Func, &Parms);
}

}


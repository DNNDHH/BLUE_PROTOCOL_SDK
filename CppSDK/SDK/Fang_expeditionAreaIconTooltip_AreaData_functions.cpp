#pragma once

 

// Package: Fang_expeditionAreaIconTooltip_AreaData

#include "Basic.hpp"

#include "Fang_expeditionAreaIconTooltip_AreaData_classes.hpp"
#include "Fang_expeditionAreaIconTooltip_AreaData_parameters.hpp"


namespace SDK
{

// Function Fang_expeditionAreaIconTooltip_AreaData.Fang_expeditionAreaIconTooltip_AreaData_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFang_expeditionStatus                Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           AreaName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    TimeLimited                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expeditionAreaIconTooltip_AreaData_C::SetData(ESBFang_expeditionStatus Status, const class FString& AreaName, bool TimeLimited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expeditionAreaIconTooltip_AreaData_C", "SetData");

	Params::Fang_expeditionAreaIconTooltip_AreaData_C_SetData Parms{};

	Parms.Status = Status;
	Parms.AreaName = std::move(AreaName);
	Parms.TimeLimited = TimeLimited;

	UObject::ProcessEvent(Func, &Parms);
}

}


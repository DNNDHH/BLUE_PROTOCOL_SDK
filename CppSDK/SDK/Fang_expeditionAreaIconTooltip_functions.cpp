#pragma once

 

// Package: Fang_expeditionAreaIconTooltip

#include "Basic.hpp"

#include "Fang_expeditionAreaIconTooltip_classes.hpp"
#include "Fang_expeditionAreaIconTooltip_parameters.hpp"


namespace SDK
{

// Function Fang_expeditionAreaIconTooltip.Fang_expeditionAreaIconTooltip_C.AddData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFang_expeditionStatus                Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           AreaName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Limited                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expeditionAreaIconTooltip_C::AddData(ESBFang_expeditionStatus Status, const class FString& AreaName, bool Limited)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expeditionAreaIconTooltip_C", "AddData");

	Params::Fang_expeditionAreaIconTooltip_C_AddData Parms{};

	Parms.Status = Status;
	Parms.AreaName = std::move(AreaName);
	Parms.Limited = Limited;

	UObject::ProcessEvent(Func, &Parms);
}

}


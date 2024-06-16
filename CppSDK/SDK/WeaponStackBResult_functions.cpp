#pragma once

 

// Package: WeaponStackBResult

#include "Basic.hpp"

#include "WeaponStackBResult_classes.hpp"
#include "WeaponStackBResult_parameters.hpp"


namespace SDK
{

// Function WeaponStackBResult.WeaponStackBResult_C.SetBeforeData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_beforeData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponStackBResult_C::SetBeforeData(const struct FOwnItemInfo& Param_beforeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponStackBResult_C", "SetBeforeData");

	Params::WeaponStackBResult_C_SetBeforeData Parms{};

	Parms.Param_beforeData = std::move(Param_beforeData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponStackBResult.WeaponStackBResult_C.SetAfterData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_AfterData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponStackBResult_C::SetAfterData(const struct FOwnItemInfo& Param_AfterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponStackBResult_C", "SetAfterData");

	Params::WeaponStackBResult_C_SetAfterData Parms{};

	Parms.Param_AfterData = std::move(Param_AfterData);

	UObject::ProcessEvent(Func, &Parms);
}

}


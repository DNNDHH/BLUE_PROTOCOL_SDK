#pragma once

 

// Package: LapCountItem

#include "Basic.hpp"

#include "LapCountItem_classes.hpp"
#include "LapCountItem_parameters.hpp"


namespace SDK
{

// Function LapCountItem.LapCountItem_C.SetCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULapCountItem_C::SetCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LapCountItem_C", "SetCount");

	Params::LapCountItem_C_SetCount Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}

}


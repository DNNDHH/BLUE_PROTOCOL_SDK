#pragma once

 

// Package: WBP_ScbValueItem

#include "Basic.hpp"

#include "WBP_ScbValueItem_classes.hpp"
#include "WBP_ScbValueItem_parameters.hpp"


namespace SDK
{

// Function WBP_ScbValueItem.WBP_ScbValueItem_C.ExecuteUbergraph_WBP_ScbValueItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbValueItem_C::ExecuteUbergraph_WBP_ScbValueItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbValueItem_C", "ExecuteUbergraph_WBP_ScbValueItem");

	Params::WBP_ScbValueItem_C_ExecuteUbergraph_WBP_ScbValueItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbValueItem.WBP_ScbValueItem_C.SetValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbValueItem_C::SetValue(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbValueItem_C", "SetValue");

	Params::WBP_ScbValueItem_C_SetValue Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}


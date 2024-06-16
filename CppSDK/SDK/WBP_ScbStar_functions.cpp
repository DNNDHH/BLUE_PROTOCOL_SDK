#pragma once

 

// Package: WBP_ScbStar

#include "Basic.hpp"

#include "WBP_ScbStar_classes.hpp"
#include "WBP_ScbStar_parameters.hpp"


namespace SDK
{

// Function WBP_ScbStar.WBP_ScbStar_C.ExecuteUbergraph_WBP_ScbStar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbStar_C::ExecuteUbergraph_WBP_ScbStar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbStar_C", "ExecuteUbergraph_WBP_ScbStar");

	Params::WBP_ScbStar_C_ExecuteUbergraph_WBP_ScbStar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbStar.WBP_ScbStar_C.SetActive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ScbStar_C::SetActive(bool Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbStar_C", "SetActive");

	Params::WBP_ScbStar_C_SetActive Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}

}


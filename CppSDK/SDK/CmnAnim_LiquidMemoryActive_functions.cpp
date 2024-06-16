#pragma once

 

// Package: CmnAnim_LiquidMemoryActive

#include "Basic.hpp"

#include "CmnAnim_LiquidMemoryActive_classes.hpp"
#include "CmnAnim_LiquidMemoryActive_parameters.hpp"


namespace SDK
{

// Function CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C.ExecuteUbergraph_CmnAnim_LiquidMemoryActive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnAnim_LiquidMemoryActive_C::ExecuteUbergraph_CmnAnim_LiquidMemoryActive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_LiquidMemoryActive_C", "ExecuteUbergraph_CmnAnim_LiquidMemoryActive");

	Params::CmnAnim_LiquidMemoryActive_C_ExecuteUbergraph_CmnAnim_LiquidMemoryActive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnAnim_LiquidMemoryActive.CmnAnim_LiquidMemoryActive_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCmnAnim_LiquidMemoryActive_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnAnim_LiquidMemoryActive_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


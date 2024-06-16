#pragma once

 

// Package: GashaMenu_ProductListRateLine

#include "Basic.hpp"

#include "GashaMenu_ProductListRateLine_classes.hpp"
#include "GashaMenu_ProductListRateLine_parameters.hpp"


namespace SDK
{

// Function GashaMenu_ProductListRateLine.GashaMenu_ProductListRateLine_C.ExecuteUbergraph_GashaMenu_ProductListRateLine
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaMenu_ProductListRateLine_C::ExecuteUbergraph_GashaMenu_ProductListRateLine(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_ProductListRateLine_C", "ExecuteUbergraph_GashaMenu_ProductListRateLine");

	Params::GashaMenu_ProductListRateLine_C_ExecuteUbergraph_GashaMenu_ProductListRateLine Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaMenu_ProductListRateLine.GashaMenu_ProductListRateLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGashaMenu_ProductListRateLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_ProductListRateLine_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


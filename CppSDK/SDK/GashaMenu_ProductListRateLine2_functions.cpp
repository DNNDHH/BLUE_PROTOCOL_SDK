#pragma once

 

// Package: GashaMenu_ProductListRateLine2

#include "Basic.hpp"

#include "GashaMenu_ProductListRateLine2_classes.hpp"
#include "GashaMenu_ProductListRateLine2_parameters.hpp"


namespace SDK
{

// Function GashaMenu_ProductListRateLine2.GashaMenu_ProductListRateLine2_C.ExecuteUbergraph_GashaMenu_ProductListRateLine2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGashaMenu_ProductListRateLine2_C::ExecuteUbergraph_GashaMenu_ProductListRateLine2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_ProductListRateLine2_C", "ExecuteUbergraph_GashaMenu_ProductListRateLine2");

	Params::GashaMenu_ProductListRateLine2_C_ExecuteUbergraph_GashaMenu_ProductListRateLine2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GashaMenu_ProductListRateLine2.GashaMenu_ProductListRateLine2_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGashaMenu_ProductListRateLine2_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GashaMenu_ProductListRateLine2_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


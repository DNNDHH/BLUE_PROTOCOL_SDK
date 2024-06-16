#pragma once

 

// Package: Fang_expedition_StatusFinishIconAnm

#include "Basic.hpp"

#include "Fang_expedition_StatusFinishIconAnm_classes.hpp"
#include "Fang_expedition_StatusFinishIconAnm_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C.ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_StatusFinishIconAnm_C::ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusFinishIconAnm_C", "ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm");

	Params::Fang_expedition_StatusFinishIconAnm_C_ExecuteUbergraph_Fang_expedition_StatusFinishIconAnm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_StatusFinishIconAnm.Fang_expedition_StatusFinishIconAnm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_StatusFinishIconAnm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusFinishIconAnm_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


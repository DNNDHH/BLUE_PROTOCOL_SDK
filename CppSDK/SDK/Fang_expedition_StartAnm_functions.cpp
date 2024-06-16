#pragma once

 

// Package: Fang_expedition_StartAnm

#include "Basic.hpp"

#include "Fang_expedition_StartAnm_classes.hpp"
#include "Fang_expedition_StartAnm_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_StartAnm.Fang_expedition_StartAnm_C.ExecuteUbergraph_Fang_expedition_StartAnm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_StartAnm_C::ExecuteUbergraph_Fang_expedition_StartAnm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StartAnm_C", "ExecuteUbergraph_Fang_expedition_StartAnm");

	Params::Fang_expedition_StartAnm_C_ExecuteUbergraph_Fang_expedition_StartAnm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_StartAnm.Fang_expedition_StartAnm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_StartAnm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StartAnm_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


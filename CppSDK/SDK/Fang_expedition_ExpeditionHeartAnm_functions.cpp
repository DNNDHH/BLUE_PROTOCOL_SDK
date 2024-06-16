#pragma once

 

// Package: Fang_expedition_ExpeditionHeartAnm

#include "Basic.hpp"

#include "Fang_expedition_ExpeditionHeartAnm_classes.hpp"
#include "Fang_expedition_ExpeditionHeartAnm_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_ExpeditionHeartAnm_C::ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_ExpeditionHeartAnm_C", "ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm");

	Params::Fang_expedition_ExpeditionHeartAnm_C_ExecuteUbergraph_Fang_expedition_ExpeditionHeartAnm Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_ExpeditionHeartAnm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_ExpeditionHeartAnm_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_ExpeditionHeartAnm.Fang_expedition_ExpeditionHeartAnm_C.SetIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bVisible                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_ExpeditionHeartAnm_C::SetIconVisibility(bool Param_bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_ExpeditionHeartAnm_C", "SetIconVisibility");

	Params::Fang_expedition_ExpeditionHeartAnm_C_SetIconVisibility Parms{};

	Parms.Param_bVisible = Param_bVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}


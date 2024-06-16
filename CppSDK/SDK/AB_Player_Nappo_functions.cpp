#pragma once

 

// Package: AB_Player_Nappo

#include "Basic.hpp"

#include "AB_Player_Nappo_classes.hpp"
#include "AB_Player_Nappo_parameters.hpp"


namespace SDK
{

// Function AB_Player_Nappo.AB_Player_Nappo_C.ExecuteUbergraph_AB_Player_Nappo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_Player_Nappo_C::ExecuteUbergraph_AB_Player_Nappo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Nappo_C", "ExecuteUbergraph_AB_Player_Nappo");

	Params::AB_Player_Nappo_C_ExecuteUbergraph_AB_Player_Nappo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_Player_Nappo.AB_Player_Nappo_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_Player_Nappo_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_Player_Nappo_C", "AnimGraph");

	Params::AB_Player_Nappo_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


#pragma once

 

// Package: AB_AccessoryAnimBlueprint

#include "Basic.hpp"

#include "AB_AccessoryAnimBlueprint_classes.hpp"
#include "AB_AccessoryAnimBlueprint_parameters.hpp"


namespace SDK
{

// Function AB_AccessoryAnimBlueprint.AB_AccessoryAnimBlueprint_C.ExecuteUbergraph_AB_AccessoryAnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_AccessoryAnimBlueprint_C::ExecuteUbergraph_AB_AccessoryAnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_AccessoryAnimBlueprint_C", "ExecuteUbergraph_AB_AccessoryAnimBlueprint");

	Params::AB_AccessoryAnimBlueprint_C_ExecuteUbergraph_AB_AccessoryAnimBlueprint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_AccessoryAnimBlueprint.AB_AccessoryAnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_AccessoryAnimBlueprint_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_AccessoryAnimBlueprint_C", "AnimGraph");

	Params::AB_AccessoryAnimBlueprint_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


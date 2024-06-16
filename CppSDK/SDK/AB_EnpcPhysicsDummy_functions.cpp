#pragma once

 

// Package: AB_EnpcPhysicsDummy

#include "Basic.hpp"

#include "AB_EnpcPhysicsDummy_classes.hpp"
#include "AB_EnpcPhysicsDummy_parameters.hpp"


namespace SDK
{

// Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.ExecuteUbergraph_AB_EnpcPhysicsDummy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_EnpcPhysicsDummy_C::ExecuteUbergraph_AB_EnpcPhysicsDummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EnpcPhysicsDummy_C", "ExecuteUbergraph_AB_EnpcPhysicsDummy");

	Params::AB_EnpcPhysicsDummy_C_ExecuteUbergraph_AB_EnpcPhysicsDummy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_EnpcPhysicsDummy.AB_EnpcPhysicsDummy_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_EnpcPhysicsDummy_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_EnpcPhysicsDummy_C", "AnimGraph");

	Params::AB_EnpcPhysicsDummy_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


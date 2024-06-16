#pragma once

 

// Package: AB_PhysicDummy

#include "Basic.hpp"

#include "AB_PhysicDummy_classes.hpp"
#include "AB_PhysicDummy_parameters.hpp"


namespace SDK
{

// Function AB_PhysicDummy.AB_PhysicDummy_C.ExecuteUbergraph_AB_PhysicDummy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_PhysicDummy_C::ExecuteUbergraph_AB_PhysicDummy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PhysicDummy_C", "ExecuteUbergraph_AB_PhysicDummy");

	Params::AB_PhysicDummy_C_ExecuteUbergraph_AB_PhysicDummy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_PhysicDummy.AB_PhysicDummy_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_PhysicDummy_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_PhysicDummy_C", "AnimGraph");

	Params::AB_PhysicDummy_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


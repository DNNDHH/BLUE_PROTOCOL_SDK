#pragma once

 

// Package: AB_HumanoidEnemy

#include "Basic.hpp"

#include "AB_HumanoidEnemy_classes.hpp"
#include "AB_HumanoidEnemy_parameters.hpp"


namespace SDK
{

// Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.ExecuteUbergraph_AB_HumanoidEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_HumanoidEnemy_C::ExecuteUbergraph_AB_HumanoidEnemy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_HumanoidEnemy_C", "ExecuteUbergraph_AB_HumanoidEnemy");

	Params::AB_HumanoidEnemy_C_ExecuteUbergraph_AB_HumanoidEnemy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAB_HumanoidEnemy_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_HumanoidEnemy_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_HumanoidEnemy.AB_HumanoidEnemy_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_HumanoidEnemy_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_HumanoidEnemy_C", "AnimGraph");

	Params::AB_HumanoidEnemy_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


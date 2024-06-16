#pragma once

 

// Package: AB_CommonNPC

#include "Basic.hpp"

#include "AB_CommonNPC_classes.hpp"
#include "AB_CommonNPC_parameters.hpp"


namespace SDK
{

// Function AB_CommonNPC.AB_CommonNPC_C.ExecuteUbergraph_AB_CommonNPC
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_CommonNPC_C::ExecuteUbergraph_AB_CommonNPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CommonNPC_C", "ExecuteUbergraph_AB_CommonNPC");

	Params::AB_CommonNPC_C_ExecuteUbergraph_AB_CommonNPC Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_CommonNPC.AB_CommonNPC_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_CommonNPC_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CommonNPC_C", "BlueprintUpdateAnimation");

	Params::AB_CommonNPC_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_CommonNPC.AB_CommonNPC_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAB_CommonNPC_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CommonNPC_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_CommonNPC.AB_CommonNPC_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_CommonNPC_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_CommonNPC_C", "AnimGraph");

	Params::AB_CommonNPC_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}


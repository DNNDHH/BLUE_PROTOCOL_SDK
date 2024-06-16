#pragma once

 

// Package: AB_ExtraNPC_Common_Demo

#include "Basic.hpp"

#include "AB_ExtraNPC_Common_Demo_classes.hpp"
#include "AB_ExtraNPC_Common_Demo_parameters.hpp"


namespace SDK
{

// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.ExecuteUbergraph_AB_ExtraNPC_Common_Demo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_ExtraNPC_Common_Demo_C::ExecuteUbergraph_AB_ExtraNPC_Common_Demo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_ExtraNPC_Common_Demo_C", "ExecuteUbergraph_AB_ExtraNPC_Common_Demo");

	Params::AB_ExtraNPC_Common_Demo_C_ExecuteUbergraph_AB_ExtraNPC_Common_Demo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UAB_ExtraNPC_Common_Demo_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_ExtraNPC_Common_Demo_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTimeX                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAB_ExtraNPC_Common_Demo_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_ExtraNPC_Common_Demo_C", "BlueprintUpdateAnimation");

	Params::AB_ExtraNPC_Common_Demo_C_BlueprintUpdateAnimation Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);
}


// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811
// (BlueprintEvent)

void UAB_ExtraNPC_Common_Demo_C::EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_ExtraNPC_Common_Demo_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_AB_ExtraNPC_Common_Demo_AnimGraphNode_LayeredBoneBlend_0F69395E4C7BF0B1A9E39E81E7A73811");

	UObject::ProcessEvent(Func, nullptr);
}


// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UAB_ExtraNPC_Common_Demo_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_ExtraNPC_Common_Demo_C", "AnimGraph");

	Params::AB_ExtraNPC_Common_Demo_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function AB_ExtraNPC_Common_Demo.AB_ExtraNPC_Common_Demo_C.HairLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                          Acceralation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                        Param_HairLayer                                        (Parm, OutParm, NoDestructor)

void UAB_ExtraNPC_Common_Demo_C::HairLayer(const struct FPoseLink& InPose, const struct FVector& Acceralation, bool Active, struct FPoseLink* Param_HairLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AB_ExtraNPC_Common_Demo_C", "HairLayer");

	Params::AB_ExtraNPC_Common_Demo_C_HairLayer Parms{};

	Parms.InPose = std::move(InPose);
	Parms.Acceralation = std::move(Acceralation);
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HairLayer != nullptr)
		*Param_HairLayer = std::move(Parms.Param_HairLayer);
}

}


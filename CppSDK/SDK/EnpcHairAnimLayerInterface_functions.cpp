#pragma once

 

// Package: EnpcHairAnimLayerInterface

#include "Basic.hpp"

#include "EnpcHairAnimLayerInterface_classes.hpp"
#include "EnpcHairAnimLayerInterface_parameters.hpp"


namespace SDK
{

// Function EnpcHairAnimLayerInterface.EnpcHairAnimLayerInterface_C.HairLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FVector                          Acceralation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Active                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                        Param_HairLayer                                        (Parm, OutParm, NoDestructor)

void IEnpcHairAnimLayerInterface_C::HairLayer(const struct FPoseLink& InPose, const struct FVector& Acceralation, bool Active, struct FPoseLink* Param_HairLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EnpcHairAnimLayerInterface_C", "HairLayer");

	Params::EnpcHairAnimLayerInterface_C_HairLayer Parms{};

	Parms.InPose = std::move(InPose);
	Parms.Acceralation = std::move(Acceralation);
	Parms.Active = Active;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_HairLayer != nullptr)
		*Param_HairLayer = std::move(Parms.Param_HairLayer);
}

}


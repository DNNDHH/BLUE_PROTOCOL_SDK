#pragma once

 

// Package: AnimNotify_BP_FootPrintLocomotion

#include "Basic.hpp"

#include "AnimNotify_BP_FootPrintLocomotion_classes.hpp"
#include "AnimNotify_BP_FootPrintLocomotion_parameters.hpp"


namespace SDK
{

// Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_BP_FootPrintLocomotion_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintLocomotion_C", "Received_Notify");

	Params::AnimNotify_BP_FootPrintLocomotion_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.GetFootprintType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USBFootprintComponent*            FPComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EFootPrintType                          FootPrintType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnimNotify_BP_FootPrintLocomotion_C::GetFootprintType(class USBFootprintComponent* FPComponent, EFootPrintType* FootPrintType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintLocomotion_C", "GetFootprintType");

	Params::AnimNotify_BP_FootPrintLocomotion_C_GetFootprintType Parms{};

	Parms.FPComponent = FPComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (FootPrintType != nullptr)
		*FootPrintType = Parms.FootPrintType;
}


// Function AnimNotify_BP_FootPrintLocomotion.AnimNotify_BP_FootPrintLocomotion_C.IsLocomotion
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UAnimNotify_BP_FootPrintLocomotion_C::IsLocomotion() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("AnimNotify_BP_FootPrintLocomotion_C", "IsLocomotion");

	Params::AnimNotify_BP_FootPrintLocomotion_C_IsLocomotion Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

 

// Package: BP_CampDeactivateStatusAliment

#include "Basic.hpp"

#include "BP_CampDeactivateStatusAliment_classes.hpp"
#include "BP_CampDeactivateStatusAliment_parameters.hpp"


namespace SDK
{

// Function BP_CampDeactivateStatusAliment.BP_CampDeactivateStatusAliment_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_CampDeactivateStatusAliment_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampDeactivateStatusAliment_C", "Received_Notify");

	Params::BP_CampDeactivateStatusAliment_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_CampDeactivateStatusAliment.BP_CampDeactivateStatusAliment_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_CampDeactivateStatusAliment_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CampDeactivateStatusAliment_C", "GetNotifyName");

	Params::BP_CampDeactivateStatusAliment_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


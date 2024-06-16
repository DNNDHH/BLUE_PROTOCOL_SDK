#pragma once

 

// Package: BP_SetNPCWaitStance

#include "Basic.hpp"

#include "BP_SetNPCWaitStance_classes.hpp"
#include "BP_SetNPCWaitStance_parameters.hpp"


namespace SDK
{

// Function BP_SetNPCWaitStance.BP_SetNPCWaitStance_C.Received_Notify
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_SetNPCWaitStance_C::Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetNPCWaitStance_C", "Received_Notify");

	Params::BP_SetNPCWaitStance_C_Received_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_SetNPCWaitStance.BP_SetNPCWaitStance_C.GetNotifyName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_SetNPCWaitStance_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SetNPCWaitStance_C", "GetNotifyName");

	Params::BP_SetNPCWaitStance_C_GetNotifyName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


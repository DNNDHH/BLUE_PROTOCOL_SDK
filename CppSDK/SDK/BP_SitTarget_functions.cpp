#pragma once

 

// Package: BP_SitTarget

#include "Basic.hpp"

#include "BP_SitTarget_classes.hpp"
#include "BP_SitTarget_parameters.hpp"


namespace SDK
{

// Function BP_SitTarget.BP_SitTarget_C.ExecuteUbergraph_BP_SitTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SitTarget_C::ExecuteUbergraph_BP_SitTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SitTarget_C", "ExecuteUbergraph_BP_SitTarget");

	Params::BP_SitTarget_C_ExecuteUbergraph_BP_SitTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SitTarget.BP_SitTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SitTarget_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SitTarget_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SitTarget.BP_SitTarget_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SitTarget_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SitTarget_C", "ReceiveEndPlay");

	Params::BP_SitTarget_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SitTarget.BP_SitTarget_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SitTarget_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SitTarget_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SitTarget.BP_SitTarget_C.Get Interaction Target Component
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBInteractionTargetComponent*    Comp                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SitTarget_C::Get_Interaction_Target_Component(class USBInteractionTargetComponent** Comp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SitTarget_C", "Get Interaction Target Component");

	Params::BP_SitTarget_C_Get_Interaction_Target_Component Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Comp != nullptr)
		*Comp = Parms.Comp;
}


// Function BP_SitTarget.BP_SitTarget_C.GetSitTargetSoundType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// ESBSitTargetSoundType                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESBSitTargetSoundType ABP_SitTarget_C::GetSitTargetSoundType() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SitTarget_C", "GetSitTargetSoundType");

	Params::BP_SitTarget_C_GetSitTargetSoundType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


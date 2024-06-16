#pragma once

 

// Package: UD_NpcCanWander

#include "Basic.hpp"

#include "UD_NpcCanWander_classes.hpp"
#include "UD_NpcCanWander_parameters.hpp"


namespace SDK
{

// Function UD_NpcCanWander.UD_NpcCanWander_C.ExecuteUbergraph_UD_NpcCanWander
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUD_NpcCanWander_C::ExecuteUbergraph_UD_NpcCanWander(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UD_NpcCanWander_C", "ExecuteUbergraph_UD_NpcCanWander");

	Params::UD_NpcCanWander_C_ExecuteUbergraph_UD_NpcCanWander Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UD_NpcCanWander.UD_NpcCanWander_C.OnWanderingModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bCanWander                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUD_NpcCanWander_C::OnWanderingModeChanged(bool bCanWander)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UD_NpcCanWander_C", "OnWanderingModeChanged");

	Params::UD_NpcCanWander_C_OnWanderingModeChanged Parms{};

	Parms.bCanWander = bCanWander;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveInitialize
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBUtilityBrainComponent*         OwnerComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUD_NpcCanWander_C::ReceiveInitialize(class USBUtilityBrainComponent* OwnerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UD_NpcCanWander_C", "ReceiveInitialize");

	Params::UD_NpcCanWander_C_ReceiveInitialize Parms{};

	Parms.OwnerComponent = OwnerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UD_NpcCanWander.UD_NpcCanWander_C.ReceiveFetchValue
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUD_NpcCanWander_C::ReceiveFetchValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UD_NpcCanWander_C", "ReceiveFetchValue");

	Params::UD_NpcCanWander_C_ReceiveFetchValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

 

// Package: UD_IsEnableNpcTalk

#include "Basic.hpp"

#include "UD_IsEnableNpcTalk_classes.hpp"
#include "UD_IsEnableNpcTalk_parameters.hpp"


namespace SDK
{

// Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ExecuteUbergraph_UD_IsEnableNpcTalk
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUD_IsEnableNpcTalk_C::ExecuteUbergraph_UD_IsEnableNpcTalk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UD_IsEnableNpcTalk_C", "ExecuteUbergraph_UD_IsEnableNpcTalk");

	Params::UD_IsEnableNpcTalk_C_ExecuteUbergraph_UD_IsEnableNpcTalk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveInitialize
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USBUtilityBrainComponent*         OwnerComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUD_IsEnableNpcTalk_C::ReceiveInitialize(class USBUtilityBrainComponent* OwnerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UD_IsEnableNpcTalk_C", "ReceiveInitialize");

	Params::UD_IsEnableNpcTalk_C_ReceiveInitialize Parms{};

	Parms.OwnerComponent = OwnerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UD_IsEnableNpcTalk.UD_IsEnableNpcTalk_C.ReceiveFetchValue
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUD_IsEnableNpcTalk_C::ReceiveFetchValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UD_IsEnableNpcTalk_C", "ReceiveFetchValue");

	Params::UD_IsEnableNpcTalk_C_ReceiveFetchValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


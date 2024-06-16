#pragma once

 

// Package: BP_ScriptTheaterActor

#include "Basic.hpp"

#include "BP_ScriptTheaterActor_classes.hpp"
#include "BP_ScriptTheaterActor_parameters.hpp"


namespace SDK
{

// Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ExecuteUbergraph_BP_ScriptTheaterActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptTheaterActor_C::ExecuteUbergraph_BP_ScriptTheaterActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptTheaterActor_C", "ExecuteUbergraph_BP_ScriptTheaterActor");

	Params::BP_ScriptTheaterActor_C_ExecuteUbergraph_BP_ScriptTheaterActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_ScriptTheaterActor_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptTheaterActor_C", "ReceiveDestroyed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.OnDemoFinish_Theater
// (BlueprintCallable, BlueprintEvent)

void ABP_ScriptTheaterActor_C::OnDemoFinish_Theater()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptTheaterActor_C", "OnDemoFinish_Theater");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptTheaterActor.BP_ScriptTheaterActor_C.RequestPlayDemo_Theater
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InDemoName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptTheaterActor_C::RequestPlayDemo_Theater(class FName InDemoName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptTheaterActor_C", "RequestPlayDemo_Theater");

	Params::BP_ScriptTheaterActor_C_RequestPlayDemo_Theater Parms{};

	Parms.InDemoName = InDemoName;

	UObject::ProcessEvent(Func, &Parms);
}

}


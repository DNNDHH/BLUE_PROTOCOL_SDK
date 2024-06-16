#pragma once

 

// Package: FallDeadTriggerBox

#include "Basic.hpp"

#include "FallDeadTriggerBox_classes.hpp"
#include "FallDeadTriggerBox_parameters.hpp"


namespace SDK
{

// Function FallDeadTriggerBox.FallDeadTriggerBox_C.ExecuteUbergraph_FallDeadTriggerBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFallDeadTriggerBox_C::ExecuteUbergraph_FallDeadTriggerBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FallDeadTriggerBox_C", "ExecuteUbergraph_FallDeadTriggerBox");

	Params::FallDeadTriggerBox_C_ExecuteUbergraph_FallDeadTriggerBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FallDeadTriggerBox.FallDeadTriggerBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AFallDeadTriggerBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FallDeadTriggerBox_C", "ReceiveActorBeginOverlap");

	Params::FallDeadTriggerBox_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FallDeadTriggerBox.FallDeadTriggerBox_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFallDeadTriggerBox_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FallDeadTriggerBox_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FallDeadTriggerBox.FallDeadTriggerBox_C.SetStaticMeshScale
// (Public, BlueprintCallable, BlueprintEvent)

void AFallDeadTriggerBox_C::SetStaticMeshScale()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FallDeadTriggerBox_C", "SetStaticMeshScale");

	UObject::ProcessEvent(Func, nullptr);
}

}


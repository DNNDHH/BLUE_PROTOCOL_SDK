#pragma once

 

// Package: BP_PerformanceCameraActor

#include "Basic.hpp"

#include "BP_PerformanceCameraActor_classes.hpp"
#include "BP_PerformanceCameraActor_parameters.hpp"


namespace SDK
{

// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ExecuteUbergraph_BP_PerformanceCameraActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PerformanceCameraActor_C::ExecuteUbergraph_BP_PerformanceCameraActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCameraActor_C", "ExecuteUbergraph_BP_PerformanceCameraActor");

	Params::BP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.SetupSceneCapture
// (Event, Protected, BlueprintEvent)

void ABP_PerformanceCameraActor_C::SetupSceneCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCameraActor_C", "SetupSceneCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PerformanceCameraActor_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCameraActor_C", "ReceiveEndPlay");

	Params::BP_PerformanceCameraActor_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PerformanceCameraActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCameraActor_C", "ReceiveTick");

	Params::BP_PerformanceCameraActor_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.CreateScreenWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PerformanceCameraActor_C::CreateScreenWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCameraActor_C", "CreateScreenWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.GetShowActorList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>                   ShowList                                               (Parm, OutParm)

void ABP_PerformanceCameraActor_C::GetShowActorList(TArray<class AActor*>* ShowList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PerformanceCameraActor_C", "GetShowActorList");

	Params::BP_PerformanceCameraActor_C_GetShowActorList Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShowList != nullptr)
		*ShowList = std::move(Parms.ShowList);
}

}


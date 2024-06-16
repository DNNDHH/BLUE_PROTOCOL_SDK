#pragma once

 

// Package: MeshClimbingGuideComponent

#include "Basic.hpp"

#include "MeshClimbingGuideComponent_classes.hpp"
#include "MeshClimbingGuideComponent_parameters.hpp"


namespace SDK
{

// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ExecuteUbergraph_MeshClimbingGuideComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMeshClimbingGuideComponent_C::ExecuteUbergraph_MeshClimbingGuideComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshClimbingGuideComponent_C", "ExecuteUbergraph_MeshClimbingGuideComponent");

	Params::MeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMeshClimbingGuideComponent_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshClimbingGuideComponent_C", "ReceiveEndPlay");

	Params::MeshClimbingGuideComponent_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMeshClimbingGuideComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshClimbingGuideComponent_C", "ReceiveTick");

	Params::MeshClimbingGuideComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UMeshClimbingGuideComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshClimbingGuideComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.UpdateIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UMeshClimbingGuideComponent_C::UpdateIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshClimbingGuideComponent_C", "UpdateIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.UpdateIcon_Climbing
// (Public, BlueprintCallable, BlueprintEvent)

void UMeshClimbingGuideComponent_C::UpdateIcon_Climbing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshClimbingGuideComponent_C", "UpdateIcon_Climbing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.RemoveWidgets
// (Public, BlueprintCallable, BlueprintEvent)

void UMeshClimbingGuideComponent_C::RemoveWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshClimbingGuideComponent_C", "RemoveWidgets");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.InitializeAtFirstLoadingComplete
// (Public, BlueprintCallable, BlueprintEvent)

void UMeshClimbingGuideComponent_C::InitializeAtFirstLoadingComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MeshClimbingGuideComponent_C", "InitializeAtFirstLoadingComplete");

	UObject::ProcessEvent(Func, nullptr);
}

}


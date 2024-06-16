#pragma once

 

// Package: BP_SkyLightControlVolume

#include "Basic.hpp"

#include "BP_SkyLightControlVolume_classes.hpp"
#include "BP_SkyLightControlVolume_parameters.hpp"


namespace SDK
{

// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ExecuteUbergraph_BP_SkyLightControlVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkyLightControlVolume_C::ExecuteUbergraph_BP_SkyLightControlVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkyLightControlVolume_C", "ExecuteUbergraph_BP_SkyLightControlVolume");

	Params::BP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SkyLightControlEnable
// (BlueprintCallable, BlueprintEvent)

void ABP_SkyLightControlVolume_C::SkyLightControlEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkyLightControlVolume_C", "SkyLightControlEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkyLightControlVolume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkyLightControlVolume_C", "ReceiveActorEndOverlap");

	Params::BP_SkyLightControlVolume_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkyLightControlVolume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkyLightControlVolume_C", "ReceiveActorBeginOverlap");

	Params::BP_SkyLightControlVolume_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkyLightControlVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkyLightControlVolume_C", "ReceiveTick");

	Params::BP_SkyLightControlVolume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkyLightControlVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkyLightControlVolume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SkyLightControlVolume_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkyLightControlVolume_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SetAllPrimCollisions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CollisionProfileName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkyLightControlVolume_C::SetAllPrimCollisions(class FName CollisionProfileName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkyLightControlVolume_C", "SetAllPrimCollisions");

	Params::BP_SkyLightControlVolume_C_SetAllPrimCollisions Parms{};

	Parms.CollisionProfileName = CollisionProfileName;

	UObject::ProcessEvent(Func, &Parms);
}

}


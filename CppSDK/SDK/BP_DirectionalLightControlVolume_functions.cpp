#pragma once

 

// Package: BP_DirectionalLightControlVolume

#include "Basic.hpp"

#include "BP_DirectionalLightControlVolume_classes.hpp"
#include "BP_DirectionalLightControlVolume_parameters.hpp"


namespace SDK
{

// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ExecuteUbergraph_BP_DirectionalLightControlVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DirectionalLightControlVolume_C::ExecuteUbergraph_BP_DirectionalLightControlVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "ExecuteUbergraph_BP_DirectionalLightControlVolume");

	Params::BP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.VolumeDebugDraw
// (BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightControlVolume_C::VolumeDebugDraw()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "VolumeDebugDraw");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateLightParams
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Blend                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DirectionalLightControlVolume_C::UpdateLightParams(float Blend, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "UpdateLightParams");

	Params::BP_DirectionalLightControlVolume_C_UpdateLightParams Parms{};

	Parms.Blend = Blend;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DirectionalLightControlVolume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "ReceiveActorEndOverlap");

	Params::BP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DirectionalLightControlVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "ReceiveTick");

	Params::BP_DirectionalLightControlVolume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DirectionalLightControlVolume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "ReceiveActorBeginOverlap");

	Params::BP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DirectionalLightControlVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightControlVolume_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.GetNowTimeParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NowLightIntensity                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NowToonIntensityScale                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     NowLightColor                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DirectionalLightControlVolume_C::GetNowTimeParam(float TimeRate, float* NowLightIntensity, float* NowToonIntensityScale, struct FLinearColor* NowLightColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "GetNowTimeParam");

	Params::BP_DirectionalLightControlVolume_C_GetNowTimeParam Parms{};

	Parms.TimeRate = TimeRate;

	UObject::ProcessEvent(Func, &Parms);

	if (NowLightIntensity != nullptr)
		*NowLightIntensity = Parms.NowLightIntensity;

	if (NowToonIntensityScale != nullptr)
		*NowToonIntensityScale = Parms.NowToonIntensityScale;

	if (NowLightColor != nullptr)
		*NowLightColor = std::move(Parms.NowLightColor);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.CreateOutArea
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightControlVolume_C::CreateOutArea()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "CreateOutArea");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateBlendValue
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightControlVolume_C::UpdateBlendValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "UpdateBlendValue");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateEditorPreview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DirectionalLightControlVolume_C::UpdateEditorPreview()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DirectionalLightControlVolume_C", "UpdateEditorPreview");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

 

// Package: BP_FogControlVolume

#include "Basic.hpp"

#include "BP_FogControlVolume_classes.hpp"
#include "BP_FogControlVolume_parameters.hpp"


namespace SDK
{

// Function BP_FogControlVolume.BP_FogControlVolume_C.ExecuteUbergraph_BP_FogControlVolume
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControlVolume_C::ExecuteUbergraph_BP_FogControlVolume(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "ExecuteUbergraph_BP_FogControlVolume");

	Params::BP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.SetFogToDefault
// (BlueprintCallable, BlueprintEvent)

void ABP_FogControlVolume_C::SetFogToDefault()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "SetFogToDefault");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.SetFog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FogControlVolume_C*           FogControlVolume                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControlVolume_C::SetFog(class ABP_FogControlVolume_C* FogControlVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "SetFog");

	Params::BP_FogControlVolume_C_SetFog Parms{};

	Parms.FogControlVolume = FogControlVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.Fog Update In Editor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FogControlVolume_C*           ControlActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControlVolume_C::Fog_Update_In_Editor(class ABP_FogControlVolume_C* ControlActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "Fog Update In Editor");

	Params::BP_FogControlVolume_C_Fog_Update_In_Editor Parms{};

	Parms.ControlActor = ControlActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControlVolume_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "ReceiveActorEndOverlap");

	Params::BP_FogControlVolume_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControlVolume_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "ReceiveActorBeginOverlap");

	Params::BP_FogControlVolume_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControlVolume_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "ReceiveTick");

	Params::BP_FogControlVolume_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FogControlVolume_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FogControlVolume_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.SetAllPrimCollisions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CollisionProfileName                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControlVolume_C::SetAllPrimCollisions(class FName CollisionProfileName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "SetAllPrimCollisions");

	Params::BP_FogControlVolume_C_SetAllPrimCollisions Parms{};

	Parms.CollisionProfileName = CollisionProfileName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.UpdateEditorPreviewFlag
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NowStatus                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    StatusChange                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FogControlVolume_C::UpdateEditorPreviewFlag(bool* NowStatus, bool* StatusChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "UpdateEditorPreviewFlag");

	Params::BP_FogControlVolume_C_UpdateEditorPreviewFlag Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NowStatus != nullptr)
		*NowStatus = Parms.NowStatus;

	if (StatusChange != nullptr)
		*StatusChange = Parms.StatusChange;
}


// Function BP_FogControlVolume.BP_FogControlVolume_C.SetDefaultFogParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_FogControlVolume_C::SetDefaultFogParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControlVolume_C", "SetDefaultFogParam");

	UObject::ProcessEvent(Func, nullptr);
}

}


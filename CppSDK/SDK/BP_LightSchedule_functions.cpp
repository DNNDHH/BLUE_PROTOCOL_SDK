#pragma once

 

// Package: BP_LightSchedule

#include "Basic.hpp"

#include "BP_LightSchedule_classes.hpp"
#include "BP_LightSchedule_parameters.hpp"


namespace SDK
{

// Function BP_LightSchedule.BP_LightSchedule_C.ExecuteUbergraph_BP_LightSchedule
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightSchedule_C::ExecuteUbergraph_BP_LightSchedule(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightSchedule_C", "ExecuteUbergraph_BP_LightSchedule");

	Params::BP_LightSchedule_C_ExecuteUbergraph_BP_LightSchedule Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LightSchedule.BP_LightSchedule_C.InitEditorPreview
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_LightSchedule_C::InitEditorPreview(bool Sw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightSchedule_C", "InitEditorPreview");

	Params::BP_LightSchedule_C_InitEditorPreview Parms{};

	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LightSchedule.BP_LightSchedule_C.LightScheduleCompInitialize
// (BlueprintCallable, BlueprintEvent)

void ABP_LightSchedule_C::LightScheduleCompInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightSchedule_C", "LightScheduleCompInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LightSchedule.BP_LightSchedule_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_LightSchedule_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightSchedule_C", "ReceiveTick");

	Params::BP_LightSchedule_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_LightSchedule.BP_LightSchedule_C.SetLightSchedule
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void ABP_LightSchedule_C::SetLightSchedule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightSchedule_C", "SetLightSchedule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LightSchedule.BP_LightSchedule_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_LightSchedule_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightSchedule_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LightSchedule.BP_LightSchedule_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_LightSchedule_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightSchedule_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_LightSchedule.BP_LightSchedule_C.IsRandomLightMaterialCompInitialized
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_LightSchedule_C::IsRandomLightMaterialCompInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_LightSchedule_C", "IsRandomLightMaterialCompInitialized");

	UObject::ProcessEvent(Func, nullptr);
}

}


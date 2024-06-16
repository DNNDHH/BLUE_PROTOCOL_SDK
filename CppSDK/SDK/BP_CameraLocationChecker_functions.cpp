#pragma once

 

// Package: BP_CameraLocationChecker

#include "Basic.hpp"

#include "BP_CameraLocationChecker_classes.hpp"
#include "BP_CameraLocationChecker_parameters.hpp"


namespace SDK
{

// Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ExecuteUbergraph_BP_CameraLocationChecker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CameraLocationChecker_C::ExecuteUbergraph_BP_CameraLocationChecker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLocationChecker_C", "ExecuteUbergraph_BP_CameraLocationChecker");

	Params::BP_CameraLocationChecker_C_ExecuteUbergraph_BP_CameraLocationChecker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.CheckPostPorcessVolumeLUT
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaSecnd                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CameraLocationChecker_C::CheckPostPorcessVolumeLUT(float DeltaSecnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLocationChecker_C", "CheckPostPorcessVolumeLUT");

	Params::BP_CameraLocationChecker_C_CheckPostPorcessVolumeLUT Parms{};

	Parms.DeltaSecnd = DeltaSecnd;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.InitPostProcessLUT
// (BlueprintCallable, BlueprintEvent)

void ABP_CameraLocationChecker_C::InitPostProcessLUT()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLocationChecker_C", "InitPostProcessLUT");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CameraLocationChecker_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLocationChecker_C", "ReceiveTick");

	Params::BP_CameraLocationChecker_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CameraLocationChecker.BP_CameraLocationChecker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CameraLocationChecker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CameraLocationChecker_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


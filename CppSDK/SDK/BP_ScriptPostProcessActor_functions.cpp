#pragma once

 

// Package: BP_ScriptPostProcessActor

#include "Basic.hpp"

#include "BP_ScriptPostProcessActor_classes.hpp"
#include "BP_ScriptPostProcessActor_parameters.hpp"


namespace SDK
{

// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.OnDofTransitionFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ScriptPostProcessActor_C::OnDofTransitionFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptPostProcessActor_C", "OnDofTransitionFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ExecuteUbergraph_BP_ScriptPostProcessActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptPostProcessActor_C::ExecuteUbergraph_BP_ScriptPostProcessActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptPostProcessActor_C", "ExecuteUbergraph_BP_ScriptPostProcessActor");

	Params::BP_ScriptPostProcessActor_C_ExecuteUbergraph_BP_ScriptPostProcessActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptPostProcessActor_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptPostProcessActor_C", "ReceiveTick");

	Params::BP_ScriptPostProcessActor_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.ApplyDofSettings
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InSettingName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InTransitionTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ScriptPostProcessActor_C::ApplyDofSettings(class FName InSettingName, float InTransitionTime, bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptPostProcessActor_C", "ApplyDofSettings");

	Params::BP_ScriptPostProcessActor_C_ApplyDofSettings Parms{};

	Parms.InSettingName = InSettingName;
	Parms.InTransitionTime = InTransitionTime;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.Update_Internal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptPostProcessActor_C::Update_Internal(float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptPostProcessActor_C", "Update_Internal");

	Params::BP_ScriptPostProcessActor_C_Update_Internal Parms{};

	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ScriptPostProcessActor.BP_ScriptPostProcessActor_C.GetTimeRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   TimeRate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ScriptPostProcessActor_C::GetTimeRate(float* TimeRate) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ScriptPostProcessActor_C", "GetTimeRate");

	Params::BP_ScriptPostProcessActor_C_GetTimeRate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TimeRate != nullptr)
		*TimeRate = Parms.TimeRate;
}

}


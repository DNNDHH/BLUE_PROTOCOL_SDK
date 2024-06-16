#pragma once

 

// Package: BP_GatherPointTarget

#include "Basic.hpp"

#include "BP_GatherPointTarget_classes.hpp"
#include "BP_GatherPointTarget_parameters.hpp"


namespace SDK
{

// Function BP_GatherPointTarget.BP_GatherPointTarget_C.ExecuteUbergraph_BP_GatherPointTarget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherPointTarget_C::ExecuteUbergraph_BP_GatherPointTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "ExecuteUbergraph_BP_GatherPointTarget");

	Params::BP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherPointTarget_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "ReceiveTick");

	Params::BP_GatherPointTarget_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.MotionEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GatherPointTarget_C::MotionEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "MotionEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.OnGatherPointEnableDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsElable                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GatherPointTarget_C::OnGatherPointEnableDelegate(const bool IsElable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "OnGatherPointEnableDelegate");

	Params::BP_GatherPointTarget_C_OnGatherPointEnableDelegate Parms{};

	Parms.IsElable = IsElable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.PostInteractPoint
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBGatherPointLotResult                 Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGatherPointLotResult>    LotResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABP_GatherPointTarget_C::PostInteractPoint(ESBGatherPointLotResult Result, const TArray<struct FGatherPointLotResult>& LotResults)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "PostInteractPoint");

	Params::BP_GatherPointTarget_C_PostInteractPoint Parms{};

	Parms.Result = Result;
	Parms.LotResults = std::move(LotResults);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.InteractPoint
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void ABP_GatherPointTarget_C::InteractPoint(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "InteractPoint");

	Params::BP_GatherPointTarget_C_InteractPoint Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.Disappear
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GatherPointTarget_C::Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.Appear
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NotSpawnEffect                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GatherPointTarget_C::Appear(const bool NotSpawnEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "Appear");

	Params::BP_GatherPointTarget_C_Appear Parms{};

	Parms.NotSpawnEffect = NotSpawnEffect;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GatherPointTarget_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GatherPointTarget_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetParticleSystemVisibleParam
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GatherPointTarget_C::SetParticleSystemVisibleParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "SetParticleSystemVisibleParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetVisualHeight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          ParticleHeight                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          InteractCursorHeight                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GatherPointTarget_C::SetVisualHeight(const struct FVector& ParticleHeight, const struct FVector& InteractCursorHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GatherPointTarget_C", "SetVisualHeight");

	Params::BP_GatherPointTarget_C_SetVisualHeight Parms{};

	Parms.ParticleHeight = std::move(ParticleHeight);
	Parms.InteractCursorHeight = std::move(InteractCursorHeight);

	UObject::ProcessEvent(Func, &Parms);
}

}


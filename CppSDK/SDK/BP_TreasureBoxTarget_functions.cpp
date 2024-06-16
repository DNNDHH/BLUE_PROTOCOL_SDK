#pragma once

 

// Package: BP_TreasureBoxTarget

#include "Basic.hpp"

#include "BP_TreasureBoxTarget_classes.hpp"
#include "BP_TreasureBoxTarget_parameters.hpp"


namespace SDK
{

// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ExecuteUbergraph_BP_TreasureBoxTarget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::ExecuteUbergraph_BP_TreasureBoxTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "ExecuteUbergraph_BP_TreasureBoxTarget");

	Params::BP_TreasureBoxTarget_C_ExecuteUbergraph_BP_TreasureBoxTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TreasureBoxTarget_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.DestructAfterSetLocation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBDestructible*                  Myself                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::DestructAfterSetLocation(class ASBDestructible* Myself)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "DestructAfterSetLocation");

	Params::BP_TreasureBoxTarget_C_DestructAfterSetLocation Parms{};

	Parms.Myself = Myself;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Disappear
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_TreasureBoxTarget_C::Disappear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "Disappear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.Appear
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDropPlaySE                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TreasureBoxTarget_C::Appear(bool IsDropPlaySE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "Appear");

	Params::BP_TreasureBoxTarget_C_Appear Parms{};

	Parms.IsDropPlaySE = IsDropPlaySE;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PostOpenBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBTreasureBoxLotResult                 Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FSBTreasureBoxLotResult>  LotResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::PostOpenBox(ESBTreasureBoxLotResult Result, const TArray<struct FSBTreasureBoxLotResult>& LotResults, class FName TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "PostOpenBox");

	Params::BP_TreasureBoxTarget_C_PostOpenBox Parms{};

	Parms.Result = Result;
	Parms.LotResults = std::move(LotResults);
	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.PreOpenBox
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           InOtherActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ViewRotation                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)

void ABP_TreasureBoxTarget_C::PreOpenBox(class AActor* InOtherActor, const struct FRotator& ViewRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "PreOpenBox");

	Params::BP_TreasureBoxTarget_C_PreOpenBox Parms{};

	Parms.InOtherActor = InOtherActor;
	Parms.ViewRotation = std::move(ViewRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.ResetFuta
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasureBoxTarget_C::ResetFuta()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "ResetFuta");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.OpenBoxTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_TreasureBoxTarget_C::OpenBoxTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "OpenBoxTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.OpenBoxTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_TreasureBoxTarget_C::OpenBoxTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "OpenBoxTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.BoxOpenEffectFunc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAutoAllOpenTreasureBox                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_TreasureBoxTarget_C::BoxOpenEffectFunc(bool IsAutoAllOpenTreasureBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "BoxOpenEffectFunc");

	Params::BP_TreasureBoxTarget_C_BoxOpenEffectFunc Parms{};

	Parms.IsAutoAllOpenTreasureBox = IsAutoAllOpenTreasureBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshLower
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      StaticMesh                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::GetStaticMeshLower(class UStaticMesh** StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "GetStaticMeshLower");

	Params::BP_TreasureBoxTarget_C_GetStaticMeshLower Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh != nullptr)
		*StaticMesh = Parms.StaticMesh;
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetStaticMeshUpper
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                      StaticMesh                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::GetStaticMeshUpper(class UStaticMesh** StaticMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "GetStaticMeshUpper");

	Params::BP_TreasureBoxTarget_C_GetStaticMeshUpper Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StaticMesh != nullptr)
		*StaticMesh = Parms.StaticMesh;
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    DropSE1                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*                  Particle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*                    DropSE                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::GetSpawnParticle(class UAkAudioEvent* DropSE1, class UParticleSystem** Particle, class UAkAudioEvent** DropSE)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "GetSpawnParticle");

	Params::BP_TreasureBoxTarget_C_GetSpawnParticle Parms{};

	Parms.DropSE1 = DropSE1;

	UObject::ProcessEvent(Func, &Parms);

	if (Particle != nullptr)
		*Particle = Parms.Particle;

	if (DropSE != nullptr)
		*DropSE = Parms.DropSE;
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetSpawnLidParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*                  Particle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::GetSpawnLidParticle(class UParticleSystem** Particle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "GetSpawnLidParticle");

	Params::BP_TreasureBoxTarget_C_GetSpawnLidParticle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Particle != nullptr)
		*Particle = Parms.Particle;
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*                  Particle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::GetOpenParticle(class UParticleSystem** Particle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "GetOpenParticle");

	Params::BP_TreasureBoxTarget_C_GetOpenParticle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Particle != nullptr)
		*Particle = Parms.Particle;
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetOpenSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkAudioEvent                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::GetOpenSound(class UAkAudioEvent** AkAudioEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "GetOpenSound");

	Params::BP_TreasureBoxTarget_C_GetOpenSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AkAudioEvent != nullptr)
		*AkAudioEvent = Parms.AkAudioEvent;
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystem*                  Particle                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::GetDisappearParticle(class UParticleSystem** Particle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "GetDisappearParticle");

	Params::BP_TreasureBoxTarget_C_GetDisappearParticle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Particle != nullptr)
		*Particle = Parms.Particle;
}


// Function BP_TreasureBoxTarget.BP_TreasureBoxTarget_C.GetDisappearSound
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkAudioEvent*                    AkAudioEvent                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxTarget_C::GetDisappearSound(class UAkAudioEvent** AkAudioEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxTarget_C", "GetDisappearSound");

	Params::BP_TreasureBoxTarget_C_GetDisappearSound Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AkAudioEvent != nullptr)
		*AkAudioEvent = Parms.AkAudioEvent;
}

}


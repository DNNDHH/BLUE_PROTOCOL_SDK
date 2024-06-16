#pragma once

 

// Package: BP_EF_Comp_GroundHit

#include "Basic.hpp"

#include "BP_EF_Comp_GroundHit_classes.hpp"
#include "BP_EF_Comp_GroundHit_parameters.hpp"


namespace SDK
{

// Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_EF_Comp_GroundHit_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_GroundHit_C", "NewEventDispatcher_0__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleSpawn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  EffectComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InitialLifeTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          AttackCollision                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CollisionScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_GroundHit_C::TraceGroundParticleSpawn(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_GroundHit_C", "TraceGroundParticleSpawn");

	Params::BP_EF_Comp_GroundHit_C_TraceGroundParticleSpawn Parms{};

	Parms.EffectComp = EffectComp;
	Parms.InitialLifeTime = InitialLifeTime;
	Parms.AttackCollision = std::move(AttackCollision);
	Parms.CollisionScale = std::move(CollisionScale);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleEndCTRL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  EffectComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_GroundHit_C::TraceGroundParticleEndCTRL(class USceneComponent* EffectComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_GroundHit_C", "TraceGroundParticleEndCTRL");

	Params::BP_EF_Comp_GroundHit_C_TraceGroundParticleEndCTRL Parms{};

	Parms.EffectComp = EffectComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Comp_GroundHit.BP_EF_Comp_GroundHit_C.TraceGroundParticleCTRL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_GroundHit_C::TraceGroundParticleCTRL(const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_GroundHit_C", "TraceGroundParticleCTRL");

	Params::BP_EF_Comp_GroundHit_C_TraceGroundParticleCTRL Parms{};

	Parms.Scale = std::move(Scale);

	UObject::ProcessEvent(Func, &Parms);
}

}


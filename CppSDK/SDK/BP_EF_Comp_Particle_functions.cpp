#pragma once

 

// Package: BP_EF_Comp_Particle

#include "Basic.hpp"

#include "BP_EF_Comp_Particle_classes.hpp"
#include "BP_EF_Comp_Particle_parameters.hpp"


namespace SDK
{

// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_EF_Comp_Particle_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Particle_C", "NewEventDispatcher_0__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ExecuteUbergraph_BP_EF_Comp_Particle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Particle_C::ExecuteUbergraph_BP_EF_Comp_Particle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Particle_C", "ExecuteUbergraph_BP_EF_Comp_Particle");

	Params::BP_EF_Comp_Particle_C_ExecuteUbergraph_BP_EF_Comp_Particle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_EF_Comp_Particle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Particle_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleSpawn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  EffectComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InitialLifeTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          AttackCollision                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CollisionScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DestroyOrderTime                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Particle_C::ParticleSpawn(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale, float* DestroyOrderTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Particle_C", "ParticleSpawn");

	Params::BP_EF_Comp_Particle_C_ParticleSpawn Parms{};

	Parms.EffectComp = EffectComp;
	Parms.InitialLifeTime = InitialLifeTime;
	Parms.AttackCollision = std::move(AttackCollision);
	Parms.CollisionScale = std::move(CollisionScale);

	UObject::ProcessEvent(Func, &Parms);

	if (DestroyOrderTime != nullptr)
		*DestroyOrderTime = Parms.DestroyOrderTime;
}


// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleEndCTRL
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  EffectComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Particle_C::ParticleEndCTRL(class USceneComponent* EffectComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Particle_C", "ParticleEndCTRL");

	Params::BP_EF_Comp_Particle_C_ParticleEndCTRL Parms{};

	Parms.EffectComp = EffectComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Comp_Particle.BP_EF_Comp_Particle_C.ParticleScaleCTRL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Particle_C::ParticleScaleCTRL(const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Particle_C", "ParticleScaleCTRL");

	Params::BP_EF_Comp_Particle_C_ParticleScaleCTRL Parms{};

	Parms.Scale = std::move(Scale);

	UObject::ProcessEvent(Func, &Parms);
}

}


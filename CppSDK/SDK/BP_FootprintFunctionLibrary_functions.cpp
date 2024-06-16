#pragma once

 

// Package: BP_FootprintFunctionLibrary

#include "Basic.hpp"

#include "BP_FootprintFunctionLibrary_classes.hpp"
#include "BP_FootprintFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C.SocketRotationToParticleRotation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                         SocketRotation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         ParticleRotation                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FootprintFunctionLibrary_C::SocketRotationToParticleRotation(const struct FRotator& SocketRotation, class UObject* __WorldContext, struct FRotator* ParticleRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FootprintFunctionLibrary_C", "SocketRotationToParticleRotation");

	Params::BP_FootprintFunctionLibrary_C_SocketRotationToParticleRotation Parms{};

	Parms.SocketRotation = std::move(SocketRotation);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ParticleRotation != nullptr)
		*ParticleRotation = std::move(Parms.ParticleRotation);
}


// Function BP_FootprintFunctionLibrary.BP_FootprintFunctionLibrary_C.ParticleRotationToDecalRotation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FRotator                         ParticleRotation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bUseActorRotation                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         DecalRotation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_FootprintFunctionLibrary_C::ParticleRotationToDecalRotation(const struct FRotator& ParticleRotation, bool bUseActorRotation, class AActor* Actor, class UObject* __WorldContext, struct FRotator* DecalRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_FootprintFunctionLibrary_C", "ParticleRotationToDecalRotation");

	Params::BP_FootprintFunctionLibrary_C_ParticleRotationToDecalRotation Parms{};

	Parms.ParticleRotation = std::move(ParticleRotation);
	Parms.bUseActorRotation = bUseActorRotation;
	Parms.Actor = Actor;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DecalRotation != nullptr)
		*DecalRotation = std::move(Parms.DecalRotation);
}

}


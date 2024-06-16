#pragma once

 

// Package: BP_EF_Comp_Decal

#include "Basic.hpp"

#include "BP_EF_Comp_Decal_classes.hpp"
#include "BP_EF_Comp_Decal_parameters.hpp"


namespace SDK
{

// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.SpawnDecal
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*                  EffectComp                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   InitialLifeTime                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          AttackCollision                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          CollisionScale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBEffectVisibleType                    VisibleType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UDecalComponent*>          Param_DecalComponent                                   (Parm, OutParm, ContainsInstancedReference)
// float                                   DestroyOderTime                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DestroyGrace                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Decal_C::SpawnDecal(class USceneComponent* EffectComp, float InitialLifeTime, const struct FVector& AttackCollision, const struct FVector& CollisionScale, ESBEffectVisibleType VisibleType, TArray<class UDecalComponent*>* Param_DecalComponent, float* DestroyOderTime, float* DestroyGrace)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Decal_C", "SpawnDecal");

	Params::BP_EF_Comp_Decal_C_SpawnDecal Parms{};

	Parms.EffectComp = EffectComp;
	Parms.InitialLifeTime = InitialLifeTime;
	Parms.AttackCollision = std::move(AttackCollision);
	Parms.CollisionScale = std::move(CollisionScale);
	Parms.VisibleType = VisibleType;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_DecalComponent != nullptr)
		*Param_DecalComponent = std::move(Parms.Param_DecalComponent);

	if (DestroyOderTime != nullptr)
		*DestroyOderTime = Parms.DestroyOderTime;

	if (DestroyGrace != nullptr)
		*DestroyGrace = Parms.DestroyGrace;
}


// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalScaleCTRL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Scale                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Decal_C::DecalScaleCTRL(const struct FVector& Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Decal_C", "DecalScaleCTRL");

	Params::BP_EF_Comp_Decal_C_DecalScaleCTRL Parms{};

	Parms.Scale = std::move(Scale);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalAnimCTRL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Decal_C::DecalAnimCTRL(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Decal_C", "DecalAnimCTRL");

	Params::BP_EF_Comp_Decal_C_DecalAnimCTRL Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DecalEndCTRL
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Decal_C::DecalEndCTRL(float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Decal_C", "DecalEndCTRL");

	Params::BP_EF_Comp_Decal_C_DecalEndCTRL Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.GetOwnerCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           OwnerCharacter                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EF_Comp_Decal_C::GetOwnerCharacter(class AActor** OwnerCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Decal_C", "GetOwnerCharacter");

	Params::BP_EF_Comp_Decal_C_GetOwnerCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerCharacter != nullptr)
		*OwnerCharacter = Parms.OwnerCharacter;
}


// Function BP_EF_Comp_Decal.BP_EF_Comp_Decal_C.DestroyDecal
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_EF_Comp_Decal_C::DestroyDecal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EF_Comp_Decal_C", "DestroyDecal");

	UObject::ProcessEvent(Func, nullptr);
}

}


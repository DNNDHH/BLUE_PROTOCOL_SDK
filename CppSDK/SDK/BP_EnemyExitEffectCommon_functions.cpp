#pragma once

 

// Package: BP_EnemyExitEffectCommon

#include "Basic.hpp"

#include "BP_EnemyExitEffectCommon_classes.hpp"
#include "BP_EnemyExitEffectCommon_parameters.hpp"


namespace SDK
{

// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ExecuteUbergraph_BP_EnemyExitEffectCommon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyExitEffectCommon_C::ExecuteUbergraph_BP_EnemyExitEffectCommon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyExitEffectCommon_C", "ExecuteUbergraph_BP_EnemyExitEffectCommon");

	Params::BP_EnemyExitEffectCommon_C_ExecuteUbergraph_BP_EnemyExitEffectCommon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetFaceMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyExitEffectCommon_C::SetFaceMaterial(class ASBEnemyCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyExitEffectCommon_C", "SetFaceMaterial");

	Params::BP_EnemyExitEffectCommon_C_SetFaceMaterial Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyExitEffectCommon_C::ReceiveTick(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyExitEffectCommon_C", "ReceiveTick");

	Params::BP_EnemyExitEffectCommon_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetAttachedMeshMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyExitEffectCommon_C::SetAttachedMeshMaterial(class ASBEnemyCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyExitEffectCommon_C", "SetAttachedMeshMaterial");

	Params::BP_EnemyExitEffectCommon_C_SetAttachedMeshMaterial Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetWeaponMatrial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyExitEffectCommon_C::SetWeaponMatrial(class ASBEnemyCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyExitEffectCommon_C", "SetWeaponMatrial");

	Params::BP_EnemyExitEffectCommon_C_SetWeaponMatrial Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.SetEnemyMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyExitEffectCommon_C::SetEnemyMaterial(class ASBEnemyCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyExitEffectCommon_C", "SetEnemyMaterial");

	Params::BP_EnemyExitEffectCommon_C_SetEnemyMaterial Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyExitEffectCommon.BP_EnemyExitEffectCommon_C.ReceiveBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyExitEffectCommon_C::ReceiveBegin(class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyExitEffectCommon_C", "ReceiveBegin");

	Params::BP_EnemyExitEffectCommon_C_ReceiveBegin Parms{};

	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: BP_EnemyDeathEffectCommon

#include "Basic.hpp"

#include "BP_EnemyDeathEffectCommon_classes.hpp"
#include "BP_EnemyDeathEffectCommon_parameters.hpp"


namespace SDK
{

// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ExecuteUbergraph_BP_EnemyDeathEffectCommon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::ExecuteUbergraph_BP_EnemyDeathEffectCommon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "ExecuteUbergraph_BP_EnemyDeathEffectCommon");

	Params::BP_EnemyDeathEffectCommon_C_ExecuteUbergraph_BP_EnemyDeathEffectCommon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetFaceMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::SetFaceMaterial(class ASBEnemyCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "SetFaceMaterial");

	Params::BP_EnemyDeathEffectCommon_C_SetFaceMaterial Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetAttachedMeshMaterial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::SetAttachedMeshMaterial(class ASBEnemyCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "SetAttachedMeshMaterial");

	Params::BP_EnemyDeathEffectCommon_C_SetAttachedMeshMaterial Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickVanish
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::ReceiveTickVanish(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "ReceiveTickVanish");

	Params::BP_EnemyDeathEffectCommon_C_ReceiveTickVanish Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginVanish
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   WaitTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::ReceiveBeginVanish(float WaitTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "ReceiveBeginVanish");

	Params::BP_EnemyDeathEffectCommon_C_ReceiveBeginVanish Parms{};

	Parms.WaitTime = WaitTime;
	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveMaterialUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// EDeathEffectType                        DeathEffectType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::ReceiveMaterialUpdated(EDeathEffectType DeathEffectType, class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "ReceiveMaterialUpdated");

	Params::BP_EnemyDeathEffectCommon_C_ReceiveMaterialUpdated Parms{};

	Parms.DeathEffectType = DeathEffectType;
	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTickFadeOut
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::ReceiveTickFadeOut(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "ReceiveTickFadeOut");

	Params::BP_EnemyDeathEffectCommon_C_ReceiveTickFadeOut Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBeginFadeOut
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::ReceiveBeginFadeOut(class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "ReceiveBeginFadeOut");

	Params::BP_EnemyDeathEffectCommon_C_ReceiveBeginFadeOut Parms{};

	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::ReceiveTick(float DeltaTime, class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "ReceiveTick");

	Params::BP_EnemyDeathEffectCommon_C_ReceiveTick Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.ReceiveBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                OwnerEnemyCharacter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::ReceiveBegin(class ASBEnemyCharacter* OwnerEnemyCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "ReceiveBegin");

	Params::BP_EnemyDeathEffectCommon_C_ReceiveBegin Parms{};

	Parms.OwnerEnemyCharacter = OwnerEnemyCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetWeaponMatrial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::SetWeaponMatrial(class ASBEnemyCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "SetWeaponMatrial");

	Params::BP_EnemyDeathEffectCommon_C_SetWeaponMatrial Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_EnemyDeathEffectCommon.BP_EnemyDeathEffectCommon_C.SetEnemyMatrial
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBEnemyCharacter*                Enemy                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnemyDeathEffectCommon_C::SetEnemyMatrial(class ASBEnemyCharacter* Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_EnemyDeathEffectCommon_C", "SetEnemyMatrial");

	Params::BP_EnemyDeathEffectCommon_C_SetEnemyMatrial Parms{};

	Parms.Enemy = Enemy;

	UObject::ProcessEvent(Func, &Parms);
}

}


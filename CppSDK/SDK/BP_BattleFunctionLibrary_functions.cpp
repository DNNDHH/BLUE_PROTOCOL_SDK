#pragma once

 

// Package: BP_BattleFunctionLibrary

#include "Basic.hpp"

#include "BP_BattleFunctionLibrary_classes.hpp"
#include "BP_BattleFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.GetDamageReactionByStunLevel
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle              DataTableRowHandle                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FSBStunInfo                      StunInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_DamageReaction                        DamageReaction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleFunctionLibrary_C::GetDamageReactionByStunLevel(const struct FDataTableRowHandle& DataTableRowHandle, const struct FSBStunInfo& StunInfo, class UObject* __WorldContext, E_DamageReaction* DamageReaction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_BattleFunctionLibrary_C", "GetDamageReactionByStunLevel");

	Params::BP_BattleFunctionLibrary_C_GetDamageReactionByStunLevel Parms{};

	Parms.DataTableRowHandle = std::move(DataTableRowHandle);
	Parms.StunInfo = std::move(StunInfo);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DamageReaction != nullptr)
		*DamageReaction = Parms.DamageReaction;
}


// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.GetDamageReactionByLevelDiff
// (Static, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// E_DamageReaction                        DamageRaction                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBStunInfo                      StunInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_DamageReaction                        DamageReaction                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleFunctionLibrary_C::GetDamageReactionByLevelDiff(E_DamageReaction DamageRaction, const struct FSBStunInfo& StunInfo, class UObject* __WorldContext, E_DamageReaction* DamageReaction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_BattleFunctionLibrary_C", "GetDamageReactionByLevelDiff");

	Params::BP_BattleFunctionLibrary_C_GetDamageReactionByLevelDiff Parms{};

	Parms.DamageRaction = DamageRaction;
	Parms.StunInfo = std::move(StunInfo);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DamageReaction != nullptr)
		*DamageReaction = Parms.DamageReaction;
}


// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv1PhysicsDamage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStunDirection                        StunDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStunValueCalculation                 StunCalcType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleFunctionLibrary_C::ApplyLv1PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_BattleFunctionLibrary_C", "ApplyLv1PhysicsDamage");

	Params::BP_BattleFunctionLibrary_C_ApplyLv1PhysicsDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.BaseDamage = BaseDamage;
	Parms.DamageCauser = DamageCauser;
	Parms.StunDirection = StunDirection;
	Parms.StunCalcType = StunCalcType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv2PhysicsDamage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStunDirection                        StunDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStunValueCalculation                 StunCalcType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleFunctionLibrary_C::ApplyLv2PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_BattleFunctionLibrary_C", "ApplyLv2PhysicsDamage");

	Params::BP_BattleFunctionLibrary_C_ApplyLv2PhysicsDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.BaseDamage = BaseDamage;
	Parms.DamageCauser = DamageCauser;
	Parms.StunDirection = StunDirection;
	Parms.StunCalcType = StunCalcType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv3PhysicsDamage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStunDirection                        StunDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStunValueCalculation                 StunCalcType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleFunctionLibrary_C::ApplyLv3PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_BattleFunctionLibrary_C", "ApplyLv3PhysicsDamage");

	Params::BP_BattleFunctionLibrary_C_ApplyLv3PhysicsDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.BaseDamage = BaseDamage;
	Parms.DamageCauser = DamageCauser;
	Parms.StunDirection = StunDirection;
	Parms.StunCalcType = StunCalcType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_BattleFunctionLibrary.BP_BattleFunctionLibrary_C.ApplyLv4PhysicsDamage
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor*                           DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BaseDamage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           DamageCauser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStunDirection                        StunDirection                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBStunValueCalculation                 StunCalcType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BattleFunctionLibrary_C::ApplyLv4PhysicsDamage(class AActor* DamagedActor, float BaseDamage, class AActor* DamageCauser, ESBStunDirection StunDirection, ESBStunValueCalculation StunCalcType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_BattleFunctionLibrary_C", "ApplyLv4PhysicsDamage");

	Params::BP_BattleFunctionLibrary_C_ApplyLv4PhysicsDamage Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.BaseDamage = BaseDamage;
	Parms.DamageCauser = DamageCauser;
	Parms.StunDirection = StunDirection;
	Parms.StunCalcType = StunCalcType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}


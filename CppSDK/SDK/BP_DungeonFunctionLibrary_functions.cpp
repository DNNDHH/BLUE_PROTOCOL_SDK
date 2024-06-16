#pragma once

 

// Package: BP_DungeonFunctionLibrary

#include "Basic.hpp"

#include "BP_DungeonFunctionLibrary_classes.hpp"
#include "BP_DungeonFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.GetPlayerStartLocation
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APawn*                            Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerStart*                     PlayerStart                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DistFromStart                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DungeonFunctionLibrary_C::GetPlayerStartLocation(class APawn* Pawn, class UObject* __WorldContext, class APlayerStart** PlayerStart, float* DistFromStart)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_DungeonFunctionLibrary_C", "GetPlayerStartLocation");

	Params::BP_DungeonFunctionLibrary_C_GetPlayerStartLocation Parms{};

	Parms.Pawn = Pawn;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PlayerStart != nullptr)
		*PlayerStart = Parms.PlayerStart;

	if (DistFromStart != nullptr)
		*DistFromStart = Parms.DistFromStart;
}


// Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.ResetPlayerAction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBPlayerCharacter*               PlayerCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DungeonFunctionLibrary_C::ResetPlayerAction(class ASBPlayerCharacter* PlayerCharacter, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_DungeonFunctionLibrary_C", "ResetPlayerAction");

	Params::BP_DungeonFunctionLibrary_C_ResetPlayerAction Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_DungeonFunctionLibrary.BP_DungeonFunctionLibrary_C.Find Class Actor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Object                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                           TargetClass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           ActorObject                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Num                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_DungeonFunctionLibrary_C::Find_Class_Actor(class UObject* Object, class UClass* TargetClass, class UObject* __WorldContext, class AActor** ActorObject, int32* Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_DungeonFunctionLibrary_C", "Find Class Actor");

	Params::BP_DungeonFunctionLibrary_C_Find_Class_Actor Parms{};

	Parms.Object = Object;
	Parms.TargetClass = TargetClass;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ActorObject != nullptr)
		*ActorObject = Parms.ActorObject;

	if (Num != nullptr)
		*Num = Parms.Num;
}

}


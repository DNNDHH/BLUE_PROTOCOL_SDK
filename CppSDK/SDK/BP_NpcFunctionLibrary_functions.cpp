#pragma once

 

// Package: BP_NpcFunctionLibrary

#include "Basic.hpp"

#include "BP_NpcFunctionLibrary_classes.hpp"
#include "BP_NpcFunctionLibrary_parameters.hpp"


namespace SDK
{

// Function BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C.InitializeNamePlate
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NpcFunctionLibrary_C::InitializeNamePlate(class ASBMobCharacter* Character, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_NpcFunctionLibrary_C", "InitializeNamePlate");

	Params::BP_NpcFunctionLibrary_C_InitializeNamePlate Parms{};

	Parms.Character = Character;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_NpcFunctionLibrary.BP_NpcFunctionLibrary_C.FinalizeNamePlate
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBMobCharacter*                  Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_NpcFunctionLibrary_C::FinalizeNamePlate(class ASBMobCharacter* Character, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_NpcFunctionLibrary_C", "FinalizeNamePlate");

	Params::BP_NpcFunctionLibrary_C_FinalizeNamePlate Parms{};

	Parms.Character = Character;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}


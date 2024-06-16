#pragma once

 

// Package: SkillLevelInfoForBattleSet

#include "Basic.hpp"

#include "SkillLevelInfoForBattleSet_classes.hpp"
#include "SkillLevelInfoForBattleSet_parameters.hpp"


namespace SDK
{

// Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.ExecuteUbergraph_SkillLevelInfoForBattleSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillLevelInfoForBattleSet_C::ExecuteUbergraph_SkillLevelInfoForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillLevelInfoForBattleSet_C", "ExecuteUbergraph_SkillLevelInfoForBattleSet");

	Params::SkillLevelInfoForBattleSet_C_ExecuteUbergraph_SkillLevelInfoForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillLevelInfoForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillLevelInfoForBattleSet_C", "PreConstruct");

	Params::SkillLevelInfoForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillLevelInfoForBattleSet_C::SetSkillLevel(int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillLevelInfoForBattleSet_C", "SetSkillLevel");

	Params::SkillLevelInfoForBattleSet_C_SetSkillLevel Parms{};

	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillLevelInfoForBattleSet.SkillLevelInfoForBattleSet_C.SetSkillAbilityType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSkillAbilityType                     InSkillAbilityType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillLevelInfoForBattleSet_C::SetSkillAbilityType(ESBSkillAbilityType InSkillAbilityType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillLevelInfoForBattleSet_C", "SetSkillAbilityType");

	Params::SkillLevelInfoForBattleSet_C_SetSkillAbilityType Parms{};

	Parms.InSkillAbilityType = InSkillAbilityType;

	UObject::ProcessEvent(Func, &Parms);
}

}


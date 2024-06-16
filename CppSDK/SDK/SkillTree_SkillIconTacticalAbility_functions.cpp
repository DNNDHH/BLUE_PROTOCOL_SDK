#pragma once

 

// Package: SkillTree_SkillIconTacticalAbility

#include "Basic.hpp"

#include "SkillTree_SkillIconTacticalAbility_classes.hpp"
#include "SkillTree_SkillIconTacticalAbility_parameters.hpp"


namespace SDK
{

// Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.ExecuteUbergraph_SkillTree_SkillIconTacticalAbility
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconTacticalAbility_C::ExecuteUbergraph_SkillTree_SkillIconTacticalAbility(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconTacticalAbility_C", "ExecuteUbergraph_SkillTree_SkillIconTacticalAbility");

	Params::SkillTree_SkillIconTacticalAbility_C_ExecuteUbergraph_SkillTree_SkillIconTacticalAbility Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.SelectActiveAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillTreeAbilityType                   AbilityType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconTacticalAbility_C::SelectActiveAbility(ESkillTreeAbilityType AbilityType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconTacticalAbility_C", "SelectActiveAbility");

	Params::SkillTree_SkillIconTacticalAbility_C_SelectActiveAbility Parms{};

	Parms.AbilityType = AbilityType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconTacticalAbility.SkillTree_SkillIconTacticalAbility_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_SkillIconTacticalAbility_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconTacticalAbility_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

 

// Package: SkillTree_SkillIconTactical

#include "Basic.hpp"

#include "SkillTree_SkillIconTactical_classes.hpp"
#include "SkillTree_SkillIconTactical_parameters.hpp"


namespace SDK
{

// Function SkillTree_SkillIconTactical.SkillTree_SkillIconTactical_C.ExecuteUbergraph_SkillTree_SkillIconTactical
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconTactical_C::ExecuteUbergraph_SkillTree_SkillIconTactical(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconTactical_C", "ExecuteUbergraph_SkillTree_SkillIconTactical");

	Params::SkillTree_SkillIconTactical_C_ExecuteUbergraph_SkillTree_SkillIconTactical Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconTactical.SkillTree_SkillIconTactical_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_SkillIconTactical_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconTactical_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


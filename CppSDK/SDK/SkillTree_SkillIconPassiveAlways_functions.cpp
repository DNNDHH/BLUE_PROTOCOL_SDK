#pragma once

 

// Package: SkillTree_SkillIconPassiveAlways

#include "Basic.hpp"

#include "SkillTree_SkillIconPassiveAlways_classes.hpp"
#include "SkillTree_SkillIconPassiveAlways_parameters.hpp"


namespace SDK
{

// Function SkillTree_SkillIconPassiveAlways.SkillTree_SkillIconPassiveAlways_C.ExecuteUbergraph_SkillTree_SkillIconPassiveAlways
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconPassiveAlways_C::ExecuteUbergraph_SkillTree_SkillIconPassiveAlways(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconPassiveAlways_C", "ExecuteUbergraph_SkillTree_SkillIconPassiveAlways");

	Params::SkillTree_SkillIconPassiveAlways_C_ExecuteUbergraph_SkillTree_SkillIconPassiveAlways Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconPassiveAlways.SkillTree_SkillIconPassiveAlways_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_SkillIconPassiveAlways_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconPassiveAlways_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

 

// Package: SkillTree_SkillIconSub

#include "Basic.hpp"

#include "SkillTree_SkillIconSub_classes.hpp"
#include "SkillTree_SkillIconSub_parameters.hpp"


namespace SDK
{

// Function SkillTree_SkillIconSub.SkillTree_SkillIconSub_C.ExecuteUbergraph_SkillTree_SkillIconSub
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconSub_C::ExecuteUbergraph_SkillTree_SkillIconSub(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconSub_C", "ExecuteUbergraph_SkillTree_SkillIconSub");

	Params::SkillTree_SkillIconSub_C_ExecuteUbergraph_SkillTree_SkillIconSub Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconSub.SkillTree_SkillIconSub_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_SkillIconSub_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconSub_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


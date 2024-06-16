#pragma once

 

// Package: SkillTree_SkillIconSpecial

#include "Basic.hpp"

#include "SkillTree_SkillIconSpecial_classes.hpp"
#include "SkillTree_SkillIconSpecial_parameters.hpp"


namespace SDK
{

// Function SkillTree_SkillIconSpecial.SkillTree_SkillIconSpecial_C.ExecuteUbergraph_SkillTree_SkillIconSpecial
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconSpecial_C::ExecuteUbergraph_SkillTree_SkillIconSpecial(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconSpecial_C", "ExecuteUbergraph_SkillTree_SkillIconSpecial");

	Params::SkillTree_SkillIconSpecial_C_ExecuteUbergraph_SkillTree_SkillIconSpecial Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconSpecial.SkillTree_SkillIconSpecial_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_SkillIconSpecial_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconSpecial_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


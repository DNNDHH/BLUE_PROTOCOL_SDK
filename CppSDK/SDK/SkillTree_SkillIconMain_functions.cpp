#pragma once

 

// Package: SkillTree_SkillIconMain

#include "Basic.hpp"

#include "SkillTree_SkillIconMain_classes.hpp"
#include "SkillTree_SkillIconMain_parameters.hpp"


namespace SDK
{

// Function SkillTree_SkillIconMain.SkillTree_SkillIconMain_C.ExecuteUbergraph_SkillTree_SkillIconMain
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconMain_C::ExecuteUbergraph_SkillTree_SkillIconMain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconMain_C", "ExecuteUbergraph_SkillTree_SkillIconMain");

	Params::SkillTree_SkillIconMain_C_ExecuteUbergraph_SkillTree_SkillIconMain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconMain.SkillTree_SkillIconMain_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_SkillIconMain_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconMain_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


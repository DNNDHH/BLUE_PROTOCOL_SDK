#pragma once

 

// Package: SkillTree_SkillIconPassive

#include "Basic.hpp"

#include "SkillTree_SkillIconPassive_classes.hpp"
#include "SkillTree_SkillIconPassive_parameters.hpp"


namespace SDK
{

// Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.ExecuteUbergraph_SkillTree_SkillIconPassive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillTree_SkillIconPassive_C::ExecuteUbergraph_SkillTree_SkillIconPassive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconPassive_C", "ExecuteUbergraph_SkillTree_SkillIconPassive");

	Params::SkillTree_SkillIconPassive_C_ExecuteUbergraph_SkillTree_SkillIconPassive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillTree_SkillIconPassive_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconPassive_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.SetIconEmpty
// (Public, BlueprintCallable, BlueprintEvent)

void USkillTree_SkillIconPassive_C::SetIconEmpty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconPassive_C", "SetIconEmpty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillTree_SkillIconPassive.SkillTree_SkillIconPassive_C.SetEquipmentIconVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillTree_SkillIconPassive_C::SetEquipmentIconVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillTree_SkillIconPassive_C", "SetEquipmentIconVisibility");

	Params::SkillTree_SkillIconPassive_C_SetEquipmentIconVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: SkillInfoGaugeHyouiActive_Effect

#include "Basic.hpp"

#include "SkillInfoGaugeHyouiActive_Effect_classes.hpp"
#include "SkillInfoGaugeHyouiActive_Effect_parameters.hpp"


namespace SDK
{

// Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoGaugeHyouiActive_Effect_C::ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeHyouiActive_Effect_C", "ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect");

	Params::SkillInfoGaugeHyouiActive_Effect_C_ExecuteUbergraph_SkillInfoGaugeHyouiActive_Effect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoGaugeHyouiActive_Effect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeHyouiActive_Effect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoGaugeHyouiActive_Effect.SkillInfoGaugeHyouiActive_Effect_C.PlayAnim
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoGaugeHyouiActive_Effect_C::PlayAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoGaugeHyouiActive_Effect_C", "PlayAnim");

	UObject::ProcessEvent(Func, nullptr);
}

}


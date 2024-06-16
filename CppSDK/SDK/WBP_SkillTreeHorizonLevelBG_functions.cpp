#pragma once

 

// Package: WBP_SkillTreeHorizonLevelBG

#include "Basic.hpp"

#include "WBP_SkillTreeHorizonLevelBG_classes.hpp"
#include "WBP_SkillTreeHorizonLevelBG_parameters.hpp"


namespace SDK
{

// Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillTreeHorizonLevelBG_C::ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTreeHorizonLevelBG_C", "ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG");

	Params::WBP_SkillTreeHorizonLevelBG_C_ExecuteUbergraph_WBP_SkillTreeHorizonLevelBG Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SkillTreeHorizonLevelBG_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTreeHorizonLevelBG_C", "PreConstruct");

	Params::WBP_SkillTreeHorizonLevelBG_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillTreeHorizonLevelBG.WBP_SkillTreeHorizonLevelBG_C.Init
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelect                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Param_Level                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillTreeHorizonLevelBG_C::Init(bool IsSelect, int32 Param_Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTreeHorizonLevelBG_C", "Init");

	Params::WBP_SkillTreeHorizonLevelBG_C_Init Parms{};

	Parms.IsSelect = IsSelect;
	Parms.Param_Level = Param_Level;

	UObject::ProcessEvent(Func, &Parms);
}

}


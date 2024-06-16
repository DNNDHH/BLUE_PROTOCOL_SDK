#pragma once

 

// Package: WBP_SkillTreeBranchSwitcher

#include "Basic.hpp"

#include "WBP_SkillTreeBranchSwitcher_classes.hpp"
#include "WBP_SkillTreeBranchSwitcher_parameters.hpp"


namespace SDK
{

// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.ExecuteUbergraph_WBP_SkillTreeBranchSwitcher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillTreeBranchSwitcher_C::ExecuteUbergraph_WBP_SkillTreeBranchSwitcher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTreeBranchSwitcher_C", "ExecuteUbergraph_WBP_SkillTreeBranchSwitcher");

	Params::WBP_SkillTreeBranchSwitcher_C_ExecuteUbergraph_WBP_SkillTreeBranchSwitcher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.SetBrunchType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillTreeHorizonBranchType             Param_BrunchType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillTreeBranchSwitcher_C::SetBrunchType(ESkillTreeHorizonBranchType Param_BrunchType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTreeBranchSwitcher_C", "SetBrunchType");

	Params::WBP_SkillTreeBranchSwitcher_C_SetBrunchType Parms{};

	Parms.Param_BrunchType = Param_BrunchType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SkillTreeBranchSwitcher_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTreeBranchSwitcher_C", "PreConstruct");

	Params::WBP_SkillTreeBranchSwitcher_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESkillTreeHorizonBranchType             InBrunchType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillTreeBranchSwitcher_C::Init(ESkillTreeHorizonBranchType InBrunchType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTreeBranchSwitcher_C", "Init");

	Params::WBP_SkillTreeBranchSwitcher_C_Init Parms{};

	Parms.InBrunchType = InBrunchType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillTreeBranchSwitcher.WBP_SkillTreeBranchSwitcher_C.Set Brunch Color
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_SkillTreeBranchSwitcher_C::Set_Brunch_Color(bool Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillTreeBranchSwitcher_C", "Set Brunch Color");

	Params::WBP_SkillTreeBranchSwitcher_C_Set_Brunch_Color Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}


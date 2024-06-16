#pragma once

 

// Package: WBP_SkillDescriptionBasics

#include "Basic.hpp"

#include "WBP_SkillDescriptionBasics_classes.hpp"
#include "WBP_SkillDescriptionBasics_parameters.hpp"


namespace SDK
{

// Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.Set Skill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_SkillDescriptionBasics_C::Set_Skill(int32 SkillId, int32 SkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillDescriptionBasics_C", "Set Skill");

	Params::WBP_SkillDescriptionBasics_C_Set_Skill Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLevel = SkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.BuffIconsCollapsed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_SkillDescriptionBasics_C::BuffIconsCollapsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillDescriptionBasics_C", "BuffIconsCollapsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_SkillDescriptionBasics.WBP_SkillDescriptionBasics_C.GetToolTipWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_SkillDescriptionBasics_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_SkillDescriptionBasics_C", "GetToolTipWidget_0");

	Params::WBP_SkillDescriptionBasics_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


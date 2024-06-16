#pragma once

 

// Package: WBP_ToolTip_SkillBoard

#include "Basic.hpp"

#include "WBP_ToolTip_SkillBoard_classes.hpp"
#include "WBP_ToolTip_SkillBoard_parameters.hpp"


namespace SDK
{

// Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.Set Skill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTip_SkillBoard_C::Set_Skill(int32 SkillId, int32 SkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_SkillBoard_C", "Set Skill");

	Params::WBP_ToolTip_SkillBoard_C_Set_Skill Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLevel = SkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTip_SkillBoard.WBP_ToolTip_SkillBoard_C.GetSkillDataText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSBSkillDataMasterData           InSkillData                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)

void UWBP_ToolTip_SkillBoard_C::GetSkillDataText(const struct FSBSkillDataMasterData& InSkillData, int32 InLevel, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_SkillBoard_C", "GetSkillDataText");

	Params::WBP_ToolTip_SkillBoard_C_GetSkillDataText Parms{};

	Parms.InSkillData = std::move(InSkillData);
	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}

}


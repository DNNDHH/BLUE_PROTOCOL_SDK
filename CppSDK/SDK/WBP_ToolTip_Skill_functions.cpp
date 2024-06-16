#pragma once

 

// Package: WBP_ToolTip_Skill

#include "Basic.hpp"

#include "WBP_ToolTip_Skill_classes.hpp"
#include "WBP_ToolTip_Skill_parameters.hpp"


namespace SDK
{

// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.Set Skill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTip_Skill_C::Set_Skill(int32 SkillId, int32 SkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_Skill_C", "Set Skill");

	Params::WBP_ToolTip_Skill_C_Set_Skill Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLevel = SkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.BuffIconsCollapsed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_ToolTip_Skill_C::BuffIconsCollapsed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_Skill_C", "BuffIconsCollapsed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetUnleashedSkill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBSkillType                            InSkillIType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBSkillAbilityType                     InSkillAbilityType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InReleaseLevel                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTip_Skill_C::SetUnleashedSkill(ESBSkillType InSkillIType, ESBSkillAbilityType InSkillAbilityType, ESBClassType InClassType, int32 InReleaseLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_Skill_C", "SetUnleashedSkill");

	Params::WBP_ToolTip_Skill_C_SetUnleashedSkill Parms{};

	Parms.InSkillIType = InSkillIType;
	Parms.InSkillAbilityType = InSkillAbilityType;
	Parms.InClassType = InClassType;
	Parms.InReleaseLevel = InReleaseLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.GetTacticalSkillBaseInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBSkillDataMasterData           InSkillMasterData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsTacticalSkill                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   OutBaseSkillId                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutBaseSkillLevel                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTip_Skill_C::GetTacticalSkillBaseInfo(const struct FSBSkillDataMasterData& InSkillMasterData, bool* IsTacticalSkill, int32* OutBaseSkillId, int32* OutBaseSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_Skill_C", "GetTacticalSkillBaseInfo");

	Params::WBP_ToolTip_Skill_C_GetTacticalSkillBaseInfo Parms{};

	Parms.InSkillMasterData = std::move(InSkillMasterData);

	UObject::ProcessEvent(Func, &Parms);

	if (IsTacticalSkill != nullptr)
		*IsTacticalSkill = Parms.IsTacticalSkill;

	if (OutBaseSkillId != nullptr)
		*OutBaseSkillId = Parms.OutBaseSkillId;

	if (OutBaseSkillLevel != nullptr)
		*OutBaseSkillLevel = Parms.OutBaseSkillLevel;
}


// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetSkillActiveAbilityLvReference
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SkillId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   SkillLevel                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ConditionSkillLevel                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTip_Skill_C::SetSkillActiveAbilityLvReference(int32 SkillId, int32 SkillLevel, int32 ConditionSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_Skill_C", "SetSkillActiveAbilityLvReference");

	Params::WBP_ToolTip_Skill_C_SetSkillActiveAbilityLvReference Parms{};

	Parms.SkillId = SkillId;
	Parms.SkillLevel = SkillLevel;
	Parms.ConditionSkillLevel = ConditionSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTip_Skill.WBP_ToolTip_Skill_C.SetDescription
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBSkillDataMasterData           SBSkillDataMasterData                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   DisplaySkillLV1                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTip_Skill_C::SetDescription(const struct FSBSkillDataMasterData& SBSkillDataMasterData, int32 DisplaySkillLV1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_Skill_C", "SetDescription");

	Params::WBP_ToolTip_Skill_C_SetDescription Parms{};

	Parms.SBSkillDataMasterData = std::move(SBSkillDataMasterData);
	Parms.DisplaySkillLV1 = DisplaySkillLV1;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: CommonIconToolTipContents_BattleImagineSkillInfoParts

#include "Basic.hpp"

#include "CommonIconToolTipContents_BattleImagineSkillInfoParts_classes.hpp"
#include "CommonIconToolTipContents_BattleImagineSkillInfoParts_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_BattleImagineSkillInfoParts_C", "ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts");

	Params::CommonIconToolTipContents_BattleImagineSkillInfoParts_C_ExecuteUbergraph_CommonIconToolTipContents_BattleImagineSkillInfoParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_BattleImagineSkillInfoParts_C", "SetTextColor");

	Params::CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.SetMasterImagineData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_BattleImagineSkillInfoParts_C", "SetMasterImagineData");

	Params::CommonIconToolTipContents_BattleImagineSkillInfoParts_C_SetMasterImagineData Parms{};

	Parms.MasterImagine = std::move(MasterImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_BattleImagineSkillInfoParts.CommonIconToolTipContents_BattleImagineSkillInfoParts_C.ResetAllInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIconToolTipContents_BattleImagineSkillInfoParts_C::ResetAllInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_BattleImagineSkillInfoParts_C", "ResetAllInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}


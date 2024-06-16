#pragma once

 

// Package: CommonToolTipContents_SummonedSkillParts

#include "Basic.hpp"

#include "CommonToolTipContents_SummonedSkillParts_classes.hpp"
#include "CommonToolTipContents_SummonedSkillParts_parameters.hpp"


namespace SDK
{

// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonToolTipContents_SummonedSkillParts_C::ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTipContents_SummonedSkillParts_C", "ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts");

	Params::CommonToolTipContents_SummonedSkillParts_C_ExecuteUbergraph_CommonToolTipContents_SummonedSkillParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonToolTipContents_SummonedSkillParts_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTipContents_SummonedSkillParts_C", "SetTextColor");

	Params::CommonToolTipContents_SummonedSkillParts_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedTypeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTypeName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonToolTipContents_SummonedSkillParts_C::SetSummonedTypeName(const class FText& InTypeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTipContents_SummonedSkillParts_C", "SetSummonedTypeName");

	Params::CommonToolTipContents_SummonedSkillParts_C_SetSummonedTypeName Parms{};

	Parms.InTypeName = std::move(InTypeName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonToolTipContents_SummonedSkillParts_C::SetSummonedName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTipContents_SummonedSkillParts_C", "SetSummonedName");

	Params::CommonToolTipContents_SummonedSkillParts_C_SetSummonedName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetSummonedInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InImagineMasterData                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonToolTipContents_SummonedSkillParts_C::SetSummonedInfo(const struct FSBMasterImagine& InImagineMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTipContents_SummonedSkillParts_C", "SetSummonedInfo");

	Params::CommonToolTipContents_SummonedSkillParts_C_SetSummonedInfo Parms{};

	Parms.InImagineMasterData = std::move(InImagineMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.SetMasterImagineData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommonToolTipContents_SummonedSkillParts_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTipContents_SummonedSkillParts_C", "SetMasterImagineData");

	Params::CommonToolTipContents_SummonedSkillParts_C_SetMasterImagineData Parms{};

	Parms.MasterImagine = std::move(MasterImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonToolTipContents_SummonedSkillParts.CommonToolTipContents_SummonedSkillParts_C.ResetSummonedInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonToolTipContents_SummonedSkillParts_C::ResetSummonedInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonToolTipContents_SummonedSkillParts_C", "ResetSummonedInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

 

// Package: CommonIconToolTipContents_PossessionSkillParts

#include "Basic.hpp"

#include "CommonIconToolTipContents_PossessionSkillParts_classes.hpp"
#include "CommonIconToolTipContents_PossessionSkillParts_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContents_PossessionSkillParts_C::ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_PossessionSkillParts_C", "ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts");

	Params::CommonIconToolTipContents_PossessionSkillParts_C_ExecuteUbergraph_CommonIconToolTipContents_PossessionSkillParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContents_PossessionSkillParts_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_PossessionSkillParts_C", "SetTextColor");

	Params::CommonIconToolTipContents_PossessionSkillParts_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionTypeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InTypeName                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContents_PossessionSkillParts_C::SetPossessionTypeName(const class FText& InTypeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_PossessionSkillParts_C", "SetPossessionTypeName");

	Params::CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionTypeName Parms{};

	Parms.InTypeName = std::move(InTypeName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContents_PossessionSkillParts_C::SetPossessionName(const class FText& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_PossessionSkillParts_C", "SetPossessionName");

	Params::CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetPossessionInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 InMasterImagineData                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonIconToolTipContents_PossessionSkillParts_C::SetPossessionInfo(const struct FSBMasterImagine& InMasterImagineData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_PossessionSkillParts_C", "SetPossessionInfo");

	Params::CommonIconToolTipContents_PossessionSkillParts_C_SetPossessionInfo Parms{};

	Parms.InMasterImagineData = std::move(InMasterImagineData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.SetMasterImagineData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMasterImagine                 MasterImagine                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCommonIconToolTipContents_PossessionSkillParts_C::SetMasterImagineData(const struct FSBMasterImagine& MasterImagine)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_PossessionSkillParts_C", "SetMasterImagineData");

	Params::CommonIconToolTipContents_PossessionSkillParts_C_SetMasterImagineData Parms{};

	Parms.MasterImagine = std::move(MasterImagine);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_PossessionSkillParts.CommonIconToolTipContents_PossessionSkillParts_C.ResetPossessionInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonIconToolTipContents_PossessionSkillParts_C::ResetPossessionInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_PossessionSkillParts_C", "ResetPossessionInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}


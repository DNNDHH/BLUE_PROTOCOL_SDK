#pragma once

 

// Package: SkillInfoIconForSubSkill

#include "Basic.hpp"

#include "SkillInfoIconForSubSkill_classes.hpp"
#include "SkillInfoIconForSubSkill_parameters.hpp"


namespace SDK
{

// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.ExecuteUbergraph_SkillInfoIconForSubSkill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForSubSkill_C::ExecuteUbergraph_SkillInfoIconForSubSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForSubSkill_C", "ExecuteUbergraph_SkillInfoIconForSubSkill");

	Params::SkillInfoIconForSubSkill_C_ExecuteUbergraph_SkillInfoIconForSubSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForSubSkill_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForSubSkill_C", "PreConstruct");

	Params::SkillInfoIconForSubSkill_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoIconForSubSkill_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForSubSkill_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.CreateTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNotUseTooltip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForSubSkill_C::CreateTooltip(bool InIsNotUseTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForSubSkill_C", "CreateTooltip");

	Params::SkillInfoIconForSubSkill_C_CreateTooltip Parms{};

	Parms.InIsNotUseTooltip = InIsNotUseTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.SetSkillInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsInformationHidden                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSkillMastery                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForSubSkill_C::SetSkillInfo(int32 InSkillId, int32 InSkillLevel, bool InIsInformationHidden, bool InIsSkillMastery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForSubSkill_C", "SetSkillInfo");

	Params::SkillInfoIconForSubSkill_C_SetSkillInfo Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;
	Parms.InIsInformationHidden = InIsInformationHidden;
	Parms.InIsSkillMastery = InIsSkillMastery;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.SetLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForSubSkill_C::SetLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForSubSkill_C", "SetLevel");

	Params::SkillInfoIconForSubSkill_C_SetLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.SetIsSkillEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForSubSkill_C::SetIsSkillEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForSubSkill_C", "SetIsSkillEmpty");

	Params::SkillInfoIconForSubSkill_C_SetIsSkillEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForSubSkill.SkillInfoIconForSubSkill_C.InitSkillEmptyColor
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoIconForSubSkill_C::InitSkillEmptyColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForSubSkill_C", "InitSkillEmptyColor");

	UObject::ProcessEvent(Func, nullptr);
}

}


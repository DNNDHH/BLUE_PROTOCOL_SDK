#pragma once

 

// Package: SkillInfoIconForMainSkill

#include "Basic.hpp"

#include "SkillInfoIconForMainSkill_classes.hpp"
#include "SkillInfoIconForMainSkill_parameters.hpp"


namespace SDK
{

// Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.ExecuteUbergraph_SkillInfoIconForMainSkill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForMainSkill_C::ExecuteUbergraph_SkillInfoIconForMainSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForMainSkill_C", "ExecuteUbergraph_SkillInfoIconForMainSkill");

	Params::SkillInfoIconForMainSkill_C_ExecuteUbergraph_SkillInfoIconForMainSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForMainSkill_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForMainSkill_C", "PreConstruct");

	Params::SkillInfoIconForMainSkill_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoIconForMainSkill_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForMainSkill_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.CreateTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNotUseTooltip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForMainSkill_C::CreateTooltip(bool InIsNotUseTooltip)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForMainSkill_C", "CreateTooltip");

	Params::SkillInfoIconForMainSkill_C_CreateTooltip Parms{};

	Parms.InIsNotUseTooltip = InIsNotUseTooltip;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.SetSkillInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsInformationHidden                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSkillMastery                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForMainSkill_C::SetSkillInfo(int32 InSkillId, int32 InSkillLevel, bool InIsInformationHidden, bool InIsSkillMastery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForMainSkill_C", "SetSkillInfo");

	Params::SkillInfoIconForMainSkill_C_SetSkillInfo Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;
	Parms.InIsInformationHidden = InIsInformationHidden;
	Parms.InIsSkillMastery = InIsSkillMastery;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.SetLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconForMainSkill_C::SetLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForMainSkill_C", "SetLevel");

	Params::SkillInfoIconForMainSkill_C_SetLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.SetIsSkillEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconForMainSkill_C::SetIsSkillEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForMainSkill_C", "SetIsSkillEmpty");

	Params::SkillInfoIconForMainSkill_C_SetIsSkillEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconForMainSkill.SkillInfoIconForMainSkill_C.InitSkillEmptyColor
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoIconForMainSkill_C::InitSkillEmptyColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconForMainSkill_C", "InitSkillEmptyColor");

	UObject::ProcessEvent(Func, nullptr);
}

}


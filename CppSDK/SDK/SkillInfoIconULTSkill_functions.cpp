#pragma once

 

// Package: SkillInfoIconULTSkill

#include "Basic.hpp"

#include "SkillInfoIconULTSkill_classes.hpp"
#include "SkillInfoIconULTSkill_parameters.hpp"


namespace SDK
{

// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.ExecuteUbergraph_SkillInfoIconULTSkill
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconULTSkill_C::ExecuteUbergraph_SkillInfoIconULTSkill(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "ExecuteUbergraph_SkillInfoIconULTSkill");

	Params::SkillInfoIconULTSkill_C_ExecuteUbergraph_SkillInfoIconULTSkill Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconULTSkill_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "PreConstruct");

	Params::SkillInfoIconULTSkill_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USkillInfoIconULTSkill_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.CreateTooltip
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsNotUseTooltip                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsSkillMastered                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconULTSkill_C::CreateTooltip(bool InIsNotUseTooltip, bool InIsSkillMastered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "CreateTooltip");

	Params::SkillInfoIconULTSkill_C_CreateTooltip Parms{};

	Parms.InIsNotUseTooltip = InIsNotUseTooltip;
	Parms.InIsSkillMastered = InIsSkillMastered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetSkillInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsSkillMastery                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    InIsInformationHidden                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconULTSkill_C::SetSkillInfo(int32 InSkillId, int32 InSkillLevel, ESBClassType InClassType, bool InIsSkillMastery, bool InIsInformationHidden)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "SetSkillInfo");

	Params::SkillInfoIconULTSkill_C_SetSkillInfo Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;
	Parms.InClassType = InClassType;
	Parms.InIsSkillMastery = InIsSkillMastery;
	Parms.InIsInformationHidden = InIsInformationHidden;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillInfoIconULTSkill_C::SetLevel(int32 InLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "SetLevel");

	Params::SkillInfoIconULTSkill_C_SetLevel Parms{};

	Parms.InLevel = InLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.SetIsSkillEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconULTSkill_C::SetIsSkillEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "SetIsSkillEmpty");

	Params::SkillInfoIconULTSkill_C_SetIsSkillEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.InitSkillStopUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void USkillInfoIconULTSkill_C::InitSkillStopUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "InitSkillStopUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillInfoIconULTSkill.SkillInfoIconULTSkill_C.UpdateSkillIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsMastery                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillInfoIconULTSkill_C::UpdateSkillIcon(bool InIsMastery)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillInfoIconULTSkill_C", "UpdateSkillIcon");

	Params::SkillInfoIconULTSkill_C_UpdateSkillIcon Parms{};

	Parms.InIsMastery = InIsMastery;

	UObject::ProcessEvent(Func, &Parms);
}

}


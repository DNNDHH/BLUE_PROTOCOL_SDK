#pragma once

 

// Package: SkillBuffInfoList

#include "Basic.hpp"

#include "SkillBuffInfoList_classes.hpp"
#include "SkillBuffInfoList_parameters.hpp"


namespace SDK
{

// Function SkillBuffInfoList.SkillBuffInfoList_C.ExecuteUbergraph_SkillBuffInfoList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillBuffInfoList_C::ExecuteUbergraph_SkillBuffInfoList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillBuffInfoList_C", "ExecuteUbergraph_SkillBuffInfoList");

	Params::SkillBuffInfoList_C_ExecuteUbergraph_SkillBuffInfoList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillBuffInfoList.SkillBuffInfoList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USkillBuffInfoList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillBuffInfoList_C", "PreConstruct");

	Params::SkillBuffInfoList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SkillBuffInfoList.SkillBuffInfoList_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void USkillBuffInfoList_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillBuffInfoList_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SkillBuffInfoList.SkillBuffInfoList_C.SetSKill
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSkillId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InSkillLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USkillBuffInfoList_C::SetSKill(int32 InSkillId, int32 InSkillLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SkillBuffInfoList_C", "SetSKill");

	Params::SkillBuffInfoList_C_SetSKill Parms{};

	Parms.InSkillId = InSkillId;
	Parms.InSkillLevel = InSkillLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}


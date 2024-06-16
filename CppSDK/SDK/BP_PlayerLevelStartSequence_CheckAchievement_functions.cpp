#pragma once

 

// Package: BP_PlayerLevelStartSequence_CheckAchievement

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequence_CheckAchievement_classes.hpp"
#include "BP_PlayerLevelStartSequence_CheckAchievement_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequence_CheckAchievement_C::ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckAchievement_C", "ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement");

	Params::BP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequence_CheckAchievement_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckAchievement_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.GetDescription
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UBP_PlayerLevelStartSequence_CheckAchievement_C::GetDescription()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckAchievement_C", "GetDescription");

	Params::BP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.SetMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequence_CheckAchievement_C::SetMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequence_CheckAchievement_C", "SetMessage");

	UObject::ProcessEvent(Func, nullptr);
}

}


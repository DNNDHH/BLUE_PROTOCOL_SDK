#pragma once

 

// Package: BP_PlayerLevelStartSequenceActivateDungeon

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceActivateDungeon_classes.hpp"
#include "BP_PlayerLevelStartSequenceActivateDungeon_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceActivateDungeon_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivateDungeon_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon");

	Params::BP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.DialogEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceActivateDungeon_C::DialogEnd(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivateDungeon_C", "DialogEnd");

	Params::BP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.GetActiveDungeons
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     OutArray                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_PlayerLevelStartSequenceActivateDungeon_C::GetActiveDungeons(const TArray<class FName>& OutArray)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivateDungeon_C", "GetActiveDungeons");

	Params::BP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons Parms{};

	Parms.OutArray = std::move(OutArray);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceActivateDungeon_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceActivateDungeon_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}

}


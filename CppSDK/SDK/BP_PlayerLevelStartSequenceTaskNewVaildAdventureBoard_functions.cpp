#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard");

	Params::BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.OnRankupCompleteDelegete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRetCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C::OnRankupCompleteDelegete_Event(int32 InRetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C", "OnRankupCompleteDelegete_Event");

	Params::BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event Parms{};

	Parms.InRetCode = InRetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}

}


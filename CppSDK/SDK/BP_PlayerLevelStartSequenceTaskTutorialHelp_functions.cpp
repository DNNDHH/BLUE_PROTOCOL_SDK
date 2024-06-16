#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskTutorialHelp

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskTutorialHelp_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskTutorialHelp_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskTutorialHelp_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp");

	Params::BP_PlayerLevelStartSequenceTaskTutorialHelp_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskTutorialHelp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.OnClose_Event
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::OnClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskTutorialHelp_C", "OnClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.CreateTutorialHelpDialog
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::CreateTutorialHelpDialog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskTutorialHelp_C", "CreateTutorialHelpDialog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskTutorialHelp.BP_PlayerLevelStartSequenceTaskTutorialHelp_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskTutorialHelp_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskTutorialHelp_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}

}


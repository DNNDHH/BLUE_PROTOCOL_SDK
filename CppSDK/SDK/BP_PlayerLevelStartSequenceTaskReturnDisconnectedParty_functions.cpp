#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty");

	Params::BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.OnReturnDisconnectedPartyComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ReturnPartyResultMessageIndex                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::OnReturnDisconnectedPartyComplete_Event(const bool bWasSuccessful, const int32 ReturnPartyResultMessageIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C", "OnReturnDisconnectedPartyComplete_Event");

	Params::BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.ReturnPartyResultMessageIndex = ReturnPartyResultMessageIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.EndTask
// (BlueprintCallable, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::EndTask()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C", "EndTask");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.RequestGetBagItems_API
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::RequestGetBagItems_API(bool* bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C", "RequestGetBagItems_API");

	Params::BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;
}


// Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.GetStorageComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPlayerStorageComponent*        StorageComponent                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C::GetStorageComponent(class USBPlayerStorageComponent** StorageComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C", "GetStorageComponent");

	Params::BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (StorageComponent != nullptr)
		*StorageComponent = Parms.StorageComponent;
}

}


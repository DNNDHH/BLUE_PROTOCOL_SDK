#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage

#include "Basic.hpp"

#include "BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_classes.hpp"
#include "BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_parameters.hpp"


namespace SDK
{

// Function BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C", "ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage");

	Params::BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage.BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C.Start
// (Event, Public, BlueprintEvent)

void UBP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PlayerLevelStartSequenceTaskExpiryItemsNotifyMessage_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}

}


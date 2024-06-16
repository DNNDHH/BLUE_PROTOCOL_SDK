#pragma once

 

// Package: ChatLogFloatStamp_DateTime

#include "Basic.hpp"

#include "ChatLogFloatStamp_DateTime_classes.hpp"
#include "ChatLogFloatStamp_DateTime_parameters.hpp"


namespace SDK
{

// Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.ExecuteUbergraph_ChatLogFloatStamp_DateTime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogFloatStamp_DateTime_C::ExecuteUbergraph_ChatLogFloatStamp_DateTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStamp_DateTime_C", "ExecuteUbergraph_ChatLogFloatStamp_DateTime");

	Params::ChatLogFloatStamp_DateTime_C_ExecuteUbergraph_ChatLogFloatStamp_DateTime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogFloatStamp_DateTime.ChatLogFloatStamp_DateTime_C.SetExpiryDateTime
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        ExpiryDateTime                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UChatLogFloatStamp_DateTime_C::SetExpiryDateTime(const struct FDateTime& ExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogFloatStamp_DateTime_C", "SetExpiryDateTime");

	Params::ChatLogFloatStamp_DateTime_C_SetExpiryDateTime Parms{};

	Parms.ExpiryDateTime = std::move(ExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}

}


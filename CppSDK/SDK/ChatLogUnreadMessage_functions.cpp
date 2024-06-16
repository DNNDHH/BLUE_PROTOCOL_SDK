#pragma once

 

// Package: ChatLogUnreadMessage

#include "Basic.hpp"

#include "ChatLogUnreadMessage_classes.hpp"
#include "ChatLogUnreadMessage_parameters.hpp"


namespace SDK
{

// Function ChatLogUnreadMessage.ChatLogUnreadMessage_C.ZeroPadding
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             RetValue                                               (Parm, OutParm)

void UChatLogUnreadMessage_C::ZeroPadding(int32 InValue, class FText* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogUnreadMessage_C", "ZeroPadding");

	Params::ChatLogUnreadMessage_C_ZeroPadding Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = std::move(Parms.RetValue);
}

}


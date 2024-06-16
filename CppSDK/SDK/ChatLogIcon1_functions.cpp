#pragma once

 

// Package: ChatLogIcon1

#include "Basic.hpp"

#include "ChatLogIcon1_classes.hpp"
#include "ChatLogIcon1_parameters.hpp"


namespace SDK
{

// Function ChatLogIcon1.ChatLogIcon1_C.SetIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBChatLogType                          ChatLogType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogIcon1_C::SetIcon(ESBChatLogType ChatLogType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogIcon1_C", "SetIcon");

	Params::ChatLogIcon1_C_SetIcon Parms{};

	Parms.ChatLogType = ChatLogType;

	UObject::ProcessEvent(Func, &Parms);
}

}


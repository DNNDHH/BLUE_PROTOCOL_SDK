#pragma once

 

// Package: ChatLogOtherMessageTempList

#include "Basic.hpp"

#include "ChatLogOtherMessageTempList_classes.hpp"
#include "ChatLogOtherMessageTempList_parameters.hpp"


namespace SDK
{

// Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMessLog                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UChatLogOtherMessageTempList_C::Init(const struct FSBChatUIMessage& InMessLog)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherMessageTempList_C", "Init");

	Params::ChatLogOtherMessageTempList_C_Init Parms{};

	Parms.InMessLog = std::move(InMessLog);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogOtherMessageTempList.ChatLogOtherMessageTempList_C.ZeroPadding
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             RetValue                                               (Parm, OutParm)

void UChatLogOtherMessageTempList_C::ZeroPadding(int32 InValue, class FText* RetValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogOtherMessageTempList_C", "ZeroPadding");

	Params::ChatLogOtherMessageTempList_C_ZeroPadding Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RetValue != nullptr)
		*RetValue = std::move(Parms.RetValue);
}

}


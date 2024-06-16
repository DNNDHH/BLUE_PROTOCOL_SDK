#pragma once

 

// Package: UMG_Notifications

#include "Basic.hpp"

#include "UMG_Notifications_classes.hpp"
#include "UMG_Notifications_parameters.hpp"


namespace SDK
{

// Function UMG_Notifications.UMG_Notifications_C.Get_PartyInvitationReceivedIcon_Visibility_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESlateVisibility                        ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESlateVisibility UUMG_Notifications_C::Get_PartyInvitationReceivedIcon_Visibility_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_Notifications_C", "Get_PartyInvitationReceivedIcon_Visibility_0");

	Params::UMG_Notifications_C_Get_PartyInvitationReceivedIcon_Visibility_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


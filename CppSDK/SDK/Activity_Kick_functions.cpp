#pragma once

 

// Package: Activity_Kick

#include "Basic.hpp"

#include "Activity_Kick_classes.hpp"
#include "Activity_Kick_parameters.hpp"


namespace SDK
{

// Function Activity_Kick.Activity_Kick_C.ExecuteUbergraph_Activity_Kick
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivity_Kick_C::ExecuteUbergraph_Activity_Kick(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_Kick_C", "ExecuteUbergraph_Activity_Kick");

	Params::Activity_Kick_C_ExecuteUbergraph_Activity_Kick Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_Kick.Activity_Kick_C.BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Keys                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   Values                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_Kick_C::BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature(const TArray<class FString>& Keys, const TArray<class FString>& Values)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_Kick_C", "BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");

	Params::Activity_Kick_C_BndEvt__Activity_Kick_Txt_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature Parms{};

	Parms.Keys = std::move(Keys);
	Parms.Values = std::move(Values);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_Kick.Activity_Kick_C.SetActivity_Internal
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGuildActivity                   Other                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_Kick_C::SetActivity_Internal(const struct FGuildActivity& Other)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_Kick_C", "SetActivity_Internal");

	Params::Activity_Kick_C_SetActivity_Internal Parms{};

	Parms.Other = std::move(Other);

	UObject::ProcessEvent(Func, &Parms);
}

}


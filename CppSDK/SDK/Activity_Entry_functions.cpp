#pragma once

 

// Package: Activity_Entry

#include "Basic.hpp"

#include "Activity_Entry_classes.hpp"
#include "Activity_Entry_parameters.hpp"


namespace SDK
{

// Function Activity_Entry.Activity_Entry_C.ExecuteUbergraph_Activity_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivity_Entry_C::ExecuteUbergraph_Activity_Entry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_Entry_C", "ExecuteUbergraph_Activity_Entry");

	Params::Activity_Entry_C_ExecuteUbergraph_Activity_Entry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_Entry.Activity_Entry_C.BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Keys                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   Values                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_Entry_C::BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature(const TArray<class FString>& Keys, const TArray<class FString>& Values)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_Entry_C", "BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature");

	Params::Activity_Entry_C_BndEvt__Activity_Entry_Txt_K2Node_ComponentBoundEvent_2_OnLinkClicked__DelegateSignature Parms{};

	Parms.Keys = std::move(Keys);
	Parms.Values = std::move(Values);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_Entry.Activity_Entry_C.SetActivity_Internal
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGuildActivity                   Other                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_Entry_C::SetActivity_Internal(const struct FGuildActivity& Other)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_Entry_C", "SetActivity_Internal");

	Params::Activity_Entry_C_SetActivity_Internal Parms{};

	Parms.Other = std::move(Other);

	UObject::ProcessEvent(Func, &Parms);
}

}


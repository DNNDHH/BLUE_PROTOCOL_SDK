#pragma once

 

// Package: Activity_GuildOrganize

#include "Basic.hpp"

#include "Activity_GuildOrganize_classes.hpp"
#include "Activity_GuildOrganize_parameters.hpp"


namespace SDK
{

// Function Activity_GuildOrganize.Activity_GuildOrganize_C.ExecuteUbergraph_Activity_GuildOrganize
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivity_GuildOrganize_C::ExecuteUbergraph_Activity_GuildOrganize(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_GuildOrganize_C", "ExecuteUbergraph_Activity_GuildOrganize");

	Params::Activity_GuildOrganize_C_ExecuteUbergraph_Activity_GuildOrganize Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_GuildOrganize.Activity_GuildOrganize_C.BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>                   Keys                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FString>                   Values                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_GuildOrganize_C::BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature(const TArray<class FString>& Keys, const TArray<class FString>& Values)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_GuildOrganize_C", "BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature");

	Params::Activity_GuildOrganize_C_BndEvt__Activity_GuildOrganize_RichText_K2Node_ComponentBoundEvent_1_OnLinkClicked__DelegateSignature Parms{};

	Parms.Keys = std::move(Keys);
	Parms.Values = std::move(Values);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_GuildOrganize.Activity_GuildOrganize_C.SetActivity_Internal
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGuildActivity                   Other                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UActivity_GuildOrganize_C::SetActivity_Internal(const struct FGuildActivity& Other)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_GuildOrganize_C", "SetActivity_Internal");

	Params::Activity_GuildOrganize_C_SetActivity_Internal Parms{};

	Parms.Other = std::move(Other);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Activity_GuildOrganize.Activity_GuildOrganize_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActivity_GuildOrganize_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Activity_GuildOrganize_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


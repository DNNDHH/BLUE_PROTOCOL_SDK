#pragma once

 

// Package: GuildMemberManageCBIcon

#include "Basic.hpp"

#include "GuildMemberManageCBIcon_classes.hpp"
#include "GuildMemberManageCBIcon_parameters.hpp"


namespace SDK
{

// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.OnUpdateState__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildMemberManageCBIcon_C::OnUpdateState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberManageCBIcon_C", "OnUpdateState__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.ExecuteUbergraph_GuildMemberManageCBIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberManageCBIcon_C::ExecuteUbergraph_GuildMemberManageCBIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberManageCBIcon_C", "ExecuteUbergraph_GuildMemberManageCBIcon");

	Params::GuildMemberManageCBIcon_C_ExecuteUbergraph_GuildMemberManageCBIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberManageCBIcon_C::BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberManageCBIcon_C", "BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	Params::GuildMemberManageCBIcon_C_BndEvt__GuildMemberManageCBIcon_CB_Check_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature Parms{};

	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetTextById
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_TextId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberManageCBIcon_C::SetTextById(int32 Param_TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberManageCBIcon_C", "SetTextById");

	Params::GuildMemberManageCBIcon_C_SetTextById Parms{};

	Parms.Param_TextId = Param_TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.IsCheck
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Param_IsCheck                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberManageCBIcon_C::IsCheck(bool* Param_IsCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberManageCBIcon_C", "IsCheck");

	Params::GuildMemberManageCBIcon_C_IsCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_IsCheck != nullptr)
		*Param_IsCheck = Parms.Param_IsCheck;
}


// Function GuildMemberManageCBIcon.GuildMemberManageCBIcon_C.SetChecked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsCheck                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberManageCBIcon_C::SetChecked(bool bIsCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberManageCBIcon_C", "SetChecked");

	Params::GuildMemberManageCBIcon_C_SetChecked Parms{};

	Parms.bIsCheck = bIsCheck;

	UObject::ProcessEvent(Func, &Parms);
}

}


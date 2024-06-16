#pragma once

 

// Package: GuildDetailsMenu

#include "Basic.hpp"

#include "GuildDetailsMenu_classes.hpp"
#include "GuildDetailsMenu_parameters.hpp"


namespace SDK
{

// Function GuildDetailsMenu.GuildDetailsMenu_C.ExecuteUbergraph_GuildDetailsMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetailsMenu_C::ExecuteUbergraph_GuildDetailsMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetailsMenu_C", "ExecuteUbergraph_GuildDetailsMenu");

	Params::GuildDetailsMenu_C_ExecuteUbergraph_GuildDetailsMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetailsMenu.GuildDetailsMenu_C.OnCompleteGetGuildData_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildDetailsMenu_C::OnCompleteGetGuildData_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetailsMenu_C", "OnCompleteGetGuildData_Event");

	Params::GuildDetailsMenu_C_OnCompleteGetGuildData_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetailsMenu.GuildDetailsMenu_C.BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                                    Edit                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildDetailsMenu_C::BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature(bool Edit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetailsMenu_C", "BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature");

	Params::GuildDetailsMenu_C_BndEvt__GuildDetailsMenu_GuildDetails_K2Node_ComponentBoundEvent_0_EventEdit__DelegateSignature Parms{};

	Parms.Edit = Edit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildDetailsMenu.GuildDetailsMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildDetailsMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetailsMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildDetailsMenu.GuildDetailsMenu_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildDetailsMenu_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetailsMenu_C", "GetGuildComp");

	Params::GuildDetailsMenu_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildDetailsMenu.GuildDetailsMenu_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildDetailsMenu_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildDetailsMenu_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

 

// Package: GuildActivity

#include "Basic.hpp"

#include "GuildActivity_classes.hpp"
#include "GuildActivity_parameters.hpp"


namespace SDK
{

// Function GuildActivity.GuildActivity_C.ExecuteUbergraph_GuildActivity
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivity_C::ExecuteUbergraph_GuildActivity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivity_C", "ExecuteUbergraph_GuildActivity");

	Params::GuildActivity_C_ExecuteUbergraph_GuildActivity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivity.GuildActivity_C.OnCompleteProfileLoaded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivity_C::OnCompleteProfileLoaded(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivity_C", "OnCompleteProfileLoaded");

	Params::GuildActivity_C_OnCompleteProfileLoaded Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivity.GuildActivity_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildActivity_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivity_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildActivity.GuildActivity_C.RequestGetGuildActivity
// (BlueprintCallable, BlueprintEvent)

void UGuildActivity_C::RequestGetGuildActivity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivity_C", "RequestGetGuildActivity");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildActivity.GuildActivity_C.OnCompleteGuildActivity_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivity_C::OnCompleteGuildActivity_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivity_C", "OnCompleteGuildActivity_Event");

	Params::GuildActivity_C_OnCompleteGuildActivity_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildActivity.GuildActivity_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          Component                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildActivity_C::GetGuildComp(class USBPlayerGuildComponent** Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivity_C", "GetGuildComp");

	Params::GuildActivity_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;
}


// Function GuildActivity.GuildActivity_C.IsRequested
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildActivity_C::IsRequested(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildActivity_C", "IsRequested");

	Params::GuildActivity_C_IsRequested Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}

}


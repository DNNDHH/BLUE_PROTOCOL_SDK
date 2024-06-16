#pragma once

 

// Package: GuildRankMenu

#include "Basic.hpp"

#include "GuildRankMenu_classes.hpp"
#include "GuildRankMenu_parameters.hpp"


namespace SDK
{

// Function GuildRankMenu.GuildRankMenu_C.ExecuteUbergraph_GuildRankMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRankMenu_C::ExecuteUbergraph_GuildRankMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRankMenu_C", "ExecuteUbergraph_GuildRankMenu");

	Params::GuildRankMenu_C_ExecuteUbergraph_GuildRankMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRankMenu.GuildRankMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildRankMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRankMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRankMenu.GuildRankMenu_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildRankMenu_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRankMenu_C", "GetGuildComp");

	Params::GuildRankMenu_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildRankMenu.GuildRankMenu_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildRankMenu_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRankMenu_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRankMenu.GuildRankMenu_C.GenerateRankItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildRankMenu_C::GenerateRankItems()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRankMenu_C", "GenerateRankItems");

	UObject::ProcessEvent(Func, nullptr);
}

}


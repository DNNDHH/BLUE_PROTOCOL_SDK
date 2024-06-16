#pragma once

 

// Package: GuildTag

#include "Basic.hpp"

#include "GuildTag_classes.hpp"
#include "GuildTag_parameters.hpp"


namespace SDK
{

// Function GuildTag.GuildTag_C.ExecuteUbergraph_GuildTag
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildTag_C::ExecuteUbergraph_GuildTag(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTag_C", "ExecuteUbergraph_GuildTag");

	Params::GuildTag_C_ExecuteUbergraph_GuildTag Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTag.GuildTag_C.SetTag
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_TeamTag                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildTag_C::SetTag(const class FString& Param_TeamTag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTag_C", "SetTag");

	Params::GuildTag_C_SetTag Parms{};

	Parms.Param_TeamTag = std::move(Param_TeamTag);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildTag.GuildTag_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildTag_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildTag_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


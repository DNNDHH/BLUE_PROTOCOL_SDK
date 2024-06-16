#pragma once

 

// Package: PartyMemberInfo_PlayerStatus

#include "Basic.hpp"

#include "PartyMemberInfo_PlayerStatus_classes.hpp"
#include "PartyMemberInfo_PlayerStatus_parameters.hpp"


namespace SDK
{

// Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.ExecuteUbergraph_PartyMemberInfo_PlayerStatus
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_PlayerStatus_C::ExecuteUbergraph_PartyMemberInfo_PlayerStatus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_PlayerStatus_C", "ExecuteUbergraph_PartyMemberInfo_PlayerStatus");

	Params::PartyMemberInfo_PlayerStatus_C_ExecuteUbergraph_PartyMemberInfo_PlayerStatus Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPartyMemberInfo_PlayerStatus_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_PlayerStatus_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.SetMapName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPartyMemberInfo_PlayerStatus_C::SetMapName(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_PlayerStatus_C", "SetMapName");

	Params::PartyMemberInfo_PlayerStatus_C_SetMapName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_PlayerStatus.PartyMemberInfo_PlayerStatus_C.GetMapName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OutPlayerName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UPartyMemberInfo_PlayerStatus_C::GetMapName(class FString* OutPlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_PlayerStatus_C", "GetMapName");

	Params::PartyMemberInfo_PlayerStatus_C_GetMapName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPlayerName != nullptr)
		*OutPlayerName = std::move(Parms.OutPlayerName);
}

}


#pragma once

 

// Package: PartyMemberInfo_PlayerName

#include "Basic.hpp"

#include "PartyMemberInfo_PlayerName_classes.hpp"
#include "PartyMemberInfo_PlayerName_parameters.hpp"


namespace SDK
{

// Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.ExecuteUbergraph_PartyMemberInfo_PlayerName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPartyMemberInfo_PlayerName_C::ExecuteUbergraph_PartyMemberInfo_PlayerName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_PlayerName_C", "ExecuteUbergraph_PartyMemberInfo_PlayerName");

	Params::PartyMemberInfo_PlayerName_C_ExecuteUbergraph_PartyMemberInfo_PlayerName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.OnSetPlayerName
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             InCacheCharacterName                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    IsBlock                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    Param_IsUGC                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyMemberInfo_PlayerName_C::OnSetPlayerName(const class FText& InCacheCharacterName, bool IsBlock, const class FString& PlayerId, const class FString& CharacterId, bool Param_IsUGC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_PlayerName_C", "OnSetPlayerName");

	Params::PartyMemberInfo_PlayerName_C_OnSetPlayerName Parms{};

	Parms.InCacheCharacterName = std::move(InCacheCharacterName);
	Parms.IsBlock = IsBlock;
	Parms.PlayerId = std::move(PlayerId);
	Parms.CharacterId = std::move(CharacterId);
	Parms.Param_IsUGC = Param_IsUGC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.SetPlayerName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    IsBlock                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           PlayerId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    InIsUGC                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPartyMemberInfo_PlayerName_C::SetPlayerName(const class FString& InName, bool IsBlock, const class FString& PlayerId, const class FString& CharacterId, bool InIsUGC)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_PlayerName_C", "SetPlayerName");

	Params::PartyMemberInfo_PlayerName_C_SetPlayerName Parms{};

	Parms.InName = std::move(InName);
	Parms.IsBlock = IsBlock;
	Parms.PlayerId = std::move(PlayerId);
	Parms.CharacterId = std::move(CharacterId);
	Parms.InIsUGC = InIsUGC;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PartyMemberInfo_PlayerName.PartyMemberInfo_PlayerName_C.GetPlayerName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           OutPlayerName                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UPartyMemberInfo_PlayerName_C::GetPlayerName(class FString* OutPlayerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PartyMemberInfo_PlayerName_C", "GetPlayerName");

	Params::PartyMemberInfo_PlayerName_C_GetPlayerName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPlayerName != nullptr)
		*OutPlayerName = std::move(Parms.OutPlayerName);
}

}


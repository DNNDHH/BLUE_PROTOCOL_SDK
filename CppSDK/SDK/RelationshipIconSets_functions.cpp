#pragma once

 

// Package: RelationshipIconSets

#include "Basic.hpp"

#include "RelationshipIconSets_classes.hpp"
#include "RelationshipIconSets_parameters.hpp"


namespace SDK
{

// Function RelationshipIconSets.RelationshipIconSets_C.ExecuteUbergraph_RelationshipIconSets
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URelationshipIconSets_C::ExecuteUbergraph_RelationshipIconSets(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RelationshipIconSets_C", "ExecuteUbergraph_RelationshipIconSets");

	Params::RelationshipIconSets_C_ExecuteUbergraph_RelationshipIconSets Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RelationshipIconSets.RelationshipIconSets_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void URelationshipIconSets_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RelationshipIconSets_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RelationshipIconSets.RelationshipIconSets_C.InitFromGuild
// (Public, BlueprintCallable, BlueprintEvent)

void URelationshipIconSets_C::InitFromGuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RelationshipIconSets_C", "InitFromGuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function RelationshipIconSets.RelationshipIconSets_C.InitFromParty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              InPartyMemberState                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URelationshipIconSets_C::InitFromParty(class USBPartyMemberState* InPartyMemberState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RelationshipIconSets_C", "InitFromParty");

	Params::RelationshipIconSets_C_InitFromParty Parms{};

	Parms.InPartyMemberState = InPartyMemberState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RelationshipIconSets.RelationshipIconSets_C.InitPartyIcons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsMember                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsLeader                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URelationshipIconSets_C::InitPartyIcons(bool IsMember, bool IsLeader)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RelationshipIconSets_C", "InitPartyIcons");

	Params::RelationshipIconSets_C_InitPartyIcons Parms{};

	Parms.IsMember = IsMember;
	Parms.IsLeader = IsLeader;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RelationshipIconSets.RelationshipIconSets_C.InitFollowState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsFriend                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URelationshipIconSets_C::InitFollowState(bool InIsFriend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RelationshipIconSets_C", "InitFollowState");

	Params::RelationshipIconSets_C_InitFollowState Parms{};

	Parms.InIsFriend = InIsFriend;

	UObject::ProcessEvent(Func, &Parms);
}


// Function RelationshipIconSets.RelationshipIconSets_C.InitFriendState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bFriend                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URelationshipIconSets_C::InitFriendState(bool bFriend)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RelationshipIconSets_C", "InitFriendState");

	Params::RelationshipIconSets_C_InitFriendState Parms{};

	Parms.bFriend = bFriend;

	UObject::ProcessEvent(Func, &Parms);
}

}


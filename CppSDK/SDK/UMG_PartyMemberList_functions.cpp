#pragma once

 

// Package: UMG_PartyMemberList

#include "Basic.hpp"

#include "UMG_PartyMemberList_classes.hpp"
#include "UMG_PartyMemberList_parameters.hpp"


namespace SDK
{

// Function UMG_PartyMemberList.UMG_PartyMemberList_C.OnUpdatedMemberList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_PartyMemberList_C::OnUpdatedMemberList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_C", "OnUpdatedMemberList__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList.UMG_PartyMemberList_C.ExecuteUbergraph_UMG_PartyMemberList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_C::ExecuteUbergraph_UMG_PartyMemberList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_C", "ExecuteUbergraph_UMG_PartyMemberList");

	Params::UMG_PartyMemberList_C_ExecuteUbergraph_UMG_PartyMemberList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMemberList.UMG_PartyMemberList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PartyMemberList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList.UMG_PartyMemberList_C.OnFollowStateChanged_Event
// (BlueprintCallable, BlueprintEvent)

void UUMG_PartyMemberList_C::OnFollowStateChanged_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_C", "OnFollowStateChanged_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList.UMG_PartyMemberList_C.HandlePartyMemberUpdate
// (BlueprintCallable, BlueprintEvent)

void UUMG_PartyMemberList_C::HandlePartyMemberUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_C", "HandlePartyMemberUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList.UMG_PartyMemberList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PartyMemberList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList.UMG_PartyMemberList_C.ResetPartyMemberList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_PartyMemberList_C::ResetPartyMemberList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_C", "ResetPartyMemberList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList.UMG_PartyMemberList_C.GetPartyListIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_C::GetPartyListIndex(int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_C", "GetPartyListIndex");

	Params::UMG_PartyMemberList_C_GetPartyListIndex Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}

}


#pragma once

 

// Package: UMG_PartyMemberList_Union

#include "Basic.hpp"

#include "UMG_PartyMemberList_Union_classes.hpp"
#include "UMG_PartyMemberList_Union_parameters.hpp"


namespace SDK
{

// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ExecuteUbergraph_UMG_PartyMemberList_Union
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_Union_C::ExecuteUbergraph_UMG_PartyMemberList_Union(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_Union_C", "ExecuteUbergraph_UMG_PartyMemberList_Union");

	Params::UMG_PartyMemberList_Union_C_ExecuteUbergraph_UMG_PartyMemberList_Union Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PartyMemberList_Union_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_Union_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.Update Member List
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUMG_PartyMemberList_Union_C::Update_Member_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_Union_C", "Update Member List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.CreateMemberListWidget
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_PartyMemberList_UnionList_C* OutMemberListWidget                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USBPartyMemberState*>      InMemberList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   InStart                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InLimitCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NextMemberIndex                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_PartyMemberList_UnionList_C* OutListWidget                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_Union_C::CreateMemberListWidget(class UUMG_PartyMemberList_UnionList_C* OutMemberListWidget, TArray<class USBPartyMemberState*>& InMemberList, int32 InStart, int32 InLimitCount, int32* NextMemberIndex, class UUMG_PartyMemberList_UnionList_C** OutListWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_Union_C", "CreateMemberListWidget");

	Params::UMG_PartyMemberList_Union_C_CreateMemberListWidget Parms{};

	Parms.OutMemberListWidget = OutMemberListWidget;
	Parms.InMemberList = std::move(InMemberList);
	Parms.InStart = InStart;
	Parms.InLimitCount = InLimitCount;

	UObject::ProcessEvent(Func, &Parms);

	InMemberList = std::move(Parms.InMemberList);

	if (NextMemberIndex != nullptr)
		*NextMemberIndex = Parms.NextMemberIndex;

	if (OutListWidget != nullptr)
		*OutListWidget = Parms.OutListWidget;
}


// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.ResetMemberListVisibility
// (Private, BlueprintCallable, BlueprintEvent)

void UUMG_PartyMemberList_Union_C::ResetMemberListVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_Union_C", "ResetMemberListVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList_Union.UMG_PartyMemberList_Union_C.GetPartyType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_PartyListPartyType                    PartyType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_Union_C::GetPartyType(E_PartyListPartyType* PartyType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_Union_C", "GetPartyType");

	Params::UMG_PartyMemberList_Union_C_GetPartyType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PartyType != nullptr)
		*PartyType = Parms.PartyType;
}

}


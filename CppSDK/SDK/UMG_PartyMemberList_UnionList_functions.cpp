#pragma once

 

// Package: UMG_PartyMemberList_UnionList

#include "Basic.hpp"

#include "UMG_PartyMemberList_UnionList_classes.hpp"
#include "UMG_PartyMemberList_UnionList_parameters.hpp"


namespace SDK
{

// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ExecuteUbergraph_UMG_PartyMemberList_UnionList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_UnionList_C::ExecuteUbergraph_UMG_PartyMemberList_UnionList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_UnionList_C", "ExecuteUbergraph_UMG_PartyMemberList_UnionList");

	Params::UMG_PartyMemberList_UnionList_C_ExecuteUbergraph_UMG_PartyMemberList_UnionList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_PartyMemberList_UnionList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_UnionList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.CreateMember
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBPartyMemberState*              PartyMemberState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bShowBattleStatus                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartyMemberList_UnionList_C::CreateMember(class USBPartyMemberState* PartyMemberState, bool bShowBattleStatus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_UnionList_C", "CreateMember");

	Params::UMG_PartyMemberList_UnionList_C_CreateMember Parms{};

	Parms.PartyMemberState = PartyMemberState;
	Parms.bShowBattleStatus = bShowBattleStatus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.AddMember
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InMemberWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_UnionList_C::AddMember(class UUserWidget* InMemberWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_UnionList_C", "AddMember");

	Params::UMG_PartyMemberList_UnionList_C_AddMember Parms{};

	Parms.InMemberWidget = InMemberWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.ClearMember
// (Public, BlueprintCallable, BlueprintEvent)

void UUMG_PartyMemberList_UnionList_C::ClearMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_UnionList_C", "ClearMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PartyListPartyType                    InPartyType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_UnionList_C::SetPartyTypeLabel(E_PartyListPartyType InPartyType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_UnionList_C", "SetPartyTypeLabel");

	Params::UMG_PartyMemberList_UnionList_C_SetPartyTypeLabel Parms{};

	Parms.InPartyType = InPartyType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.SetPartyTypeLabelEnable
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInEnable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PartyMemberList_UnionList_C::SetPartyTypeLabelEnable(bool bInEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_UnionList_C", "SetPartyTypeLabelEnable");

	Params::UMG_PartyMemberList_UnionList_C_SetPartyTypeLabelEnable Parms{};

	Parms.bInEnable = bInEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_PartyMemberList_UnionList.UMG_PartyMemberList_UnionList_C.GetPartyType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// E_PartyListPartyType                    Param_PartyType                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PartyMemberList_UnionList_C::GetPartyType(E_PartyListPartyType* Param_PartyType) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_PartyMemberList_UnionList_C", "GetPartyType");

	Params::UMG_PartyMemberList_UnionList_C_GetPartyType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_PartyType != nullptr)
		*Param_PartyType = Parms.Param_PartyType;
}

}


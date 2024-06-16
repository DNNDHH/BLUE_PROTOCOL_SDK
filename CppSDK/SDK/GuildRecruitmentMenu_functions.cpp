#pragma once

 

// Package: GuildRecruitmentMenu

#include "Basic.hpp"

#include "GuildRecruitmentMenu_classes.hpp"
#include "GuildRecruitmentMenu_parameters.hpp"


namespace SDK
{

// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnSelectRecruitmentEntryItem__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildRecruitmentMenu_C::OnSelectRecruitmentEntryItem__DelegateSignature(const struct FGuildEntryData& GuildEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "OnSelectRecruitmentEntryItem__DelegateSignature");

	Params::GuildRecruitmentMenu_C_OnSelectRecruitmentEntryItem__DelegateSignature Parms{};

	Parms.GuildEntry = std::move(GuildEntry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.ExecuteUbergraph_GuildRecruitmentMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentMenu_C::ExecuteUbergraph_GuildRecruitmentMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "ExecuteUbergraph_GuildRecruitmentMenu");

	Params::GuildRecruitmentMenu_C_ExecuteUbergraph_GuildRecruitmentMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Event_OnGetedGuildDatail
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuildData                       InGuildData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGuildRecruitmentMenu_C::Event_OnGetedGuildDatail(const int32 RetCode, const struct FGuildData& InGuildData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "Event_OnGetedGuildDatail");

	Params::GuildRecruitmentMenu_C_Event_OnGetedGuildDatail Parms{};

	Parms.RetCode = RetCode;
	Parms.InGuildData = std::move(InGuildData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetSendedEntries_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentMenu_C::OnCompletedGetSendedEntries_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "OnCompletedGetSendedEntries_Event");

	Params::GuildRecruitmentMenu_C_OnCompletedGetSendedEntries_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.OnCompletedGetInviteList_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentMenu_C::OnCompletedGetInviteList_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "OnCompletedGetInviteList_Event");

	Params::GuildRecruitmentMenu_C_OnCompletedGetInviteList_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntryData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildRecruitmentMenu_C::BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature");

	Params::GuildRecruitmentMenu_C_BndEvt__GuildRecruitmentMenu_GuildRecruitmentList_K2Node_ComponentBoundEvent_2_OnClickedGuildEntry__DelegateSignature Parms{};

	Parms.GuildEntryData = std::move(GuildEntryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildRecruitmentMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildRecruitmentMenu_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "GetGuildComp");

	Params::GuildRecruitmentMenu_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildRecruitmentMenu.GuildRecruitmentMenu_C.UpdateSelectGuideText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentMenu_C::UpdateSelectGuideText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentMenu_C", "UpdateSelectGuideText");

	UObject::ProcessEvent(Func, nullptr);
}

}


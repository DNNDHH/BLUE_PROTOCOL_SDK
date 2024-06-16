#pragma once

 

// Package: GuildRecruitmentDetailCard

#include "Basic.hpp"

#include "GuildRecruitmentDetailCard_classes.hpp"
#include "GuildRecruitmentDetailCard_parameters.hpp"


namespace SDK
{

// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.ExecuteUbergraph_GuildRecruitmentDetailCard
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentDetailCard_C::ExecuteUbergraph_GuildRecruitmentDetailCard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "ExecuteUbergraph_GuildRecruitmentDetailCard");

	Params::GuildRecruitmentDetailCard_C_ExecuteUbergraph_GuildRecruitmentDetailCard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnEscape
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Event_OnEscape()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Event_OnEscape");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UGuildRecruitmentDetailCard_C::BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "BndEvt__GuildRecruitmentDetailCard_CmnClose03_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedCancelEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentDetailCard_C::Event_OnCompletedCancelEntry(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Event_OnCompletedCancelEntry");

	Params::GuildRecruitmentDetailCard_C_Event_OnCompletedCancelEntry Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildRecruitmentDetailCard_C::BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "BndEvt__GuildRecruitmentDetailCard_btn_space_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnClose
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Event_OnClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Event_OnClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_OnCompletedInviteArraignment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildRecruitmentDetailCard_C::Event_OnCompletedInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Event_OnCompletedInviteArraignment");

	Params::GuildRecruitmentDetailCard_C_Event_OnCompletedInviteArraignment Parms{};

	Parms.RetCode = RetCode;
	Parms.IsAccept = IsAccept;
	Parms.InEntryId = std::move(InEntryId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildInviteRefuse
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Event_GuildInviteRefuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Event_GuildInviteRefuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildEntryRefuse
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Event_GuildEntryRefuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Event_GuildEntryRefuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Event_GuildInviteAccept
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Event_GuildInviteAccept()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Event_GuildInviteAccept");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildRecruitmentDetailCard_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "GetGuildComp");

	Params::GuildRecruitmentDetailCard_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildData                       GuildData                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGuildEntryData                  GuildEntryData                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    bInvite                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildRecruitmentDetailCard_C::Initialize(const struct FGuildData& GuildData, const struct FGuildEntryData& GuildEntryData, bool bInvite)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Initialize");

	Params::GuildRecruitmentDetailCard_C_Initialize Parms{};

	Parms.GuildData = std::move(GuildData);
	Parms.GuildEntryData = std::move(GuildEntryData);
	Parms.bInvite = bInvite;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Invite Accept
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Guild_Invite_Accept()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Guild Invite Accept");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Invite Refuse
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Guild_Invite_Refuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Guild Invite Refuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Guild Entry Refuse
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentDetailCard_C::Guild_Entry_Refuse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Guild Entry Refuse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentDetailCard.GuildRecruitmentDetailCard_C.Send Answer To Invited Guild
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsAccept                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildRecruitmentDetailCard_C::Send_Answer_To_Invited_Guild(bool bIsAccept)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentDetailCard_C", "Send Answer To Invited Guild");

	Params::GuildRecruitmentDetailCard_C_Send_Answer_To_Invited_Guild Parms{};

	Parms.bIsAccept = bIsAccept;

	UObject::ProcessEvent(Func, &Parms);
}

}


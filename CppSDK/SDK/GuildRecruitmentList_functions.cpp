#pragma once

 

// Package: GuildRecruitmentList

#include "Basic.hpp"

#include "GuildRecruitmentList_classes.hpp"
#include "GuildRecruitmentList_parameters.hpp"


namespace SDK
{

// Function GuildRecruitmentList.GuildRecruitmentList_C.OnClickedGuildEntry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntryData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildRecruitmentList_C::OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "OnClickedGuildEntry__DelegateSignature");

	Params::GuildRecruitmentList_C_OnClickedGuildEntry__DelegateSignature Parms{};

	Parms.GuildEntryData = std::move(GuildEntryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.ExecuteUbergraph_GuildRecruitmentList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentList_C::ExecuteUbergraph_GuildRecruitmentList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "ExecuteUbergraph_GuildRecruitmentList");

	Params::GuildRecruitmentList_C_ExecuteUbergraph_GuildRecruitmentList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.Complete_OnClickedRecruitmentListItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildRecruitmentList_C::Complete_OnClickedRecruitmentListItem(const struct FGuildEntryData& GuildEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "Complete_OnClickedRecruitmentListItem");

	Params::GuildRecruitmentList_C_Complete_OnClickedRecruitmentListItem Parms{};

	Parms.GuildEntry = std::move(GuildEntry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.OnInviteArrived_Event
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentList_C::OnInviteArrived_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "OnInviteArrived_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.Event_OnCompletedInviteArraignment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildRecruitmentList_C::Event_OnCompletedInviteArraignment(const int32 RetCode, bool IsAccept, const class FString& InEntryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "Event_OnCompletedInviteArraignment");

	Params::GuildRecruitmentList_C_Event_OnCompletedInviteArraignment Parms{};

	Parms.RetCode = RetCode;
	Parms.IsAccept = IsAccept;
	Parms.InEntryId = std::move(InEntryId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompleteCancelEntry_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentList_C::OnCompleteCancelEntry_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "OnCompleteCancelEntry_Event");

	Params::GuildRecruitmentList_C_OnCompleteCancelEntry_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.GenerateInvites
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentList_C::GenerateInvites()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "GenerateInvites");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.Generate Entries
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentList_C::Generate_Entries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "Generate Entries");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGuildEntry_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentList_C::OnCompletedGuildEntry_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "OnCompletedGuildEntry_Event");

	Params::GuildRecruitmentList_C_OnCompletedGuildEntry_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGetSendedEntries_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentList_C::OnCompletedGetSendedEntries_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "OnCompletedGetSendedEntries_Event");

	Params::GuildRecruitmentList_C_OnCompletedGetSendedEntries_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentList_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.OnCompletedGetInviteList_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentList_C::OnCompletedGetInviteList_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "OnCompletedGetInviteList_Event");

	Params::GuildRecruitmentList_C_OnCompletedGetInviteList_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildRecruitmentList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildRecruitmentList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "PreConstruct");

	Params::GuildRecruitmentList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentList.GuildRecruitmentList_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildRecruitmentList_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentList_C", "GetGuildComp");

	Params::GuildRecruitmentList_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


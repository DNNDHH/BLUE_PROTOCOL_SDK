#pragma once

 

// Package: GuildEntriesList

#include "Basic.hpp"

#include "GuildEntriesList_classes.hpp"
#include "GuildEntriesList_parameters.hpp"


namespace SDK
{

// Function GuildEntriesList.GuildEntriesList_C.OnClickedGuildEntry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntryData                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildEntriesList_C::OnClickedGuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "OnClickedGuildEntry__DelegateSignature");

	Params::GuildEntriesList_C_OnClickedGuildEntry__DelegateSignature Parms{};

	Parms.GuildEntryData = std::move(GuildEntryData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.ExecuteUbergraph_GuildEntriesList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesList_C::ExecuteUbergraph_GuildEntriesList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "ExecuteUbergraph_GuildEntriesList");

	Params::GuildEntriesList_C_ExecuteUbergraph_GuildEntriesList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.OnInviteArrived_Event
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesList_C::OnInviteArrived_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "OnInviteArrived_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesList.GuildEntriesList_C.OnInviteArraiment
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildEntriesList_C::OnInviteArraiment(const int32 RetCode, bool IsAccept, const class FString& InEntryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "OnInviteArraiment");

	Params::GuildEntriesList_C_OnInviteArraiment Parms{};

	Parms.RetCode = RetCode;
	Parms.IsAccept = IsAccept;
	Parms.InEntryId = std::move(InEntryId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.OnCompleteCancelEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesList_C::OnCompleteCancelEntry(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "OnCompleteCancelEntry");

	Params::GuildEntriesList_C_OnCompleteCancelEntry Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.GenerateInvites
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesList_C::GenerateInvites()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "GenerateInvites");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesList.GuildEntriesList_C.Generate Entries
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesList_C::Generate_Entries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "Generate Entries");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesList.GuildEntriesList_C.OnCompletedGuildEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesList_C::OnCompletedGuildEntry(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "OnCompletedGuildEntry");

	Params::GuildEntriesList_C_OnCompletedGuildEntry Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetSendedEntries
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesList_C::OnCompletedGetSendedEntries(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "OnCompletedGetSendedEntries");

	Params::GuildEntriesList_C_OnCompletedGetSendedEntries Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesList_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesList.GuildEntriesList_C.OnCompletedGetInviteList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesList_C::OnCompletedGetInviteList(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "OnCompletedGetInviteList");

	Params::GuildEntriesList_C_OnCompletedGetInviteList Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.OnCompletedOnClickedGuildEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UGuildEntryItem_C*                SelectedBtn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesList_C::OnCompletedOnClickedGuildEntry(const struct FGuildEntryData& GuildEntry, class UGuildEntryItem_C* SelectedBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "OnCompletedOnClickedGuildEntry");

	Params::GuildEntriesList_C_OnCompletedOnClickedGuildEntry Parms{};

	Parms.GuildEntry = std::move(GuildEntry);
	Parms.SelectedBtn = SelectedBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildEntriesList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesList.GuildEntriesList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildEntriesList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "PreConstruct");

	Params::GuildEntriesList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesList.GuildEntriesList_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildEntriesList_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesList_C", "GetGuildComp");

	Params::GuildEntriesList_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


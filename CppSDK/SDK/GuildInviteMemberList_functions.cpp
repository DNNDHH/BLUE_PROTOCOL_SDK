#pragma once

 

// Package: GuildInviteMemberList

#include "Basic.hpp"

#include "GuildInviteMemberList_classes.hpp"
#include "GuildInviteMemberList_parameters.hpp"


namespace SDK
{

// Function GuildInviteMemberList.GuildInviteMemberList_C.OnSelectedMemberData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildInviteMemberList_C::OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "OnSelectedMemberData__DelegateSignature");

	Params::GuildInviteMemberList_C_OnSelectedMemberData__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildInviteMemberList_C::OnClickedCancelInvite__DelegateSignature(const struct FGuildMemberData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "OnClickedCancelInvite__DelegateSignature");

	Params::GuildInviteMemberList_C_OnClickedCancelInvite__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.OnRequestGuildMemberButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildInviteMemberList_C::OnRequestGuildMemberButtonClicked__DelegateSignature(const struct FGuildMemberData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "OnRequestGuildMemberButtonClicked__DelegateSignature");

	Params::GuildInviteMemberList_C_OnRequestGuildMemberButtonClicked__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.ExecuteUbergraph_GuildInviteMemberList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildInviteMemberList_C::ExecuteUbergraph_GuildInviteMemberList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "ExecuteUbergraph_GuildInviteMemberList");

	Params::GuildInviteMemberList_C_ExecuteUbergraph_GuildInviteMemberList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.OnClickedCancelInvite_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGuildMemberListItem_C*           MemberData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildInviteMemberList_C::OnClickedCancelInvite_Event(class UGuildMemberListItem_C* MemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "OnClickedCancelInvite_Event");

	Params::GuildInviteMemberList_C_OnClickedCancelInvite_Event Parms{};

	Parms.MemberData = MemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.OnGuildMemberSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGuildMemberListItem_C*           MemberData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildInviteMemberList_C::OnGuildMemberSelected(class UGuildMemberListItem_C* MemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "OnGuildMemberSelected");

	Params::GuildInviteMemberList_C_OnGuildMemberSelected Parms{};

	Parms.MemberData = MemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.OnCompletedInviteMemberList_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildInviteMemberList_C::OnCompletedInviteMemberList_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "OnCompletedInviteMemberList_Event");

	Params::GuildInviteMemberList_C_OnCompletedInviteMemberList_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildInviteMemberList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildInviteMemberList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildInviteMemberList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "PreConstruct");

	Params::GuildInviteMemberList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.GenerateInviteMemberData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildInviteMemberList_C::GenerateInviteMemberData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "GenerateInviteMemberData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildInviteMemberList.GuildInviteMemberList_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildInviteMemberList_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildInviteMemberList_C", "GetGuildComp");

	Params::GuildInviteMemberList_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

 

// Package: GuildMemberList

#include "Basic.hpp"

#include "GuildMemberList_classes.hpp"
#include "GuildMemberList_parameters.hpp"


namespace SDK
{

// Function GuildMemberList.GuildMemberList_C.OnSelectedMemberData__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildMemberList_C::OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "OnSelectedMemberData__DelegateSignature");

	Params::GuildMemberList_C_OnSelectedMemberData__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberList.GuildMemberList_C.ExecuteUbergraph_GuildMemberList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberList_C::ExecuteUbergraph_GuildMemberList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "ExecuteUbergraph_GuildMemberList");

	Params::GuildMemberList_C_ExecuteUbergraph_GuildMemberList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberList.GuildMemberList_C.CompletedAcceptMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberList_C::CompletedAcceptMember(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "CompletedAcceptMember");

	Params::GuildMemberList_C_CompletedAcceptMember Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberList.GuildMemberList_C.OnGuildMemberSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGuildMemberListItem_C*           MemberData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberList_C::OnGuildMemberSelected(class UGuildMemberListItem_C* MemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "OnGuildMemberSelected");

	Params::GuildMemberList_C_OnGuildMemberSelected Parms{};

	Parms.MemberData = MemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberList.GuildMemberList_C.OnMemberListGetted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberList_C::OnMemberListGetted(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "OnMemberListGetted");

	Params::GuildMemberList_C_OnMemberListGetted Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberList.GuildMemberList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberList.GuildMemberList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberList.GuildMemberList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "PreConstruct");

	Params::GuildMemberList_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberList.GuildMemberList_C.GenerateMemberData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildMemberList_C::GenerateMemberData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "GenerateMemberData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberList.GuildMemberList_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildMemberList_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberList_C", "GetGuildComp");

	Params::GuildMemberList_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


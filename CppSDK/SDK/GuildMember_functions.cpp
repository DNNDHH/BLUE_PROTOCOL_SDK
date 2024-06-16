#pragma once

 

// Package: GuildMember

#include "Basic.hpp"

#include "GuildMember_classes.hpp"
#include "GuildMember_parameters.hpp"


namespace SDK
{

// Function GuildMember.GuildMember_C.ExecuteUbergraph_GuildMember
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMember_C::ExecuteUbergraph_GuildMember(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMember_C", "ExecuteUbergraph_GuildMember");

	Params::GuildMember_C_ExecuteUbergraph_GuildMember Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMember.GuildMember_C.OnCompleteUpdateGuildMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMember_C::OnCompleteUpdateGuildMember(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMember_C", "OnCompleteUpdateGuildMember");

	Params::GuildMember_C_OnCompleteUpdateGuildMember Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMember.GuildMember_C.OnConpletedGetProfile
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMember_C::OnConpletedGetProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMember_C", "OnConpletedGetProfile");

	Params::GuildMember_C_OnConpletedGetProfile Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMember.GuildMember_C.BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildMember_C::BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMember_C", "BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature");

	Params::GuildMember_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMember.GuildMember_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMember_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMember_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMember.GuildMember_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildMember_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMember_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMember.GuildMember_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildMember_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMember_C", "GetGuildComp");

	Params::GuildMember_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


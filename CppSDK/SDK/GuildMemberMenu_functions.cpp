#pragma once

 

// Package: GuildMemberMenu

#include "Basic.hpp"

#include "GuildMemberMenu_classes.hpp"
#include "GuildMemberMenu_parameters.hpp"


namespace SDK
{

// Function GuildMemberMenu.GuildMemberMenu_C.ExecuteUbergraph_GuildMemberMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberMenu_C::ExecuteUbergraph_GuildMemberMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberMenu_C", "ExecuteUbergraph_GuildMemberMenu");

	Params::GuildMemberMenu_C_ExecuteUbergraph_GuildMemberMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberMenu.GuildMemberMenu_C.OnCompletedGuildMemberList_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberMenu_C::OnCompletedGuildMemberList_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberMenu_C", "OnCompletedGuildMemberList_Event");

	Params::GuildMemberMenu_C_OnCompletedGuildMemberList_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberMenu.GuildMemberMenu_C.PlayerProfileClose_Event
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberMenu_C::PlayerProfileClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberMenu_C", "PlayerProfileClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberMenu.GuildMemberMenu_C.OnConpletedGetProfile
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberMenu_C::OnConpletedGetProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberMenu_C", "OnConpletedGetProfile");

	Params::GuildMemberMenu_C_OnConpletedGetProfile Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberMenu.GuildMemberMenu_C.BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildMemberMenu_C::BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberMenu_C", "BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature");

	Params::GuildMemberMenu_C_BndEvt__GuildMemberList_K2Node_ComponentBoundEvent_0_OnSelectedMemberData__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberMenu.GuildMemberMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberMenu.GuildMemberMenu_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildMemberMenu_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberMenu_C", "GetGuildComp");

	Params::GuildMemberMenu_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildMemberMenu.GuildMemberMenu_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildMemberMenu_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberMenu_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}

}


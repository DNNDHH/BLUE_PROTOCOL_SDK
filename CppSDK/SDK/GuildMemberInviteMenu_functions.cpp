#pragma once

 

// Package: GuildMemberInviteMenu

#include "Basic.hpp"

#include "GuildMemberInviteMenu_classes.hpp"
#include "GuildMemberInviteMenu_parameters.hpp"


namespace SDK
{

// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.ExecuteUbergraph_GuildMemberInviteMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInviteMenu_C::ExecuteUbergraph_GuildMemberInviteMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "ExecuteUbergraph_GuildMemberInviteMenu");

	Params::GuildMemberInviteMenu_C_ExecuteUbergraph_GuildMemberInviteMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberInviteMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OpenReportUI_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInviteMenu_C::OpenReportUI_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "OpenReportUI_Event");

	Params::GuildMemberInviteMenu_C_OpenReportUI_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberInviteMenu_C::BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "BndEvt__GuildMemberInviteMenu_Btn_Report_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberInviteMenu_C::BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "BndEvt__GuildMemberInviteMenu_OpenProfileButton_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildMemberInviteMenu_C::BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature(const struct FGuildMemberData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature");

	Params::GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_4_OnClickedCancelInvite__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGuildCancelInvitation_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInviteMenu_C::OnCompletedGuildCancelInvitation_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "OnCompletedGuildCancelInvitation_Event");

	Params::GuildMemberInviteMenu_C_OnCompletedGuildCancelInvitation_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnInviteCancel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInviteMenu_C::OnInviteCancel(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "OnInviteCancel");

	Params::GuildMemberInviteMenu_C_OnInviteCancel Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedInviteMemberList_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInviteMenu_C::OnCompletedInviteMemberList_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "OnCompletedInviteMemberList_Event");

	Params::GuildMemberInviteMenu_C_OnCompletedInviteMemberList_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberInviteMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildMemberInviteMenu_C::BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature(const struct FGuildMemberData& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature");

	Params::GuildMemberInviteMenu_C_BndEvt__GuildMemberInviteMenu_GuildInviteMemberList_K2Node_ComponentBoundEvent_1_OnSelectedMemberData__DelegateSignature Parms{};

	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.PlayerProfileClose_Event
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberInviteMenu_C::PlayerProfileClose_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "PlayerProfileClose_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.OnCompletedGetProfile_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInviteMenu_C::OnCompletedGetProfile_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "OnCompletedGetProfile_Event");

	Params::GuildMemberInviteMenu_C_OnCompletedGetProfile_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildMemberInviteMenu_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "GetGuildComp");

	Params::GuildMemberInviteMenu_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.UpdateButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberInviteMenu_C::UpdateButtons(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "UpdateButtons");

	Params::GuildMemberInviteMenu_C_UpdateButtons Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.CreateSwapBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberInviteMenu_C::CreateSwapBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "CreateSwapBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInviteMenu.GuildMemberInviteMenu_C.DeleteSwapBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberInviteMenu_C::DeleteSwapBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInviteMenu_C", "DeleteSwapBlocker");

	UObject::ProcessEvent(Func, nullptr);
}

}


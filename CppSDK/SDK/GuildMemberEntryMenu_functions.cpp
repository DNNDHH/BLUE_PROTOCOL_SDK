#pragma once

 

// Package: GuildMemberEntryMenu

#include "Basic.hpp"

#include "GuildMemberEntryMenu_classes.hpp"
#include "GuildMemberEntryMenu_parameters.hpp"


namespace SDK
{

// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.ExecuteUbergraph_GuildMemberEntryMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::ExecuteUbergraph_GuildMemberEntryMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "ExecuteUbergraph_GuildMemberEntryMenu");

	Params::GuildMemberEntryMenu_C_ExecuteUbergraph_GuildMemberEntryMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_CancelKeyPushed
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberEntryMenu_C::Event_CancelKeyPushed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "Event_CancelKeyPushed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Event_PlayerReportChangeVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        InVisibility                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::Event_PlayerReportChangeVisibility(ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "Event_PlayerReportChangeVisibility");

	Params::GuildMemberEntryMenu_C_Event_PlayerReportChangeVisibility Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OpenReportUI_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::OpenReportUI_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "OpenReportUI_Event");

	Params::GuildMemberEntryMenu_C_OpenReportUI_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "BndEvt__GuildMemberEntryMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "BndEvt__GuildMemberEntryMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "BndEvt__GuildMemberEntryMenu_Btn_Accept_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "BndEvt__GuildMemberEntryMenu_Btn_ShowProfile_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryAccept
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::OnEntryAccept(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "OnEntryAccept");

	Params::GuildMemberEntryMenu_C_OnEntryAccept Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.OnEntryDeny
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::OnEntryDeny(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "OnEntryDeny");

	Params::GuildMemberEntryMenu_C_OnEntryDeny Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompleteOnIsGetPlayerProfileDetailMenuDataDelegate
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::CompleteOnIsGetPlayerProfileDetailMenuDataDelegate(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "CompleteOnIsGetPlayerProfileDetailMenuDataDelegate");

	Params::GuildMemberEntryMenu_C_CompleteOnIsGetPlayerProfileDetailMenuDataDelegate Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");

	Params::GuildMemberEntryMenu_C_BndEvt__GuildMemberEntryMenu_LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.UpdateEntries
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberEntryMenu_C::UpdateEntries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "UpdateEntries");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedGGetEntryList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::CompletedGGetEntryList(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "CompletedGGetEntryList");

	Params::GuildMemberEntryMenu_C_CompletedGGetEntryList Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedDenyMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::CompletedDenyMember(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "CompletedDenyMember");

	Params::GuildMemberEntryMenu_C_CompletedDenyMember Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Remove Selected
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberEntryMenu_C::Remove_Selected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "Remove Selected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CompletedAcceptMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::CompletedAcceptMember(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "CompletedAcceptMember");

	Params::GuildMemberEntryMenu_C_CompletedAcceptMember Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberEntryMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.UpdateButtons
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberEntryMenu_C::UpdateButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "UpdateButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberEntryMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildMemberEntryMenu_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "GetGuildComp");

	Params::GuildMemberEntryMenu_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GenerateEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildMemberEntryMenu_C::GenerateEntries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "GenerateEntries");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.GetEntryCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   EntryCount                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberEntryMenu_C::GetEntryCount(int32* EntryCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "GetEntryCount");

	Params::GuildMemberEntryMenu_C_GetEntryCount Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (EntryCount != nullptr)
		*EntryCount = Parms.EntryCount;
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.CreateSwapBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberEntryMenu_C::CreateSwapBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "CreateSwapBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberEntryMenu.GuildMemberEntryMenu_C.DeleteSwapBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberEntryMenu_C::DeleteSwapBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberEntryMenu_C", "DeleteSwapBlocker");

	UObject::ProcessEvent(Func, nullptr);
}

}


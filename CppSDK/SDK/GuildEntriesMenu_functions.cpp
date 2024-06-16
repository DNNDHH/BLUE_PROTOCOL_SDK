#pragma once

 

// Package: GuildEntriesMenu

#include "Basic.hpp"

#include "GuildEntriesMenu_classes.hpp"
#include "GuildEntriesMenu_parameters.hpp"


namespace SDK
{

// Function GuildEntriesMenu.GuildEntriesMenu_C.ExecuteUbergraph_GuildEntriesMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesMenu_C::ExecuteUbergraph_GuildEntriesMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "ExecuteUbergraph_GuildEntriesMenu");

	Params::GuildEntriesMenu_C_ExecuteUbergraph_GuildEntriesMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.OpenReportUI_Event
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesMenu_C::OpenReportUI_Event(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "OpenReportUI_Event");

	Params::GuildEntriesMenu_C_OpenReportUI_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildEntriesMenu_C::BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "BndEvt__GuildEntriesMenu_Btn_Report_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildEntriesMenu_C::BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "BndEvt__GuildEntriesMenu_Btn_Deny_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildEntriesMenu_C::BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "BndEvt__GuildEntriesMenu_Btn_ShowCharacter_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildEntriesMenu_C::BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "BndEvt__GuildEntriesMenu_Btn_Accept_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.OnConpletedGetProfile
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPlayerProfileMenuDetailData     PlayerProfileDetailMenuData                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesMenu_C::OnConpletedGetProfile(const bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "OnConpletedGetProfile");

	Params::GuildEntriesMenu_C_OnConpletedGetProfile Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.PlayerProfileDetailMenuData = std::move(PlayerProfileDetailMenuData);
	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.EntryUpdate
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesMenu_C::EntryUpdate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "EntryUpdate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.On Update Guild Member List
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesMenu_C::On_Update_Guild_Member_List(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "On Update Guild Member List");

	Params::GuildEntriesMenu_C_On_Update_Guild_Member_List Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.OnMember Denied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesMenu_C::OnMember_Denied(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "OnMember Denied");

	Params::GuildEntriesMenu_C_OnMember_Denied Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.Remove Selected
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesMenu_C::Remove_Selected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "Remove Selected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.OnMemberAccepted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesMenu_C::OnMemberAccepted(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "OnMemberAccepted");

	Params::GuildEntriesMenu_C_OnMemberAccepted Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.BindInitailize
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesMenu_C::BindInitailize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "BindInitailize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesMenu_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.UpdateButtons
// (BlueprintCallable, BlueprintEvent)

void UGuildEntriesMenu_C::UpdateButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "UpdateButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UObject*                          Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntriesMenu_C::BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature");

	Params::GuildEntriesMenu_C_BndEvt__LV_GuildEntries_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildEntriesMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.GenerateEntries
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildEntriesMenu_C::GenerateEntries()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "GenerateEntries");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.Get Guild Comp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildEntriesMenu_C::Get_Guild_Comp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "Get Guild Comp");

	Params::GuildEntriesMenu_C_Get_Guild_Comp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.PSonlyDiffCheck
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    PSOnlyDiff                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildEntriesMenu_C::PSonlyDiffCheck(bool* PSOnlyDiff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "PSonlyDiffCheck");

	Params::GuildEntriesMenu_C_PSonlyDiffCheck Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PSOnlyDiff != nullptr)
		*PSOnlyDiff = Parms.PSOnlyDiff;
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.CreateSwapBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildEntriesMenu_C::CreateSwapBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "CreateSwapBlocker");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntriesMenu.GuildEntriesMenu_C.DeleteSwapBlocker
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildEntriesMenu_C::DeleteSwapBlocker()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntriesMenu_C", "DeleteSwapBlocker");

	UObject::ProcessEvent(Func, nullptr);
}

}


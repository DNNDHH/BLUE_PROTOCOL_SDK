#pragma once

 

// Package: GuildMemberInfoMenu

#include "Basic.hpp"

#include "GuildMemberInfoMenu_classes.hpp"
#include "GuildMemberInfoMenu_parameters.hpp"


namespace SDK
{

// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.ExecuteUbergraph_GuildMemberInfoMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInfoMenu_C::ExecuteUbergraph_GuildMemberInfoMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "ExecuteUbergraph_GuildMemberInfoMenu");

	Params::GuildMemberInfoMenu_C_ExecuteUbergraph_GuildMemberInfoMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Event_CloseFromChildren
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberInfoMenu_C::Event_CloseFromChildren()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "Event_CloseFromChildren");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.OnAddedNewMember
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberInfoMenu_C::OnAddedNewMember()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "OnAddedNewMember");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedDenyMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInfoMenu_C::CompletedDenyMember(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "CompletedDenyMember");

	Params::GuildMemberInfoMenu_C_CompletedDenyMember Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedAcceptMember
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInfoMenu_C::CompletedAcceptMember(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "CompletedAcceptMember");

	Params::GuildMemberInfoMenu_C_CompletedAcceptMember Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.CompletedGGetEntryList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInfoMenu_C::CompletedGGetEntryList(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "CompletedGGetEntryList");

	Params::GuildMemberInfoMenu_C_CompletedGGetEntryList Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberInfoMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateCommandMenuBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubPage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInfoMenu_C::UpdateCommandMenuBG(int32 SubPage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "UpdateCommandMenuBG");

	Params::GuildMemberInfoMenu_C_UpdateCommandMenuBG Parms{};

	Parms.SubPage = SubPage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInfoMenu_C::BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");

	Params::GuildMemberInfoMenu_C_BndEvt__GuildMemberInfoMenu_CommandMenuCommonSubButtonList_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.SelectTab
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ButtonId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInfoMenu_C::SelectTab(int32 ButtonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "SelectTab");

	Params::GuildMemberInfoMenu_C_SelectTab Parms{};

	Parms.ButtonId = ButtonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberInfoMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildMemberInfoMenu_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "GetGuildComp");

	Params::GuildMemberInfoMenu_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildMemberInfoMenu.GuildMemberInfoMenu_C.UpdateSubMenuButtonStateByIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SubButtonIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberInfoMenu_C::UpdateSubMenuButtonStateByIndex(int32 SubButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberInfoMenu_C", "UpdateSubMenuButtonStateByIndex");

	Params::GuildMemberInfoMenu_C_UpdateSubMenuButtonStateByIndex Parms{};

	Parms.SubButtonIndex = SubButtonIndex;

	UObject::ProcessEvent(Func, &Parms);
}

}


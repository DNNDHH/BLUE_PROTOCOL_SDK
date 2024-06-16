#pragma once

 

// Package: GuildMemberListItem

#include "Basic.hpp"

#include "GuildMemberListItem_classes.hpp"
#include "GuildMemberListItem_parameters.hpp"


namespace SDK
{

// Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMember__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGuildMemberListItem_C*           MemberData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberListItem_C::OnSelectedMember__DelegateSignature(class UGuildMemberListItem_C* MemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "OnSelectedMember__DelegateSignature");

	Params::GuildMemberListItem_C_OnSelectedMember__DelegateSignature Parms{};

	Parms.MemberData = MemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.OnClickedCancelInvite__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGuildMemberListItem_C*           MemberData                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberListItem_C::OnClickedCancelInvite__DelegateSignature(class UGuildMemberListItem_C* MemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "OnClickedCancelInvite__DelegateSignature");

	Params::GuildMemberListItem_C_OnClickedCancelInvite__DelegateSignature Parms{};

	Parms.MemberData = MemberData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberListItem_C::OnRequestGuildMemberButtonClicked__DelegateSignature(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "OnRequestGuildMemberButtonClicked__DelegateSignature");

	Params::GuildMemberListItem_C_OnRequestGuildMemberButtonClicked__DelegateSignature Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.ExecuteUbergraph_GuildMemberListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberListItem_C::ExecuteUbergraph_GuildMemberListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "ExecuteUbergraph_GuildMemberListItem");

	Params::GuildMemberListItem_C_ExecuteUbergraph_GuildMemberListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.OnRequestGuildMemberInviteCancel_Event
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberListItem_C::OnRequestGuildMemberInviteCancel_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "OnRequestGuildMemberInviteCancel_Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberListItem.GuildMemberListItem_C.OnSelectedMemberListPannel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonPlayerListPannel_C*        TargetPlayerListPannel                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildMemberListItem_C::OnSelectedMemberListPannel(class UCommonPlayerListPannel_C* TargetPlayerListPannel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "OnSelectedMemberListPannel");

	Params::GuildMemberListItem_C_OnSelectedMemberListPannel Parms{};

	Parms.TargetPlayerListPannel = TargetPlayerListPannel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberListItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberListItem.GuildMemberListItem_C.OnClosed
// (BlueprintCallable, BlueprintEvent)

void UGuildMemberListItem_C::OnClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "OnClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberListItem.GuildMemberListItem_C.BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildMemberListItem_C::BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "BndEvt__Btn_ChangeType_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberListItem.GuildMemberListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildMemberListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberListItem.GuildMemberListItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberListItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "PreConstruct");

	Params::GuildMemberListItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.Set MemberData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Param_GuildMemberData                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildMemberListItem_C::Set_MemberData(const struct FGuildMemberData& Param_GuildMemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "Set MemberData");

	Params::GuildMemberListItem_C_Set_MemberData Parms{};

	Parms.Param_GuildMemberData = std::move(Param_GuildMemberData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.InitializeMemberData
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberListItem_C::InitializeMemberData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "InitializeMemberData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildMemberListItem.GuildMemberListItem_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildMemberListItem_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "SetSelected");

	Params::GuildMemberListItem_C_SetSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.GetMemberData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuildMemberData                 Data                                                   (Parm, OutParm)

void UGuildMemberListItem_C::GetMemberData(struct FGuildMemberData* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "GetMemberData");

	Params::GuildMemberListItem_C_GetMemberData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Data != nullptr)
		*Data = std::move(Parms.Data);
}


// Function GuildMemberListItem.GuildMemberListItem_C.SetInviteMemberData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildMemberData                 Param_GuildMemberData                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildMemberListItem_C::SetInviteMemberData(const struct FGuildMemberData& Param_GuildMemberData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "SetInviteMemberData");

	Params::GuildMemberListItem_C_SetInviteMemberData Parms{};

	Parms.Param_GuildMemberData = std::move(Param_GuildMemberData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildMemberListItem.GuildMemberListItem_C.InitChangeTypeBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UGuildMemberListItem_C::InitChangeTypeBtn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildMemberListItem_C", "InitChangeTypeBtn");

	UObject::ProcessEvent(Func, nullptr);
}

}


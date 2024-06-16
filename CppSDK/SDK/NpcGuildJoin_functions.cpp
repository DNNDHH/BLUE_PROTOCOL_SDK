#pragma once

 

// Package: NpcGuildJoin

#include "Basic.hpp"

#include "NpcGuildJoin_classes.hpp"
#include "NpcGuildJoin_parameters.hpp"


namespace SDK
{

// Function NpcGuildJoin.NpcGuildJoin_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNpcGuildJoin_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.ExecuteUbergraph_NpcGuildJoin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildJoin_C::ExecuteUbergraph_NpcGuildJoin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "ExecuteUbergraph_NpcGuildJoin");

	Params::NpcGuildJoin_C_ExecuteUbergraph_NpcGuildJoin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.Event_SetNowTurorialHelpId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TutorialHelpId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildJoin_C::Event_SetNowTurorialHelpId(class FName TutorialHelpId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "Event_SetNowTurorialHelpId");

	Params::NpcGuildJoin_C_Event_SetNowTurorialHelpId Parms{};

	Parms.TutorialHelpId = TutorialHelpId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteGetGuildData_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildJoin_C::OnCompleteGetGuildData_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnCompleteGetGuildData_Event");

	Params::NpcGuildJoin_C_OnCompleteGetGuildData_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature
// (BlueprintEvent)

void UNpcGuildJoin_C::BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "BndEvt__NpcGuildJoin_GuildFindEntry_K2Node_ComponentBoundEvent_2_OnResearchGuild__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature
// (BlueprintEvent)

void UNpcGuildJoin_C::BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "BndEvt__NpcGuildJoin_GuildData_K2Node_ComponentBoundEvent_1_OnRefreshRightMenu__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNpcGuildJoin_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.OnInviteArraimented
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsAccept                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           InEntryId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNpcGuildJoin_C::OnInviteArraimented(const int32 RetCode, bool IsAccept, const class FString& InEntryId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnInviteArraimented");

	Params::NpcGuildJoin_C_OnInviteArraimented Parms{};

	Parms.RetCode = RetCode;
	Parms.IsAccept = IsAccept;
	Parms.InEntryId = std::move(InEntryId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteCancelEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildJoin_C::OnCompleteCancelEntry(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnCompleteCancelEntry");

	Params::NpcGuildJoin_C_OnCompleteCancelEntry Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.OnComplete_GuildDetail
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuildData                       InGuildData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UNpcGuildJoin_C::OnComplete_GuildDetail(const int32 RetCode, const struct FGuildData& InGuildData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnComplete_GuildDetail");

	Params::NpcGuildJoin_C_OnComplete_GuildDetail Parms{};

	Parms.RetCode = RetCode;
	Parms.InGuildData = std::move(InGuildData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.Request_Close
// (BlueprintCallable, BlueprintEvent)

void UNpcGuildJoin_C::Request_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "Request_Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.OnOrganized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildJoin_C::OnOrganized(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnOrganized");

	Params::NpcGuildJoin_C_OnOrganized Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.OnCompletedChangeName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildJoin_C::OnCompletedChangeName(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnCompletedChangeName");

	Params::NpcGuildJoin_C_OnCompletedChangeName Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.OnClosePressed
// (BlueprintCallable, BlueprintEvent)

void UNpcGuildJoin_C::OnClosePressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnClosePressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.Listen Action Close
// (BlueprintCallable, BlueprintEvent)

void UNpcGuildJoin_C::Listen_Action_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "Listen Action Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
// (BlueprintEvent)

void UNpcGuildJoin_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcGuildJoin_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.bindInitialize
// (BlueprintCallable, BlueprintEvent)

void UNpcGuildJoin_C::bindInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "bindInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcGuildJoin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UNpcGuildJoin_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.OnCompleteFindGuildShortID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuildJoin_C::OnCompleteFindGuildShortID(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "OnCompleteFindGuildShortID");

	Params::NpcGuildJoin_C_OnCompleteFindGuildShortID Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UNpcGuildJoin_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature");

	Params::NpcGuildJoin_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature Parms{};

	Parms.GuildEntry = std::move(GuildEntry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuildJoin.NpcGuildJoin_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature
// (BlueprintEvent)

void UNpcGuildJoin_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "BndEvt__GuildData_K2Node_ComponentBoundEvent_3_OnGuildOrganize__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuildJoin.NpcGuildJoin_C.GetGuildComp
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UNpcGuildJoin_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "GetGuildComp");

	Params::NpcGuildJoin_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NpcGuildJoin.NpcGuildJoin_C.InVisitorInitialize
// (Public, BlueprintCallable, BlueprintEvent)

void UNpcGuildJoin_C::InVisitorInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuildJoin_C", "InVisitorInitialize");

	UObject::ProcessEvent(Func, nullptr);
}

}


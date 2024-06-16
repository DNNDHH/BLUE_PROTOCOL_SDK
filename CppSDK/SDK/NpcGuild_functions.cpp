#pragma once

 

// Package: NpcGuild

#include "Basic.hpp"

#include "NpcGuild_classes.hpp"
#include "NpcGuild_parameters.hpp"


namespace SDK
{

// Function NpcGuild.NpcGuild_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UNpcGuild_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.ExecuteUbergraph_NpcGuild
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuild_C::ExecuteUbergraph_NpcGuild(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "ExecuteUbergraph_NpcGuild");

	Params::NpcGuild_C_ExecuteUbergraph_NpcGuild Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.OnCompleteGetGuildData_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuild_C::OnCompleteGetGuildData_Event(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnCompleteGetGuildData_Event");

	Params::NpcGuild_C_OnCompleteGetGuildData_Event Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.Event_SetNowTurorialHelpId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             TutorialHelpId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuild_C::Event_SetNowTurorialHelpId(class FName TutorialHelpId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "Event_SetNowTurorialHelpId");

	Params::NpcGuild_C_Event_SetNowTurorialHelpId Parms{};

	Parms.TutorialHelpId = TutorialHelpId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.Event_OnCompleteNotifyKickedFromGuild
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           KickedGuildName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UNpcGuild_C::Event_OnCompleteNotifyKickedFromGuild(const class FString& KickedGuildName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "Event_OnCompleteNotifyKickedFromGuild");

	Params::NpcGuild_C_Event_OnCompleteNotifyKickedFromGuild Parms{};

	Parms.KickedGuildName = std::move(KickedGuildName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcGuild_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UNpcGuild_C::BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.OnDissolution
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuild_C::OnDissolution(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnDissolution");

	Params::NpcGuild_C_OnDissolution Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.OnCloseRequest
// (BlueprintCallable, BlueprintEvent)

void UNpcGuild_C::OnCloseRequest()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnCloseRequest");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.OnGuildWithDraw
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuild_C::OnGuildWithDraw(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnGuildWithDraw");

	Params::NpcGuild_C_OnGuildWithDraw Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.OnOrganized
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuild_C::OnOrganized(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnOrganized");

	Params::NpcGuild_C_OnOrganized Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UNpcGuild_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.OnCompletedChangeName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuild_C::OnCompletedChangeName(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnCompletedChangeName");

	Params::NpcGuild_C_OnCompletedChangeName Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.OnClosePressed
// (BlueprintCallable, BlueprintEvent)

void UNpcGuild_C::OnClosePressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnClosePressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.Listen Action Close
// (BlueprintCallable, BlueprintEvent)

void UNpcGuild_C::Listen_Action_Close()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "Listen Action Close");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature
// (BlueprintEvent)

void UNpcGuild_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UNpcGuild_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.bindInitialize
// (BlueprintCallable, BlueprintEvent)

void UNpcGuild_C::bindInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "bindInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.OnCompleteFindGuildShortID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNpcGuild_C::OnCompleteFindGuildShortID(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "OnCompleteFindGuildShortID");

	Params::NpcGuild_C_OnCompleteFindGuildShortID Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UNpcGuild_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature");

	Params::NpcGuild_C_BndEvt__GuildData_K2Node_ComponentBoundEvent_4_OnSelectEntry__DelegateSignature Parms{};

	Parms.GuildEntry = std::move(GuildEntry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature
// (BlueprintEvent)

void UNpcGuild_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "BndEvt__GuildData_K2Node_ComponentBoundEvent_2_OnGuildApplications__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature
// (BlueprintEvent)

void UNpcGuild_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "BndEvt__GuildData_K2Node_ComponentBoundEvent_1_OnGuildMember__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature
// (BlueprintEvent)

void UNpcGuild_C::BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "BndEvt__GuildData_K2Node_ComponentBoundEvent_0_OnGuildSetting__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function NpcGuild.NpcGuild_C.GetGuildComp
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UNpcGuild_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "GetGuildComp");

	Params::NpcGuild_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function NpcGuild.NpcGuild_C.InGuildMemberInialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UNpcGuild_C::InGuildMemberInialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("NpcGuild_C", "InGuildMemberInialize");

	UObject::ProcessEvent(Func, nullptr);
}

}


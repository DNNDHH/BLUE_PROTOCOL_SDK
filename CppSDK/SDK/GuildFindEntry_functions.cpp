#pragma once

 

// Package: GuildFindEntry

#include "Basic.hpp"

#include "GuildFindEntry_classes.hpp"
#include "GuildFindEntry_parameters.hpp"


namespace SDK
{

// Function GuildFindEntry.GuildFindEntry_C.OnResearchGuild__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UGuildFindEntry_C::OnResearchGuild__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "OnResearchGuild__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.ExecuteUbergraph_GuildFindEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildFindEntry_C::ExecuteUbergraph_GuildFindEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "ExecuteUbergraph_GuildFindEntry");

	Params::GuildFindEntry_C_ExecuteUbergraph_GuildFindEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildFindEntry.GuildFindEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildFindEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "BndEvt__GuildFindEntry_Btn_WithDraw_K2Node_ComponentBoundEvent_9_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "BndEvt__GuildFindEntry_Btn_Accept_K2Node_ComponentBoundEvent_8_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "BndEvt__GuildFindEntry_Btn_Cancel_K2Node_ComponentBoundEvent_7_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "BndEvt__GuildFindEntry_Btn_Research_K2Node_ComponentBoundEvent_6_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UGuildFindEntry_C::BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "BndEvt__GuildFindEntry_Btn_Applicate_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.OnCloseEntry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           OnButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             InputText                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildFindEntry_C::OnCloseEntry(EDialogResult OnButton, const class FText& InputText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "OnCloseEntry");

	Params::GuildFindEntry_C_OnCloseEntry Parms{};

	Parms.OnButton = OnButton;
	Parms.InputText = std::move(InputText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildFindEntry.GuildFindEntry_C.NotFound
// (BlueprintCallable, BlueprintEvent)

void UGuildFindEntry_C::NotFound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "NotFound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.Show Guild
// (BlueprintCallable, BlueprintEvent)

void UGuildFindEntry_C::Show_Guild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "Show Guild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.OnCancelDialog
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildFindEntry_C::OnCancelDialog(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "OnCancelDialog");

	Params::GuildFindEntry_C_OnCancelDialog Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildFindEntry.GuildFindEntry_C.Initialize
// (BlueprintCallable, BlueprintEvent)

void UGuildFindEntry_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.UpdateButtons
// (BlueprintCallable, BlueprintEvent)

void UGuildFindEntry_C::UpdateButtons()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "UpdateButtons");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildFindEntry.GuildFindEntry_C.OnCompletedGuildEntries
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildFindEntry_C::OnCompletedGuildEntries(const int32 RetCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "OnCompletedGuildEntries");

	Params::GuildFindEntry_C_OnCompletedGuildEntries Parms{};

	Parms.RetCode = RetCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildFindEntry.GuildFindEntry_C.SetGuildData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildData                       Param_GuildData                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildFindEntry_C::SetGuildData(const struct FGuildData& Param_GuildData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "SetGuildData");

	Params::GuildFindEntry_C_SetGuildData Parms{};

	Parms.Param_GuildData = std::move(Param_GuildData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildFindEntry.GuildFindEntry_C.GetGuildComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USBPlayerGuildComponent*          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class USBPlayerGuildComponent* UGuildFindEntry_C::GetGuildComp()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "GetGuildComp");

	Params::GuildFindEntry_C_GetGuildComp Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GuildFindEntry.GuildFindEntry_C.Find Guild Entry
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  Output_Get                                             (Parm, OutParm)

void UGuildFindEntry_C::Find_Guild_Entry(struct FGuildEntryData* Output_Get)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "Find Guild Entry");

	Params::GuildFindEntry_C_Find_Guild_Entry Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = std::move(Parms.Output_Get);
}


// Function GuildFindEntry.GuildFindEntry_C.Set Entry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  Param_Entry                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildFindEntry_C::Set_Entry(const struct FGuildEntryData& Param_Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildFindEntry_C", "Set Entry");

	Params::GuildFindEntry_C_Set_Entry Parms{};

	Parms.Param_Entry = std::move(Param_Entry);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: GuildEntryItem

#include "Basic.hpp"

#include "GuildEntryItem_classes.hpp"
#include "GuildEntryItem_parameters.hpp"


namespace SDK
{

// Function GuildEntryItem.GuildEntryItem_C.OnClicked_GuildEntry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  GuildEntry                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UGuildEntryItem_C*                SelectedBtn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntryItem_C::OnClicked_GuildEntry__DelegateSignature(const struct FGuildEntryData& GuildEntry, class UGuildEntryItem_C* SelectedBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryItem_C", "OnClicked_GuildEntry__DelegateSignature");

	Params::GuildEntryItem_C_OnClicked_GuildEntry__DelegateSignature Parms{};

	Parms.GuildEntry = std::move(GuildEntry);
	Parms.SelectedBtn = SelectedBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntryItem.GuildEntryItem_C.ExecuteUbergraph_GuildEntryItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntryItem_C::ExecuteUbergraph_GuildEntryItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryItem_C", "ExecuteUbergraph_GuildEntryItem");

	Params::GuildEntryItem_C_ExecuteUbergraph_GuildEntryItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntryItem.GuildEntryItem_C.Selected
// (BlueprintCallable, BlueprintEvent)

void UGuildEntryItem_C::Selected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryItem_C", "Selected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntryItem.GuildEntryItem_C.Unselected
// (BlueprintCallable, BlueprintEvent)

void UGuildEntryItem_C::Unselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryItem_C", "Unselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntryItem.GuildEntryItem_C.BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UGuildEntryItem_C::BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryItem_C", "BndEvt__Btn_Entry_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntryItem.GuildEntryItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildEntryItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


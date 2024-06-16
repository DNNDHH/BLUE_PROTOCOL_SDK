#pragma once

 

// Package: GuildEntryListItem

#include "Basic.hpp"

#include "GuildEntryListItem_classes.hpp"
#include "GuildEntryListItem_parameters.hpp"


namespace SDK
{

// Function GuildEntryListItem.GuildEntryListItem_C.ExecuteUbergraph_GuildEntryListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntryListItem_C::ExecuteUbergraph_GuildEntryListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "ExecuteUbergraph_GuildEntryListItem");

	Params::GuildEntryListItem_C_ExecuteUbergraph_GuildEntryListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntryListItem.GuildEntryListItem_C.Unselected
// (BlueprintCallable, BlueprintEvent)

void UGuildEntryListItem_C::Unselected()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "Unselected");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntryListItem.GuildEntryListItem_C.LoadFaceIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           URL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UGuildEntryListItem_C::LoadFaceIcon(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "LoadFaceIcon");

	Params::GuildEntryListItem_C_LoadFaceIcon Parms{};

	Parms.URL = std::move(URL);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildEntryListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "BP_OnItemSelectionChanged");

	Params::GuildEntryListItem_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntryListItem.GuildEntryListItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntryListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "OnListItemObjectSet");

	Params::GuildEntryListItem_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntryListItem.GuildEntryListItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGuildEntryListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "BP_OnItemExpansionChanged");

	Params::GuildEntryListItem_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntryListItem.GuildEntryListItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UGuildEntryListItem_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntryListItem.GuildEntryListItem_C.Set EntryData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildEntryData                  Entry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildEntryListItem_C::Set_EntryData(const struct FGuildEntryData& Entry)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "Set EntryData");

	Params::GuildEntryListItem_C_Set_EntryData Parms{};

	Parms.Entry = std::move(Entry);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildEntryListItem.GuildEntryListItem_C.InitializeEntryData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildEntryListItem_C::InitializeEntryData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "InitializeEntryData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildEntryListItem.GuildEntryListItem_C.GetEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuildEntryData                  Param_EntryData                                        (Parm, OutParm)

void UGuildEntryListItem_C::GetEntry(struct FGuildEntryData* Param_EntryData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryListItem_C", "GetEntry");

	Params::GuildEntryListItem_C_GetEntry Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_EntryData != nullptr)
		*Param_EntryData = std::move(Parms.Param_EntryData);
}

}


#pragma once

 

// Package: ChatLogMessageEntry

#include "Basic.hpp"

#include "ChatLogMessageEntry_classes.hpp"
#include "ChatLogMessageEntry_parameters.hpp"


namespace SDK
{

// Function ChatLogMessageEntry.ChatLogMessageEntry_C.ExecuteUbergraph_ChatLogMessageEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogMessageEntry_C::ExecuteUbergraph_ChatLogMessageEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMessageEntry_C", "ExecuteUbergraph_ChatLogMessageEntry");

	Params::ChatLogMessageEntry_C_ExecuteUbergraph_ChatLogMessageEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMessageEntry.ChatLogMessageEntry_C.DircetChat
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           TagertPlayerId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                             TagertName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           CharacterId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESBPrivilegeType                        PrivilegeType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogMessageEntry_C::DircetChat(const class FString& TagertPlayerId, const class FText& TagertName, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMessageEntry_C", "DircetChat");

	Params::ChatLogMessageEntry_C_DircetChat Parms{};

	Parms.TagertPlayerId = std::move(TagertPlayerId);
	Parms.TagertName = std::move(TagertName);
	Parms.CharacterId = std::move(CharacterId);
	Parms.PrivilegeType = PrivilegeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMessageEntry.ChatLogMessageEntry_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChatLogMessageEntry_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMessageEntry_C", "OnListItemObjectSet");

	Params::ChatLogMessageEntry_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogMessageEntry_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMessageEntry_C", "BP_OnItemSelectionChanged");

	Params::ChatLogMessageEntry_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogMessageEntry_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMessageEntry_C", "BP_OnItemExpansionChanged");

	Params::ChatLogMessageEntry_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChatLogMessageEntry.ChatLogMessageEntry_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UChatLogMessageEntry_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMessageEntry_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChatLogMessageEntry.ChatLogMessageEntry_C.CreateChatMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBChatUIMessage                 InMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   StampSize                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEndInit                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCursorStampHit                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsUnreadWidget                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsCopy                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChatLogMessageEntry_C::CreateChatMessage(const struct FSBChatUIMessage& InMessage, float StampSize, bool IsEndInit, bool IsCursorStampHit, bool IsUnreadWidget, bool IsCopy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChatLogMessageEntry_C", "CreateChatMessage");

	Params::ChatLogMessageEntry_C_CreateChatMessage Parms{};

	Parms.InMessage = std::move(InMessage);
	Parms.StampSize = StampSize;
	Parms.IsEndInit = IsEndInit;
	Parms.IsCursorStampHit = IsCursorStampHit;
	Parms.IsUnreadWidget = IsUnreadWidget;
	Parms.IsCopy = IsCopy;

	UObject::ProcessEvent(Func, &Parms);
}

}


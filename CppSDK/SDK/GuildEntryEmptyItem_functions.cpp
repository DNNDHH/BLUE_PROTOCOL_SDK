#pragma once

 

// Package: GuildEntryEmptyItem

#include "Basic.hpp"

#include "GuildEntryEmptyItem_classes.hpp"
#include "GuildEntryEmptyItem_parameters.hpp"


namespace SDK
{

// Function GuildEntryEmptyItem.GuildEntryEmptyItem_C.SetMessageFromId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildEntryEmptyItem_C::SetMessageFromId(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildEntryEmptyItem_C", "SetMessageFromId");

	Params::GuildEntryEmptyItem_C_SetMessageFromId Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}

}


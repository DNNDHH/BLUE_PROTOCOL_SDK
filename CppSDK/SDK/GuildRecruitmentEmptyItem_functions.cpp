#pragma once

 

// Package: GuildRecruitmentEmptyItem

#include "Basic.hpp"

#include "GuildRecruitmentEmptyItem_classes.hpp"
#include "GuildRecruitmentEmptyItem_parameters.hpp"


namespace SDK
{

// Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.ExecuteUbergraph_GuildRecruitmentEmptyItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentEmptyItem_C::ExecuteUbergraph_GuildRecruitmentEmptyItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentEmptyItem_C", "ExecuteUbergraph_GuildRecruitmentEmptyItem");

	Params::GuildRecruitmentEmptyItem_C_ExecuteUbergraph_GuildRecruitmentEmptyItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGuildRecruitmentEmptyItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentEmptyItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetMainMessageFromId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRecruitmentEmptyItem_C::SetMainMessageFromId(int32 TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentEmptyItem_C", "SetMainMessageFromId");

	Params::GuildRecruitmentEmptyItem_C_SetMainMessageFromId Parms{};

	Parms.TextId = TextId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRecruitmentEmptyItem.GuildRecruitmentEmptyItem_C.SetGuildTutorialMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGuildRecruitmentEmptyItem_C::SetGuildTutorialMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRecruitmentEmptyItem_C", "SetGuildTutorialMessage");

	UObject::ProcessEvent(Func, nullptr);
}

}


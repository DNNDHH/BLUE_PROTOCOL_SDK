#pragma once

 

// Package: GuildRankItem

#include "Basic.hpp"

#include "GuildRankItem_classes.hpp"
#include "GuildRankItem_parameters.hpp"


namespace SDK
{

// Function GuildRankItem.GuildRankItem_C.ExecuteUbergraph_GuildRankItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGuildRankItem_C::ExecuteUbergraph_GuildRankItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRankItem_C", "ExecuteUbergraph_GuildRankItem");

	Params::GuildRankItem_C_ExecuteUbergraph_GuildRankItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GuildRankItem.GuildRankItem_C.SetRankUnlockData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuildRankUnlockMaster           Param_UnlockData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UGuildRankItem_C::SetRankUnlockData(const struct FGuildRankUnlockMaster& Param_UnlockData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GuildRankItem_C", "SetRankUnlockData");

	Params::GuildRankItem_C_SetRankUnlockData Parms{};

	Parms.Param_UnlockData = std::move(Param_UnlockData);

	UObject::ProcessEvent(Func, &Parms);
}

}


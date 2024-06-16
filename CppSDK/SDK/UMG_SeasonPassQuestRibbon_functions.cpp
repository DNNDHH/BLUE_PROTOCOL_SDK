#pragma once

 

// Package: UMG_SeasonPassQuestRibbon

#include "Basic.hpp"

#include "UMG_SeasonPassQuestRibbon_classes.hpp"
#include "UMG_SeasonPassQuestRibbon_parameters.hpp"


namespace SDK
{

// Function UMG_SeasonPassQuestRibbon.UMG_SeasonPassQuestRibbon_C.ExecuteUbergraph_UMG_SeasonPassQuestRibbon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_SeasonPassQuestRibbon_C::ExecuteUbergraph_UMG_SeasonPassQuestRibbon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassQuestRibbon_C", "ExecuteUbergraph_UMG_SeasonPassQuestRibbon");

	Params::UMG_SeasonPassQuestRibbon_C_ExecuteUbergraph_UMG_SeasonPassQuestRibbon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_SeasonPassQuestRibbon.UMG_SeasonPassQuestRibbon_C.SetRibbon
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBSeasonPassQuestItemData       SBSeasonPassQuestItemData                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_SeasonPassQuestRibbon_C::SetRibbon(const struct FSBSeasonPassQuestItemData& SBSeasonPassQuestItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_SeasonPassQuestRibbon_C", "SetRibbon");

	Params::UMG_SeasonPassQuestRibbon_C_SetRibbon Parms{};

	Parms.SBSeasonPassQuestItemData = std::move(SBSeasonPassQuestItemData);

	UObject::ProcessEvent(Func, &Parms);
}

}


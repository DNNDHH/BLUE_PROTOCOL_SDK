#pragma once

 

// Package: WBP_ToolTip_RemainTime

#include "Basic.hpp"

#include "WBP_ToolTip_RemainTime_classes.hpp"
#include "WBP_ToolTip_RemainTime_parameters.hpp"


namespace SDK
{

// Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ExecuteUbergraph_WBP_ToolTip_RemainTime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTip_RemainTime_C::ExecuteUbergraph_WBP_ToolTip_RemainTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_RemainTime_C", "ExecuteUbergraph_WBP_ToolTip_RemainTime");

	Params::WBP_ToolTip_RemainTime_C_ExecuteUbergraph_WBP_ToolTip_RemainTime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.ChangeRecepiTooltip
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                           EventTermId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ToolTip_RemainTime_C::ChangeRecepiTooltip(const class FText& InText, const class FString& EventTermId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_RemainTime_C", "ChangeRecepiTooltip");

	Params::WBP_ToolTip_RemainTime_C_ChangeRecepiTooltip Parms{};

	Parms.InText = std::move(InText);
	Parms.EventTermId = std::move(EventTermId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ToolTip_RemainTime.WBP_ToolTip_RemainTime_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FDateTime                        DateTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_ToolTip_RemainTime_C::SetText(const class FText& InText, const struct FDateTime& DateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ToolTip_RemainTime_C", "SetText");

	Params::WBP_ToolTip_RemainTime_C_SetText Parms{};

	Parms.InText = std::move(InText);
	Parms.DateTime = std::move(DateTime);

	UObject::ProcessEvent(Func, &Parms);
}

}


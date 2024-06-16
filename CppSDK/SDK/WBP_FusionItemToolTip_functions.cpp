#pragma once

 

// Package: WBP_FusionItemToolTip

#include "Basic.hpp"

#include "WBP_FusionItemToolTip_classes.hpp"
#include "WBP_FusionItemToolTip_parameters.hpp"


namespace SDK
{

// Function WBP_FusionItemToolTip.WBP_FusionItemToolTip_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_FusionItemToolTip_C::SetItem(int32 InItemIndex, bool bUnidentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FusionItemToolTip_C", "SetItem");

	Params::WBP_FusionItemToolTip_C_SetItem Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bUnidentified = bUnidentified;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_FusionItemToolTip.WBP_FusionItemToolTip_C.GetTooltipText
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   MinValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           String                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_FusionItemToolTip_C::GetTooltipText(int32 MinValue, int32 MaxValue, class FString* String) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_FusionItemToolTip_C", "GetTooltipText");

	Params::WBP_FusionItemToolTip_C_GetTooltipText Parms{};

	Parms.MinValue = MinValue;
	Parms.MaxValue = MaxValue;

	UObject::ProcessEvent(Func, &Parms);

	if (String != nullptr)
		*String = std::move(Parms.String);
}

}


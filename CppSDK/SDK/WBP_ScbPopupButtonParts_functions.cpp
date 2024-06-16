#pragma once

 

// Package: WBP_ScbPopupButtonParts

#include "Basic.hpp"

#include "WBP_ScbPopupButtonParts_classes.hpp"
#include "WBP_ScbPopupButtonParts_parameters.hpp"


namespace SDK
{

// Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.OnClickedScbPopup__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_ScbPopupButtonParts_C::OnClickedScbPopup__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopupButtonParts_C", "OnClickedScbPopup__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.ExecuteUbergraph_WBP_ScbPopupButtonParts
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbPopupButtonParts_C::ExecuteUbergraph_WBP_ScbPopupButtonParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopupButtonParts_C", "ExecuteUbergraph_WBP_ScbPopupButtonParts");

	Params::WBP_ScbPopupButtonParts_C_ExecuteUbergraph_WBP_ScbPopupButtonParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWBP_ScbPopupButtonParts_C::BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopupButtonParts_C", "BndEvt__WBP_ScbPopupButton_SBButton_ScbPopup_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetupExpertRank
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCurrRank                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InMaxRank                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ScbPopupButtonParts_C::SetupExpertRank(int32 InCurrRank, int32 InMaxRank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopupButtonParts_C", "SetupExpertRank");

	Params::WBP_ScbPopupButtonParts_C_SetupExpertRank Parms{};

	Parms.InCurrRank = InCurrRank;
	Parms.InMaxRank = InMaxRank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ScbPopupButtonParts.WBP_ScbPopupButtonParts_C.SetEnableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ScbPopupButtonParts_C::SetEnableButton(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ScbPopupButtonParts_C", "SetEnableButton");

	Params::WBP_ScbPopupButtonParts_C_SetEnableButton Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}

}


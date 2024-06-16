#pragma once

 

// Package: UMG_MatchingMenu_Headder

#include "Basic.hpp"

#include "UMG_MatchingMenu_Headder_classes.hpp"
#include "UMG_MatchingMenu_Headder_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.OnCloseButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUMG_MatchingMenu_Headder_C::OnCloseButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Headder_C", "OnCloseButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.ExecuteUbergraph_UMG_MatchingMenu_Headder
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Headder_C::ExecuteUbergraph_UMG_MatchingMenu_Headder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Headder_C", "ExecuteUbergraph_UMG_MatchingMenu_Headder");

	Params::UMG_MatchingMenu_Headder_C_ExecuteUbergraph_UMG_MatchingMenu_Headder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.BndEvt__UMG_MatchingMenu_Headder_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_Headder_C::BndEvt__UMG_MatchingMenu_Headder_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Headder_C", "BndEvt__UMG_MatchingMenu_Headder_CmnClose01_K2Node_ComponentBoundEvent_1_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.SetDungeonInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InDungeonId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Headder_C::SetDungeonInfo(class FName InDungeonId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Headder_C", "SetDungeonInfo");

	Params::UMG_MatchingMenu_Headder_C_SetDungeonInfo Parms{};

	Parms.InDungeonId = InDungeonId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.SetButtonVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_Headder_C::SetButtonVisible(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Headder_C", "SetButtonVisible");

	Params::UMG_MatchingMenu_Headder_C_SetButtonVisible Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_Headder.UMG_MatchingMenu_Headder_C.SetDungeonInfo2
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HelpModeId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_Headder_C::SetDungeonInfo2(int32 HelpModeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_Headder_C", "SetDungeonInfo2");

	Params::UMG_MatchingMenu_Headder_C_SetDungeonInfo2 Parms{};

	Parms.HelpModeId = HelpModeId;

	UObject::ProcessEvent(Func, &Parms);
}

}


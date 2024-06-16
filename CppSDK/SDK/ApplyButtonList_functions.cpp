#pragma once

 

// Package: ApplyButtonList

#include "Basic.hpp"

#include "ApplyButtonList_classes.hpp"
#include "ApplyButtonList_parameters.hpp"


namespace SDK
{

// Function ApplyButtonList.ApplyButtonList_C.OnClickedSoloOrParty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UApplyButtonList_C::OnClickedSoloOrParty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "OnClickedSoloOrParty__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.OnClickedMatching__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UApplyButtonList_C::OnClickedMatching__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "OnClickedMatching__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.OnClickedPartyList__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UApplyButtonList_C::OnClickedPartyList__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "OnClickedPartyList__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.OnClickedHelpMatching__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           MapId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   ModeId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyButtonList_C::OnClickedHelpMatching__DelegateSignature(const class FString& MapId, int32 ModeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "OnClickedHelpMatching__DelegateSignature");

	Params::ApplyButtonList_C_OnClickedHelpMatching__DelegateSignature Parms{};

	Parms.MapId = std::move(MapId);
	Parms.ModeId = ModeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ApplyButtonList.ApplyButtonList_C.ExecuteUbergraph_ApplyButtonList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UApplyButtonList_C::ExecuteUbergraph_ApplyButtonList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "ExecuteUbergraph_ApplyButtonList");

	Params::ApplyButtonList_C_ExecuteUbergraph_ApplyButtonList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ApplyButtonList.ApplyButtonList_C.OnIsHelpMatchingMode_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   RetCode                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           GameContentId                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UApplyButtonList_C::OnIsHelpMatchingMode_Event(const bool bWasSuccessful, const int32 RetCode, const class FString& GameContentId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "OnIsHelpMatchingMode_Event");

	Params::ApplyButtonList_C_OnIsHelpMatchingMode_Event Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.RetCode = RetCode;
	Parms.GameContentId = std::move(GameContentId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ApplyButtonList.ApplyButtonList_C.GetHelpMIssionId
// (BlueprintCallable, BlueprintEvent)

void UApplyButtonList_C::GetHelpMIssionId()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "GetHelpMIssionId");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.Event_ReSetups
// (BlueprintCallable, BlueprintEvent)

void UApplyButtonList_C::Event_ReSetups()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "Event_ReSetups");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UApplyButtonList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UApplyButtonList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UApplyButtonList_C::BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "BndEvt__ApplyButtonList_CmnBtn16PartyList_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UApplyButtonList_C::BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "BndEvt__ApplyButtonList_CmnBtn01Matching_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UApplyButtonList_C::BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "BndEvt__ApplyButtonList_CmnBtn01SoloOrParty_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.Setup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCommandMenu                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMapInfo                       MapInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UApplyButtonList_C::Setup(bool IsCommandMenu, struct FSBMapInfo& MapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "Setup");

	Params::ApplyButtonList_C_Setup Parms{};

	Parms.IsCommandMenu = IsCommandMenu;
	Parms.MapInfo = std::move(MapInfo);

	UObject::ProcessEvent(Func, &Parms);

	MapInfo = std::move(Parms.MapInfo);
}


// Function ApplyButtonList.ApplyButtonList_C.SetupText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       MapInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UApplyButtonList_C::SetupText(struct FSBMapInfo& MapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "SetupText");

	Params::ApplyButtonList_C_SetupText Parms{};

	Parms.MapInfo = std::move(MapInfo);

	UObject::ProcessEvent(Func, &Parms);

	MapInfo = std::move(Parms.MapInfo);
}


// Function ApplyButtonList.ApplyButtonList_C.SetupVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCommandMenu                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBMapInfo                       MapInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UApplyButtonList_C::SetupVisibility(bool IsCommandMenu, struct FSBMapInfo& MapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "SetupVisibility");

	Params::ApplyButtonList_C_SetupVisibility Parms{};

	Parms.IsCommandMenu = IsCommandMenu;
	Parms.MapInfo = std::move(MapInfo);

	UObject::ProcessEvent(Func, &Parms);

	MapInfo = std::move(Parms.MapInfo);
}


// Function ApplyButtonList.ApplyButtonList_C.SetupIsEnabled
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       MapInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UApplyButtonList_C::SetupIsEnabled(struct FSBMapInfo& MapInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "SetupIsEnabled");

	Params::ApplyButtonList_C_SetupIsEnabled Parms{};

	Parms.MapInfo = std::move(MapInfo);

	UObject::ProcessEvent(Func, &Parms);

	MapInfo = std::move(Parms.MapInfo);
}


// Function ApplyButtonList.ApplyButtonList_C.SetErrorText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       SelectedMapInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    CanApply                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UApplyButtonList_C::SetErrorText(const struct FSBMapInfo& SelectedMapInfo, bool* CanApply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "SetErrorText");

	Params::ApplyButtonList_C_SetErrorText Parms{};

	Parms.SelectedMapInfo = std::move(SelectedMapInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (CanApply != nullptr)
		*CanApply = Parms.CanApply;
}


// Function ApplyButtonList.ApplyButtonList_C.SetErrorText2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBMapInfo                       SelectedMapInfo                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                                    IsParty                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    CanApply                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UApplyButtonList_C::SetErrorText2(const struct FSBMapInfo& SelectedMapInfo, bool IsParty, bool* CanApply)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "SetErrorText2");

	Params::ApplyButtonList_C_SetErrorText2 Parms{};

	Parms.SelectedMapInfo = std::move(SelectedMapInfo);
	Parms.IsParty = IsParty;

	UObject::ProcessEvent(Func, &Parms);

	if (CanApply != nullptr)
		*CanApply = Parms.CanApply;
}


// Function ApplyButtonList.ApplyButtonList_C.UISupportKeyReset
// (Public, BlueprintCallable, BlueprintEvent)

void UApplyButtonList_C::UISupportKeyReset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "UISupportKeyReset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ApplyButtonList.ApplyButtonList_C.SetClickInputAction
// (Public, BlueprintCallable, BlueprintEvent)

void UApplyButtonList_C::SetClickInputAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ApplyButtonList_C", "SetClickInputAction");

	UObject::ProcessEvent(Func, nullptr);
}

}


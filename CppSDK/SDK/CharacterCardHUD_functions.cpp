#pragma once

 

// Package: CharacterCardHUD

#include "Basic.hpp"

#include "CharacterCardHUD_classes.hpp"
#include "CharacterCardHUD_parameters.hpp"


namespace SDK
{

// Function CharacterCardHUD.CharacterCardHUD_C.OnClosed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.ExecuteUbergraph_CharacterCardHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCardHUD_C::ExecuteUbergraph_CharacterCardHUD(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "ExecuteUbergraph_CharacterCardHUD");

	Params::CharacterCardHUD_C_ExecuteUbergraph_CharacterCardHUD Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardHUD.CharacterCardHUD_C.OnCharacterCardShowHideKeyPressed
// (Event, Public, BlueprintEvent)

void UCharacterCardHUD_C::OnCharacterCardShowHideKeyPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "OnCharacterCardShowHideKeyPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.OnIsNewMemberFoundInParty
// (Event, Public, BlueprintEvent)

void UCharacterCardHUD_C::OnIsNewMemberFoundInParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "OnIsNewMemberFoundInParty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCardForDebug
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::OnCloseCharacterCardForDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "OnCloseCharacterCardForDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.InitializeForDebug
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::InitializeForDebug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "InitializeForDebug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.OnCloseCharacterCard
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    InResetMenuModeOnly                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardHUD_C::OnCloseCharacterCard(const bool InResetMenuModeOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "OnCloseCharacterCard");

	Params::CharacterCardHUD_C_OnCloseCharacterCard Parms{};

	Parms.InResetMenuModeOnly = InResetMenuModeOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardHUD.CharacterCardHUD_C.OnCloseHUD
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::OnCloseHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "OnCloseHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.ForceAdventurerCardClose
// (BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::ForceAdventurerCardClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "ForceAdventurerCardClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.OnInitialize
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InPartyMemberCharacterIds                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UCharacterCardHUD_C::OnInitialize(const TArray<class FString>& InPartyMemberCharacterIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "OnInitialize");

	Params::CharacterCardHUD_C_OnInitialize Parms{};

	Parms.InPartyMemberCharacterIds = std::move(InPartyMemberCharacterIds);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardHUD.CharacterCardHUD_C.WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UCharacterCardHUD_C::WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "WidgetAnimationEvt_OutAnim_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UCharacterCardHUD_C::WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "WidgetAnimationEvt_InAnim_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature
// (BlueprintEvent)

void UCharacterCardHUD_C::BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "BndEvt__CharacterCardHUD_CharacterCardList_K2Node_ComponentBoundEvent_0_OnGetCharacterCardInfos__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UCharacterCardHUD_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardHUD_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "PreConstruct");

	Params::CharacterCardHUD_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCardHUD.CharacterCardHUD_C.ShowHUD
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::ShowHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "ShowHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.HideHUD
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::HideHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "HideHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.ExecShowOrHideHUD
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::ExecShowOrHideHUD()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "ExecShowOrHideHUD");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.GetIsAdventurerCardOpened
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bOutIsOpened                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterCardHUD_C::GetIsAdventurerCardOpened(bool* bOutIsOpened)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "GetIsAdventurerCardOpened");

	Params::CharacterCardHUD_C_GetIsAdventurerCardOpened Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bOutIsOpened != nullptr)
		*bOutIsOpened = Parms.bOutIsOpened;
}


// Function CharacterCardHUD.CharacterCardHUD_C.SetMenuMode
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::SetMenuMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "SetMenuMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterCardHUD.CharacterCardHUD_C.ResetMenuMode
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterCardHUD_C::ResetMenuMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCardHUD_C", "ResetMenuMode");

	UObject::ProcessEvent(Func, nullptr);
}

}


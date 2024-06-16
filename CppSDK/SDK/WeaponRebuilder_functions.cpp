#pragma once

 

// Package: WeaponRebuilder

#include "Basic.hpp"

#include "WeaponRebuilder_classes.hpp"
#include "WeaponRebuilder_parameters.hpp"


namespace SDK
{

// Function WeaponRebuilder.WeaponRebuilder_C.ExecuteUbergraph_WeaponRebuilder
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponRebuilder_C::ExecuteUbergraph_WeaponRebuilder(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "ExecuteUbergraph_WeaponRebuilder");

	Params::WeaponRebuilder_C_ExecuteUbergraph_WeaponRebuilder Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponRebuilder_C::CustomEvent(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "CustomEvent");

	Params::WeaponRebuilder_C_CustomEvent Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponRebuilder_C::BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponRebuilder_C::BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__WeaponRebuilder_WeaponTuneAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature
// (BlueprintEvent)

void UWeaponRebuilder_C::BndEvt__WeaponRebuilder_WeaponTuneAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BndEvt__WeaponRebuilder_WeaponTuneAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponRebuilder_C::CustomEvent_0(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "CustomEvent_0");

	Params::WeaponRebuilder_C_CustomEvent_0 Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UWeaponRebuilder_C::BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BndEvt__WeaponRebuilder_BtnProbability_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponRebuilder_C::BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature");

	Params::WeaponRebuilder_C_BndEvt__WeaponRebuilder_Selector_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponRebuilder_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "OnAnimationFinished");

	Params::WeaponRebuilder_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__WeaponRebuilder_SynthedOpenSlot_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponRebuilder_C::BndEvt__WeaponRebuilder_SynthedOpenSlot_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BndEvt__WeaponRebuilder_SynthedOpenSlot_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   ProtectNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponRebuilder_C::BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature(int32 ProtectNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature");

	Params::WeaponRebuilder_C_BndEvt__RebuldWeaponDesc_K2Node_ComponentBoundEvent_3_OnProtectNumChanged__DelegateSignature Parms{};

	Parms.ProtectNum = ProtectNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponRebuilder_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.RequestPerkRebuild
// (BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::RequestPerkRebuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "RequestPerkRebuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.UnbindOnFinishedPerkRebuild
// (BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::UnbindOnFinishedPerkRebuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "UnbindOnFinishedPerkRebuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.BindOnFinishedPerkRebuild
// (BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::BindOnFinishedPerkRebuild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "BindOnFinishedPerkRebuild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.EventOnFinishedWeaponTuning
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponRebuilder_C::EventOnFinishedWeaponTuning(const int32 ErrorCode, const bool bWasSuccessful, const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "EventOnFinishedWeaponTuning");

	Params::WeaponRebuilder_C_EventOnFinishedWeaponTuning Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.OnSelectWeapon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::OnSelectWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "OnSelectWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.GenerateTokens
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::GenerateTokens()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "GenerateTokens");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.PlayAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.PlayAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.PlayAnimDetailIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::PlayAnimDetailIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "PlayAnimDetailIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.GetRequestParameter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           OutWeaponID                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutTuning_Token_ID                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OutProtect_Token_ID                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           OutLockSlots                                           (Parm, OutParm)

void UWeaponRebuilder_C::GetRequestParameter(class FString* OutWeaponID, int32* OutTuning_Token_ID, int32* OutProtect_Token_ID, TArray<int32>* OutLockSlots)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "GetRequestParameter");

	Params::WeaponRebuilder_C_GetRequestParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutWeaponID != nullptr)
		*OutWeaponID = std::move(Parms.OutWeaponID);

	if (OutTuning_Token_ID != nullptr)
		*OutTuning_Token_ID = Parms.OutTuning_Token_ID;

	if (OutProtect_Token_ID != nullptr)
		*OutProtect_Token_ID = Parms.OutProtect_Token_ID;

	if (OutLockSlots != nullptr)
		*OutLockSlots = std::move(Parms.OutLockSlots);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetSlotTextColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsHovered                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetSlotTextColor(bool Param_IsHovered)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetSlotTextColor");

	Params::WeaponRebuilder_C_SetSlotTextColor Parms{};

	Parms.Param_IsHovered = Param_IsHovered;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.ClickedLock
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   LockNum                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponRebuilder_C::ClickedLock(int32 LockNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "ClickedLock");

	Params::WeaponRebuilder_C_ClickedLock Parms{};

	Parms.LockNum = LockNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleBtnProbability
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsVisible                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleBtnProbability(bool Param_IsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleBtnProbability");

	Params::WeaponRebuilder_C_SetVisibleBtnProbability Parms{};

	Parms.Param_IsVisible = Param_IsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.OnInit
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "OnInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.Reset
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.ClickedDecide
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::ClickedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "ClickedDecide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetEnableDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetEnableDecide(bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetEnableDecide");

	Params::WeaponRebuilder_C_SetEnableDecide Parms{};

	Parms.InEnabled = InEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleWeaponStatusWindow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleWeaponStatusWindow(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleWeaponStatusWindow");

	Params::WeaponRebuilder_C_SetVisibleWeaponStatusWindow Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleTokenBox
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleTokenBox(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleTokenBox");

	Params::WeaponRebuilder_C_SetVisibleTokenBox Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleInfomation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleInfomation(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleInfomation");

	Params::WeaponRebuilder_C_SetVisibleInfomation Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleDecide(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleDecide");

	Params::WeaponRebuilder_C_SetVisibleDecide Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleBlocker
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleBlocker(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleBlocker");

	Params::WeaponRebuilder_C_SetVisibleBlocker Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleLoading
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleLoading(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleLoading");

	Params::WeaponRebuilder_C_SetVisibleLoading Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleSuccess
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleSuccess(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleSuccess");

	Params::WeaponRebuilder_C_SetVisibleSuccess Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.SetVisibleResult
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponRebuilder_C::SetVisibleResult(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "SetVisibleResult");

	Params::WeaponRebuilder_C_SetVisibleResult Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponRebuilder.WeaponRebuilder_C.OpenSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::OpenSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "OpenSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.OpenResult
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::OpenResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "OpenResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.FinishedSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponRebuilder_C::FinishedSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "FinishedSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponRebuilder.WeaponRebuilder_C.GetTokenConfirmDialogText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWeaponRebuilder_C::GetTokenConfirmDialogText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponRebuilder_C", "GetTokenConfirmDialogText");

	Params::WeaponRebuilder_C_GetTokenConfirmDialogText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


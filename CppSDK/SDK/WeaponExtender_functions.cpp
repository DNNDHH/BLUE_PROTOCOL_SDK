#pragma once

 

// Package: WeaponExtender

#include "Basic.hpp"

#include "WeaponExtender_classes.hpp"
#include "WeaponExtender_parameters.hpp"


namespace SDK
{

// Function WeaponExtender.WeaponExtender_C.ExecuteUbergraph_WeaponExtender
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponExtender_C::ExecuteUbergraph_WeaponExtender(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "ExecuteUbergraph_WeaponExtender");

	Params::WeaponExtender_C_ExecuteUbergraph_WeaponExtender Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponExtender_C::CustomEvent(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "CustomEvent");

	Params::WeaponExtender_C_CustomEvent Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.BndEvt__WeaponExtender_WeaponSlotExtendAnime_K2Node_ComponentBoundEvent_5_OnCompleteAnim__DelegateSignature
// (BlueprintEvent)

void UWeaponExtender_C::BndEvt__WeaponExtender_WeaponSlotExtendAnime_K2Node_ComponentBoundEvent_5_OnCompleteAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "BndEvt__WeaponExtender_WeaponSlotExtendAnime_K2Node_ComponentBoundEvent_5_OnCompleteAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponExtender_C::CustomEvent_0(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "CustomEvent_0");

	Params::WeaponExtender_C_CustomEvent_0 Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponExtender_C::BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature");

	Params::WeaponExtender_C_BndEvt__WeaponExtender_Selector2_K2Node_ComponentBoundEvent_3_OnSelectListItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponExtender_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "OnAnimationFinished");

	Params::WeaponExtender_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.BndEvt__WeaponExtender_WeaponSyntheOpenSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponExtender_C::BndEvt__WeaponExtender_WeaponSyntheOpenSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "BndEvt__WeaponExtender_WeaponSyntheOpenSlotButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponExtender_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_1_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.RequestUnlockPerkSlot
// (BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::RequestUnlockPerkSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "RequestUnlockPerkSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.UnbindOnFinishedUnlockPerkSlot
// (BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::UnbindOnFinishedUnlockPerkSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "UnbindOnFinishedUnlockPerkSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.BindOnFinishedUnlockPerkSlot
// (BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::BindOnFinishedUnlockPerkSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "BindOnFinishedUnlockPerkSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.EventOnFinishedUnlockPerkSlot
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponExtender_C::EventOnFinishedUnlockPerkSlot(const int32 ErrorCode, const bool bWasSuccessful, const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "EventOnFinishedUnlockPerkSlot");

	Params::WeaponExtender_C_EventOnFinishedUnlockPerkSlot Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.OnSelectWeapon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::OnSelectWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "OnSelectWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.GenerateTokens
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::GenerateTokens()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "GenerateTokens");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.PlayAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.PlayAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.PlayAnimDetailIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::PlayAnimDetailIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "PlayAnimDetailIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.GetRequestParameter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                           WeaponID                                               (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   TokenID                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponExtender_C::GetRequestParameter(class FString* WeaponID, int32* TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "GetRequestParameter");

	Params::WeaponExtender_C_GetRequestParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (WeaponID != nullptr)
		*WeaponID = std::move(Parms.WeaponID);

	if (TokenID != nullptr)
		*TokenID = Parms.TokenID;
}


// Function WeaponExtender.WeaponExtender_C.OnInit
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "OnInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.Reset
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.ClickedDecide
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::ClickedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "ClickedDecide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.SetEnableDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetEnableDecide(bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetEnableDecide");

	Params::WeaponExtender_C_SetEnableDecide Parms{};

	Parms.InEnabled = InEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.SetVisibleWeaponStatusWindow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetVisibleWeaponStatusWindow(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetVisibleWeaponStatusWindow");

	Params::WeaponExtender_C_SetVisibleWeaponStatusWindow Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.SetVisibleTokenBox
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetVisibleTokenBox(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetVisibleTokenBox");

	Params::WeaponExtender_C_SetVisibleTokenBox Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.SetVisibleInfomation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetVisibleInfomation(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetVisibleInfomation");

	Params::WeaponExtender_C_SetVisibleInfomation Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.SetVisibleDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetVisibleDecide(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetVisibleDecide");

	Params::WeaponExtender_C_SetVisibleDecide Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.SetVisibleBlocker
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetVisibleBlocker(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetVisibleBlocker");

	Params::WeaponExtender_C_SetVisibleBlocker Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.SetVisibleLoading
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetVisibleLoading(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetVisibleLoading");

	Params::WeaponExtender_C_SetVisibleLoading Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.SetVisibleSuccess
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetVisibleSuccess(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetVisibleSuccess");

	Params::WeaponExtender_C_SetVisibleSuccess Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.SetVisibleResult
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponExtender_C::SetVisibleResult(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "SetVisibleResult");

	Params::WeaponExtender_C_SetVisibleResult Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponExtender.WeaponExtender_C.OpenSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::OpenSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "OpenSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.OpenResult
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::OpenResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "OpenResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.FinishedSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponExtender_C::FinishedSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "FinishedSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponExtender.WeaponExtender_C.GetTokenConfirmDialogText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWeaponExtender_C::GetTokenConfirmDialogText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponExtender_C", "GetTokenConfirmDialogText");

	Params::WeaponExtender_C_GetTokenConfirmDialogText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


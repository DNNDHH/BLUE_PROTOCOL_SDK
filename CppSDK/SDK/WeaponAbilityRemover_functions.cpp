#pragma once

 

// Package: WeaponAbilityRemover

#include "Basic.hpp"

#include "WeaponAbilityRemover_classes.hpp"
#include "WeaponAbilityRemover_parameters.hpp"


namespace SDK
{

// Function WeaponAbilityRemover.WeaponAbilityRemover_C.ExecuteUbergraph_WeaponAbilityRemover
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponAbilityRemover_C::ExecuteUbergraph_WeaponAbilityRemover(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "ExecuteUbergraph_WeaponAbilityRemover");

	Params::WeaponAbilityRemover_C_ExecuteUbergraph_WeaponAbilityRemover Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponAbilityRemover_C::CustomEvent(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "CustomEvent");

	Params::WeaponAbilityRemover_C_CustomEvent Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BndEvt__WeaponAbilityRemover_TokenBox_K2Node_ComponentBoundEvent_3_EventSelect__DelegateSignature
// (BlueprintEvent)

void UWeaponAbilityRemover_C::BndEvt__WeaponAbilityRemover_TokenBox_K2Node_ComponentBoundEvent_3_EventSelect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "BndEvt__WeaponAbilityRemover_TokenBox_K2Node_ComponentBoundEvent_3_EventSelect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BndEvt__WeaponAbilityRemover_WeaponRemoveAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature
// (BlueprintEvent)

void UWeaponAbilityRemover_C::BndEvt__WeaponAbilityRemover_WeaponRemoveAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "BndEvt__WeaponAbilityRemover_WeaponRemoveAnime_K2Node_ComponentBoundEvent_2_OnCompleteAnim__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Param_Result                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponAbilityRemover_C::CustomEvent_0(EDialogResult Param_Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "CustomEvent_0");

	Params::WeaponAbilityRemover_C_CustomEvent_0 Parms{};

	Parms.Param_Result = Param_Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SlotNo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponAbilityRemover_C::BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature(int32 SlotNo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature");

	Params::WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_WeaponStatusWindow_K2Node_ComponentBoundEvent_6_OnClickedPerkSlot__DelegateSignature Parms{};

	Parms.SlotNo = SlotNo;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature
// (BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponAbilityRemover_C::BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature(const struct FOwnItemInfo& SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature");

	Params::WeaponAbilityRemover_C_BndEvt__WeaponAbilityRemover_Selector_1_K2Node_ComponentBoundEvent_5_OnSelectListItem__DelegateSignature Parms{};

	Parms.SelectItem = std::move(SelectItem);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponAbilityRemover_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OnAnimationFinished");

	Params::WeaponAbilityRemover_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BndEvt__WeaponAbilityRemover_SynthedOpenSlot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponAbilityRemover_C::BndEvt__WeaponAbilityRemover_SynthedOpenSlot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "BndEvt__WeaponAbilityRemover_SynthedOpenSlot_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BndEvt__CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature
// (BlueprintEvent)

void UWeaponAbilityRemover_C::BndEvt__CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "BndEvt__CmnBack01_K2Node_ComponentBoundEvent_4_EventClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.RequestAbilityRemoved
// (BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::RequestAbilityRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "RequestAbilityRemoved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.EventOnFinishedAbilityRemoved
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bWasSuccessful                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWeaponAbilityRemover_C::EventOnFinishedAbilityRemoved(const int32 ErrorCode, const bool bWasSuccessful, const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "EventOnFinishedAbilityRemoved");

	Params::WeaponAbilityRemover_C_EventOnFinishedAbilityRemoved Parms{};

	Parms.ErrorCode = ErrorCode;
	Parms.bWasSuccessful = bWasSuccessful;
	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.UnbindOnFinishedAbilityRemoved
// (BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::UnbindOnFinishedAbilityRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "UnbindOnFinishedAbilityRemoved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.BindOnFinishedAbilityRemoved
// (BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::BindOnFinishedAbilityRemoved()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "BindOnFinishedAbilityRemoved");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnSelectWeapon
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::OnSelectWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OnSelectWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnSelectPerk
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::OnSelectPerk()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OnSelectPerk");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GenerateTokens
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::GenerateTokens()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "GenerateTokens");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SelectToken
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::SelectToken()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SelectToken");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.PlayAnimIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.PlayAnimOut
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::PlayAnimOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "PlayAnimOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.PlayAnimDetailIn
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::PlayAnimDetailIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "PlayAnimDetailIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.UpdateDecide
// (Private, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::UpdateDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "UpdateDecide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.UpdateEnableRecycleCheckBox
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::UpdateEnableRecycleCheckBox()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "UpdateEnableRecycleCheckBox");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetEnableRecycleCheckBox
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInIsEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetEnableRecycleCheckBox(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetEnableRecycleCheckBox");

	Params::WeaponAbilityRemover_C_SetEnableRecycleCheckBox Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnInit
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::OnInit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OnInit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnBind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::OnBind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OnBind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnUnbind
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::OnUnbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OnUnbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.Reset
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "Reset");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OnComplete
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ErrorCode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponAbilityRemover_C::OnComplete(int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OnComplete");

	Params::WeaponAbilityRemover_C_OnComplete Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.ClickedDecide
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::ClickedDecide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "ClickedDecide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetEnableDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetEnableDecide(bool InEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetEnableDecide");

	Params::WeaponAbilityRemover_C_SetEnableDecide Parms{};

	Parms.InEnabled = InEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleWeaponStatusWindow
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetVisibleWeaponStatusWindow(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetVisibleWeaponStatusWindow");

	Params::WeaponAbilityRemover_C_SetVisibleWeaponStatusWindow Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleTokenBox
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetVisibleTokenBox(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetVisibleTokenBox");

	Params::WeaponAbilityRemover_C_SetVisibleTokenBox Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleInfomation
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetVisibleInfomation(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetVisibleInfomation");

	Params::WeaponAbilityRemover_C_SetVisibleInfomation Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleDecide
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetVisibleDecide(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetVisibleDecide");

	Params::WeaponAbilityRemover_C_SetVisibleDecide Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleBlocker
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetVisibleBlocker(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetVisibleBlocker");

	Params::WeaponAbilityRemover_C_SetVisibleBlocker Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleLoading
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetVisibleLoading(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetVisibleLoading");

	Params::WeaponAbilityRemover_C_SetVisibleLoading Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleSuccess
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetVisibleSuccess(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetVisibleSuccess");

	Params::WeaponAbilityRemover_C_SetVisibleSuccess Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.SetVisibleResult
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InVisible                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponAbilityRemover_C::SetVisibleResult(bool InVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "SetVisibleResult");

	Params::WeaponAbilityRemover_C_SetVisibleResult Parms{};

	Parms.InVisible = InVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OpenSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::OpenSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OpenSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.OpenResult
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::OpenResult()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "OpenResult");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.FinishedSuccess
// (Protected, BlueprintCallable, BlueprintEvent)

void UWeaponAbilityRemover_C::FinishedSuccess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "FinishedSuccess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GetFullStorageDialogText
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWeaponAbilityRemover_C::GetFullStorageDialogText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "GetFullStorageDialogText");

	Params::WeaponAbilityRemover_C_GetFullStorageDialogText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GetRequestParameter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FString                           OutWeaponID                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   OutTokenID                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                           OutSlots                                               (Parm, OutParm)

void UWeaponAbilityRemover_C::GetRequestParameter(class FString* OutWeaponID, int32* OutTokenID, TArray<int32>* OutSlots) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "GetRequestParameter");

	Params::WeaponAbilityRemover_C_GetRequestParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutWeaponID != nullptr)
		*OutWeaponID = std::move(Parms.OutWeaponID);

	if (OutTokenID != nullptr)
		*OutTokenID = Parms.OutTokenID;

	if (OutSlots != nullptr)
		*OutSlots = std::move(Parms.OutSlots);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GetItemName
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutName                                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UWeaponAbilityRemover_C::GetItemName(int32 ItemId, class FString* OutName) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "GetItemName");

	Params::WeaponAbilityRemover_C_GetItemName Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (OutName != nullptr)
		*OutName = std::move(Parms.OutName);
}


// Function WeaponAbilityRemover.WeaponAbilityRemover_C.GetTokenConfirmDialogText
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UWeaponAbilityRemover_C::GetTokenConfirmDialogText() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponAbilityRemover_C", "GetTokenConfirmDialogText");

	Params::WeaponAbilityRemover_C_GetTokenConfirmDialogText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

 

// Package: UMG_MatchingMenu_EntryConditionListItem

#include "Basic.hpp"

#include "UMG_MatchingMenu_EntryConditionListItem_classes.hpp"
#include "UMG_MatchingMenu_EntryConditionListItem_parameters.hpp"


namespace SDK
{

// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.OnPressedButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                        Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionListItem_C::OnPressedButton__DelegateSignature(int32 Param_Value, const struct FVector2D& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionListItem_C", "OnPressedButton__DelegateSignature");

	Params::UMG_MatchingMenu_EntryConditionListItem_C_OnPressedButton__DelegateSignature Parms{};

	Parms.Param_Value = Param_Value;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionListItem_C::ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionListItem_C", "ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem");

	Params::UMG_MatchingMenu_EntryConditionListItem_C_ExecuteUbergraph_UMG_MatchingMenu_EntryConditionListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UUMG_MatchingMenu_EntryConditionListItem_C::BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionListItem_C", "BndEvt__UMG_MatchingMenu_EntryConditionListItem_ButtonOpenWindow_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_EntryConditionListItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionListItem_C", "PreConstruct");

	Params::UMG_MatchingMenu_EntryConditionListItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.GetPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                        OutPosition                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MatchingMenu_EntryConditionListItem_C::GetPosition(struct FVector2D* OutPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionListItem_C", "GetPosition");

	Params::UMG_MatchingMenu_EntryConditionListItem_C_GetPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutPosition != nullptr)
		*OutPosition = std::move(Parms.OutPosition);
}


// Function UMG_MatchingMenu_EntryConditionListItem.UMG_MatchingMenu_EntryConditionListItem_C.SetVisibleUnderline
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MatchingMenu_EntryConditionListItem_C::SetVisibleUnderline(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MatchingMenu_EntryConditionListItem_C", "SetVisibleUnderline");

	Params::UMG_MatchingMenu_EntryConditionListItem_C_SetVisibleUnderline Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}


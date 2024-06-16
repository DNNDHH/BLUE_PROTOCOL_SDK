#pragma once

 

// Package: UMG_MultipleSelectDialog

#include "Basic.hpp"

#include "UMG_MultipleSelectDialog_classes.hpp"
#include "UMG_MultipleSelectDialog_parameters.hpp"


namespace SDK
{

// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.ExecuteUbergraph_UMG_MultipleSelectDialog
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleSelectDialog_C::ExecuteUbergraph_UMG_MultipleSelectDialog(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "ExecuteUbergraph_UMG_MultipleSelectDialog");

	Params::UMG_MultipleSelectDialog_C_ExecuteUbergraph_UMG_MultipleSelectDialog Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UUMG_MultipleSelectDialog_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetDialogPosition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                        InPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleSelectDialog_C::SetDialogPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "SetDialogPosition");

	Params::UMG_MultipleSelectDialog_C_SetDialogPosition Parms{};

	Parms.InPosition = std::move(InPosition);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.SetCancelAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleSelectDialog_C::SetCancelAction(const int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "SetCancelAction");

	Params::UMG_MultipleSelectDialog_C_SetCancelAction Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)

void UUMG_MultipleSelectDialog_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "CustomEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MultipleSelectDialog_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUMG_MultipleSelectDialog_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.OnSelected_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SelectIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MultipleSelectDialog_C::OnSelected_Event_0(int32 SelectIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "OnSelected_Event_0");

	Params::UMG_MultipleSelectDialog_C_OnSelected_Event_0 Parms{};

	Parms.SelectIndex = SelectIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UMG_MultipleSelectDialog.UMG_MultipleSelectDialog_C.HandleInit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Message                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class FText>                     Selections                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_MultipleSelectDialog_C::HandleInit(const class FText& Message, const TArray<class FText>& Selections)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UMG_MultipleSelectDialog_C", "HandleInit");

	Params::UMG_MultipleSelectDialog_C_HandleInit Parms{};

	Parms.Message = std::move(Message);
	Parms.Selections = std::move(Selections);

	UObject::ProcessEvent(Func, &Parms);
}

}


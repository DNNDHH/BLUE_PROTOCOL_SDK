#pragma once

 

// Package: BP_ChoiceDialogItem

#include "Basic.hpp"

#include "BP_ChoiceDialogItem_classes.hpp"
#include "BP_ChoiceDialogItem_parameters.hpp"


namespace SDK
{

// Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_ChoiceDialogItem_C*           Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChoiceDialogItem_C::OnClicked__DelegateSignature(class UBP_ChoiceDialogItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialogItem_C", "OnClicked__DelegateSignature");

	Params::BP_ChoiceDialogItem_C_OnClicked__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.ExecuteUbergraph_BP_ChoiceDialogItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ChoiceDialogItem_C::ExecuteUbergraph_BP_ChoiceDialogItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialogItem_C", "ExecuteUbergraph_BP_ChoiceDialogItem");

	Params::BP_ChoiceDialogItem_C_ExecuteUbergraph_BP_ChoiceDialogItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ChoiceDialogItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialogItem_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UBP_ChoiceDialogItem_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialogItem_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ChoiceDialogItem.BP_ChoiceDialogItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_ChoiceDialogItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ChoiceDialogItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


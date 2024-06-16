#pragma once

 

// Package: BP_RsDialog_PaymentSelect

#include "Basic.hpp"

#include "BP_RsDialog_PaymentSelect_classes.hpp"
#include "BP_RsDialog_PaymentSelect_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_PaymentSelect_C::OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_PaymentSelect_C", "OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecuteUbergraph_BP_RsDialog_PaymentSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_PaymentSelect_C::ExecuteUbergraph_BP_RsDialog_PaymentSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_PaymentSelect_C", "ExecuteUbergraph_BP_RsDialog_PaymentSelect");

	Params::BP_RsDialog_PaymentSelect_C_ExecuteUbergraph_BP_RsDialog_PaymentSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_PaymentSelect_C::BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_PaymentSelect_C", "BndEvt__Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.SetPaymentInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogPaymentType                    PaymentType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchasePrice                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_PaymentSelect_C::SetPaymentInfo(ERsDialogPaymentType PaymentType, int32 PurchasePrice)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_PaymentSelect_C", "SetPaymentInfo");

	Params::BP_RsDialog_PaymentSelect_C_SetPaymentInfo Parms{};

	Parms.PaymentType = PaymentType;
	Parms.PurchasePrice = PurchasePrice;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_PaymentSelect.BP_RsDialog_PaymentSelect_C.ExecutionConfirmText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogPaymentType                    Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_PaymentSelect_C::ExecutionConfirmText(ERsDialogPaymentType Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_PaymentSelect_C", "ExecutionConfirmText");

	Params::BP_RsDialog_PaymentSelect_C_ExecutionConfirmText Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}

}


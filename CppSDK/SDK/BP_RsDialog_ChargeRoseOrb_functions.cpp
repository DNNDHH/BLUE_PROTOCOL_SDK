#pragma once

 

// Package: BP_RsDialog_ChargeRoseOrb

#include "Basic.hpp"

#include "BP_RsDialog_ChargeRoseOrb_classes.hpp"
#include "BP_RsDialog_ChargeRoseOrb_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ChargeRoseOrb_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ChargeRoseOrb_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_ChargeRoseOrb_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_ChargeRoseOrb_C::ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ChargeRoseOrb_C", "ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb");

	Params::BP_RsDialog_ChargeRoseOrb_C_ExecuteUbergraph_BP_RsDialog_ChargeRoseOrb Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_ChargeRoseOrb_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ChargeRoseOrb_C", "BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_ChargeRoseOrb.BP_RsDialog_ChargeRoseOrb_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_ChargeRoseOrb_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_ChargeRoseOrb_C", "BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}


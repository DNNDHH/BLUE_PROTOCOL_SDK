#pragma once

 

// Package: PaymentIcon

#include "Basic.hpp"

#include "PaymentIcon_classes.hpp"
#include "PaymentIcon_parameters.hpp"


namespace SDK
{

// Function PaymentIcon.PaymentIcon_C.OnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaymentIcon_C::OnClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentIcon_C", "OnClicked__DelegateSignature");

	Params::PaymentIcon_C_OnClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PaymentIcon.PaymentIcon_C.ExecuteUbergraph_PaymentIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaymentIcon_C::ExecuteUbergraph_PaymentIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentIcon_C", "ExecuteUbergraph_PaymentIcon");

	Params::PaymentIcon_C_ExecuteUbergraph_PaymentIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PaymentIcon.PaymentIcon_C.BndEvt__PaymentIcon_Btn_Icon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPaymentIcon_C::BndEvt__PaymentIcon_Btn_Icon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentIcon_C", "BndEvt__PaymentIcon_Btn_Icon_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentIcon.PaymentIcon_C.SetIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UTexture2D>        Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UPaymentIcon_C::SetIcon(TSoftObjectPtr<class UTexture2D> Icon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentIcon_C", "SetIcon");

	Params::PaymentIcon_C_SetIcon Parms{};

	Parms.Icon = Icon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PaymentIcon.PaymentIcon_C.OnLoaded_8C0C865A4CBAA0D5999B34AE45734207
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaymentIcon_C::OnLoaded_8C0C865A4CBAA0D5999B34AE45734207(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentIcon_C", "OnLoaded_8C0C865A4CBAA0D5999B34AE45734207");

	Params::PaymentIcon_C_OnLoaded_8C0C865A4CBAA0D5999B34AE45734207 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}


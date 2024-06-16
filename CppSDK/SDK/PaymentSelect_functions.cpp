#pragma once

 

// Package: PaymentSelect

#include "Basic.hpp"

#include "PaymentSelect_classes.hpp"
#include "PaymentSelect_parameters.hpp"


namespace SDK
{

// Function PaymentSelect.PaymentSelect_C.OnDecide__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Payment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPaymentSelect_C::OnDecide__DelegateSignature(const class FString& Payment)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "OnDecide__DelegateSignature");

	Params::PaymentSelect_C_OnDecide__DelegateSignature Parms{};

	Parms.Payment = std::move(Payment);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PaymentSelect.PaymentSelect_C.OnCancel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPaymentSelect_C::OnCancel__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "OnCancel__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.ExecuteUbergraph_PaymentSelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaymentSelect_C::ExecuteUbergraph_PaymentSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "ExecuteUbergraph_PaymentSelect");

	Params::PaymentSelect_C_ExecuteUbergraph_PaymentSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PaymentSelect.PaymentSelect_C.BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPaymentSelect_C::BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "BndEvt__PaymentSelect_Btn_APayOne_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPaymentSelect_C::BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "BndEvt__PaymentSelect_Btn_Commerce_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPaymentSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.OnClickClosed
// (BlueprintCallable, BlueprintEvent)

void UPaymentSelect_C::OnClickClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "OnClickClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.OnIconClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   IconIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaymentSelect_C::OnIconClicked(int32 IconIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "OnIconClicked");

	Params::PaymentSelect_C_OnIconClicked Parms{};

	Parms.IconIndex = IconIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PaymentSelect.PaymentSelect_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UPaymentSelect_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPaymentSelect_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "BndEvt__Btn_01_K2Node_ComponentBoundEvent_5_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UPaymentSelect_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "BndEvt__Btn_02_K2Node_ComponentBoundEvent_4_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           SelectedItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// ESelectInfo                             SelectionType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPaymentSelect_C::BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature");

	Params::PaymentSelect_C_BndEvt__List_Payment_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature Parms{};

	Parms.SelectedItem = std::move(SelectedItem);
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PaymentSelect.PaymentSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPaymentSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.CreatePaymentList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPaymentSelect_C::CreatePaymentList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "CreatePaymentList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PaymentSelect.PaymentSelect_C.On_List_Payment_GenerateWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPaymentSelect_C::On_List_Payment_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "On_List_Payment_GenerateWidget_0");

	Params::PaymentSelect_C_On_List_Payment_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PaymentSelect.PaymentSelect_C.CheckVersion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RowName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Ok                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPaymentSelect_C::CheckVersion(class FName RowName, bool* Ok)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PaymentSelect_C", "CheckVersion");

	Params::PaymentSelect_C_CheckVersion Parms{};

	Parms.RowName = RowName;

	UObject::ProcessEvent(Func, &Parms);

	if (Ok != nullptr)
		*Ok = Parms.Ok;
}

}


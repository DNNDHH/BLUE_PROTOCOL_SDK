#pragma once

 

// Package: BP_RsDialog_Payment

#include "Basic.hpp"

#include "BP_RsDialog_Payment_classes.hpp"
#include "BP_RsDialog_Payment_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Payment_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Payment_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_Payment_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.ExecuteUbergraph_BP_RsDialog_Payment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Payment_C::ExecuteUbergraph_BP_RsDialog_Payment(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Payment_C", "ExecuteUbergraph_BP_RsDialog_Payment");

	Params::BP_RsDialog_Payment_C_ExecuteUbergraph_BP_RsDialog_Payment Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_Payment_C::BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Payment_C", "BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_Payment_C::BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Payment_C", "BndEvt__BP_PaymentSelect01_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.SetDialogInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               ProductTilteType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   RankFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RankTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowPurchaseNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PurchaseNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogPaymentType                    PaymentType01                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchasePrice01                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogPaymentType                    PaymentType02                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchasePrice02                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Payment_C::SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, ERsDialogPaymentType PaymentType01, int32 PurchasePrice01, ERsDialogPaymentType PaymentType02, int32 PurchasePrice02)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Payment_C", "SetDialogInfo");

	Params::BP_RsDialog_Payment_C_SetDialogInfo Parms{};

	Parms.ProductTilteType = ProductTilteType;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);
	Parms.RankFrom = RankFrom;
	Parms.RankTo = RankTo;
	Parms.ShowPurchaseNum = ShowPurchaseNum;
	Parms.PurchaseNum = PurchaseNum;
	Parms.PaymentType01 = PaymentType01;
	Parms.PurchasePrice01 = PurchasePrice01;
	Parms.PaymentType02 = PaymentType02;
	Parms.PurchasePrice02 = PurchasePrice02;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Payment.BP_RsDialog_Payment_C.BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_Payment_C::BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Payment_C", "BndEvt__BP_PaymentSelect02_K2Node_ComponentBoundEvent_2_OnButtonClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}


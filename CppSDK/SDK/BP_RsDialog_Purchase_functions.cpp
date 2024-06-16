#pragma once

 

// Package: BP_RsDialog_Purchase

#include "Basic.hpp"

#include "BP_RsDialog_Purchase_classes.hpp"
#include "BP_RsDialog_Purchase_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Purchase_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_Purchase_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.ExecuteUbergraph_BP_RsDialog_Purchase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Purchase_C::ExecuteUbergraph_BP_RsDialog_Purchase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "ExecuteUbergraph_BP_RsDialog_Purchase");

	Params::BP_RsDialog_Purchase_C_ExecuteUbergraph_BP_RsDialog_Purchase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetState_Lack
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLack                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RsDialog_Purchase_C::SetState_Lack(bool IsLack)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "SetState_Lack");

	Params::BP_RsDialog_Purchase_C_SetState_Lack Parms{};

	Parms.IsLack = IsLack;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDiscountRate_SeasonPass
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Purchase_C::SetDiscountRate_SeasonPass(int32 Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "SetDiscountRate_SeasonPass");

	Params::BP_RsDialog_Purchase_C_SetDiscountRate_SeasonPass Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDiscountRate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Purchase_C::SetDiscountRate(int32 Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "SetDiscountRate");

	Params::BP_RsDialog_Purchase_C_SetDiscountRate Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetDialogInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               ProductTilteType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   RankFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RankTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowPurchaseNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PurchaseNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ERsDialogPaymentType                    PaymentType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PurchasePrice                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsLack                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    PaidOnly                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RsDialog_Purchase_C::SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, ERsDialogPaymentType PaymentType, int32 PurchasePrice, bool bIsLack, bool PaidOnly)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "SetDialogInfo");

	Params::BP_RsDialog_Purchase_C_SetDialogInfo Parms{};

	Parms.ProductTilteType = ProductTilteType;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);
	Parms.RankFrom = RankFrom;
	Parms.RankTo = RankTo;
	Parms.ShowPurchaseNum = ShowPurchaseNum;
	Parms.PurchaseNum = PurchaseNum;
	Parms.PaymentType = PaymentType;
	Parms.PurchasePrice = PurchasePrice;
	Parms.bIsLack = bIsLack;
	Parms.PaidOnly = PaidOnly;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_Purchase_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_Purchase_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_Purchase_C::SetTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "SetTitle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.SetShopType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Purchase_C::SetShopType(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "SetShopType");

	Params::BP_RsDialog_Purchase_C_SetShopType Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Purchase.BP_RsDialog_Purchase_C.Set Caution Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_Purchase_C::Set_Caution_Text()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Purchase_C", "Set Caution Text");

	UObject::ProcessEvent(Func, nullptr);
}

}


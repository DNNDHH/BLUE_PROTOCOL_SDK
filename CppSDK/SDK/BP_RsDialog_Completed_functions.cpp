#pragma once

 

// Package: BP_RsDialog_Completed

#include "Basic.hpp"

#include "BP_RsDialog_Completed_classes.hpp"
#include "BP_RsDialog_Completed_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Completed_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Completed_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_Completed_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.ExecuteUbergraph_BP_RsDialog_Completed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Completed_C::ExecuteUbergraph_BP_RsDialog_Completed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Completed_C", "ExecuteUbergraph_BP_RsDialog_Completed");

	Params::BP_RsDialog_Completed_C_ExecuteUbergraph_BP_RsDialog_Completed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.SetCurrentShopType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Completed_C::SetCurrentShopType(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Completed_C", "SetCurrentShopType");

	Params::BP_RsDialog_Completed_C_SetCurrentShopType Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.SetDialogInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               ProductTitleType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   RankFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RankTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowPurchaseNum                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   PurchaseNum                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ShowMsgStoreLetter                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RsDialog_Completed_C::SetDialogInfo(ERsDialogProductTitleType ProductTitleType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, bool ShowPurchaseNum, int32 PurchaseNum, bool ShowMsgStoreLetter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Completed_C", "SetDialogInfo");

	Params::BP_RsDialog_Completed_C_SetDialogInfo Parms{};

	Parms.ProductTitleType = ProductTitleType;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);
	Parms.RankFrom = RankFrom;
	Parms.RankTo = RankTo;
	Parms.ShowPurchaseNum = ShowPurchaseNum;
	Parms.PurchaseNum = PurchaseNum;
	Parms.ShowMsgStoreLetter = ShowMsgStoreLetter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Completed.BP_RsDialog_Completed_C.BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_Completed_C::BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Completed_C", "BndEvt__Btn_Check_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

 

// Package: BP_RsDialog_UseItem

#include "Basic.hpp"

#include "BP_RsDialog_UseItem_classes.hpp"
#include "BP_RsDialog_UseItem_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_UseItem_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_UseItem_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_UseItem_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.ExecuteUbergraph_BP_RsDialog_UseItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_UseItem_C::ExecuteUbergraph_BP_RsDialog_UseItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_UseItem_C", "ExecuteUbergraph_BP_RsDialog_UseItem");

	Params::BP_RsDialog_UseItem_C_ExecuteUbergraph_BP_RsDialog_UseItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_UseItem_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_UseItem_C", "BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.SetDialogInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               ProductTitleType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   RankFrom                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RankTo                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             EffectDescription                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RsDialog_UseItem_C::SetDialogInfo(ERsDialogProductTitleType ProductTitleType, int32 ItemSetId, const class FText& ProductName, int32 RankFrom, int32 RankTo, const class FText& EffectDescription)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_UseItem_C", "SetDialogInfo");

	Params::BP_RsDialog_UseItem_C_SetDialogInfo Parms{};

	Parms.ProductTitleType = ProductTitleType;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);
	Parms.RankFrom = RankFrom;
	Parms.RankTo = RankTo;
	Parms.EffectDescription = std::move(EffectDescription);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_UseItem.BP_RsDialog_UseItem_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_UseItem_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_UseItem_C", "BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}


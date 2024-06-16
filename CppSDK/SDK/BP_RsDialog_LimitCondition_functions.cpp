#pragma once

 

// Package: BP_RsDialog_LimitCondition

#include "Basic.hpp"

#include "BP_RsDialog_LimitCondition_classes.hpp"
#include "BP_RsDialog_LimitCondition_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_LimitCondition_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_LimitCondition_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.ExecuteUbergraph_BP_RsDialog_LimitCondition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_LimitCondition_C::ExecuteUbergraph_BP_RsDialog_LimitCondition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "ExecuteUbergraph_BP_RsDialog_LimitCondition");

	Params::BP_RsDialog_LimitCondition_C_ExecuteUbergraph_BP_RsDialog_LimitCondition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.ResetText
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_LimitCondition_C::ResetText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "ResetText");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RsDialog_LimitCondition_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_LimitCondition_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.AddItem_LimitCondition
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAchieve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_RsDialog_LimitCondition_C::AddItem_LimitCondition(bool IsAchieve, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "AddItem_LimitCondition");

	Params::BP_RsDialog_LimitCondition_C_AddItem_LimitCondition Parms{};

	Parms.IsAchieve = IsAchieve;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.SetDialogInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               ProductTilteType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RsDialog_LimitCondition_C::SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "SetDialogInfo");

	Params::BP_RsDialog_LimitCondition_C_SetDialogInfo Parms{};

	Parms.ProductTilteType = ProductTilteType;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_LimitCondition_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_LimitCondition.BP_RsDialog_LimitCondition_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_LimitCondition_C::SetTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_C", "SetTitle");

	UObject::ProcessEvent(Func, nullptr);
}

}


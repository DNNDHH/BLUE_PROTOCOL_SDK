#pragma once

 

// Package: BP_RsDialog_LimitCondition_Item

#include "Basic.hpp"

#include "BP_RsDialog_LimitCondition_Item_classes.hpp"
#include "BP_RsDialog_LimitCondition_Item_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_LimitCondition_Item_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_Item_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_LimitCondition_Item_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.ExecuteUbergraph_BP_RsDialog_LimitCondition_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_LimitCondition_Item_C::ExecuteUbergraph_BP_RsDialog_LimitCondition_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_Item_C", "ExecuteUbergraph_BP_RsDialog_LimitCondition_Item");

	Params::BP_RsDialog_LimitCondition_Item_C_ExecuteUbergraph_BP_RsDialog_LimitCondition_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_LimitCondition_Item.BP_RsDialog_LimitCondition_Item_C.SetItemInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAchieve                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_RsDialog_LimitCondition_Item_C::SetItemInfo(bool IsAchieve, const class FString& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_LimitCondition_Item_C", "SetItemInfo");

	Params::BP_RsDialog_LimitCondition_Item_C_SetItemInfo Parms{};

	Parms.IsAchieve = IsAchieve;
	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}


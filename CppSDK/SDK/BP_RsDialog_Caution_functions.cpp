#pragma once

 

// Package: BP_RsDialog_Caution

#include "Basic.hpp"

#include "BP_RsDialog_Caution_classes.hpp"
#include "BP_RsDialog_Caution_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Caution_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Caution_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_Caution_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.ExecuteUbergraph_BP_RsDialog_Caution
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Caution_C::ExecuteUbergraph_BP_RsDialog_Caution(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Caution_C", "ExecuteUbergraph_BP_RsDialog_Caution");

	Params::BP_RsDialog_Caution_C_ExecuteUbergraph_BP_RsDialog_Caution Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.SetDialogInfo
// (BlueprintCallable, BlueprintEvent)

void UBP_RsDialog_Caution_C::SetDialogInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Caution_C", "SetDialogInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_Caution_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Caution_C", "BndEvt__Btn_02_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_Caution_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Caution_C", "BndEvt__Btn_01_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_Caution.BP_RsDialog_Caution_C.SetShopType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRmShopMenuType                       ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_Caution_C::SetShopType(ESBRmShopMenuType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_Caution_C", "SetShopType");

	Params::BP_RsDialog_Caution_C_SetShopType Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: PurchaseTypeTabItem

#include "Basic.hpp"

#include "PurchaseTypeTabItem_classes.hpp"
#include "PurchaseTypeTabItem_parameters.hpp"


namespace SDK
{

// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.OnBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_BtnId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseTypeTabItem_C::OnBtnClicked__DelegateSignature(int32 Param_BtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "OnBtnClicked__DelegateSignature");

	Params::PurchaseTypeTabItem_C_OnBtnClicked__DelegateSignature Parms{};

	Parms.Param_BtnId = Param_BtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.ExecuteUbergraph_PurchaseTypeTabItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseTypeTabItem_C::ExecuteUbergraph_PurchaseTypeTabItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "ExecuteUbergraph_PurchaseTypeTabItem");

	Params::PurchaseTypeTabItem_C_ExecuteUbergraph_PurchaseTypeTabItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseTypeTabItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "PreConstruct");

	Params::PurchaseTypeTabItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UPurchaseTypeTabItem_C::BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "BndEvt__StepListItem_Gasha_Btn1_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPurchaseTypeTabItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UPurchaseTypeTabItem_C::BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "BndEvt__Btn1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPurchaseTypeTabItem_C::BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "BndEvt__StepListItem_Btn1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.GetBtnText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TextId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchaseTypeTabItem_C::GetBtnText(int32* TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "GetBtnText");

	Params::PurchaseTypeTabItem_C_GetBtnText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TextId != nullptr)
		*TextId = Parms.TextId;
}


// Function PurchaseTypeTabItem.PurchaseTypeTabItem_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bSelected                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPurchaseTypeTabItem_C::SetBtnSelected(bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchaseTypeTabItem_C", "SetBtnSelected");

	Params::PurchaseTypeTabItem_C_SetBtnSelected Parms{};

	Parms.bSelected = bSelected;

	UObject::ProcessEvent(Func, &Parms);
}

}


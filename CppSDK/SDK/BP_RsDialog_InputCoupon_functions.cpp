#pragma once

 

// Package: BP_RsDialog_InputCoupon

#include "Basic.hpp"

#include "BP_RsDialog_InputCoupon_classes.hpp"
#include "BP_RsDialog_InputCoupon_parameters.hpp"


namespace SDK
{

// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogButtonType                     Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_InputCoupon_C::OnButtonClicked__DelegateSignature(ERsDialogButtonType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "OnButtonClicked__DelegateSignature");

	Params::BP_RsDialog_InputCoupon_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.OnUseCoupon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Code                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_RsDialog_InputCoupon_C::OnUseCoupon__DelegateSignature(const class FString& Code)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "OnUseCoupon__DelegateSignature");

	Params::BP_RsDialog_InputCoupon_C_OnUseCoupon__DelegateSignature Parms{};

	Parms.Code = std::move(Code);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.ExecuteUbergraph_BP_RsDialog_InputCoupon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_RsDialog_InputCoupon_C::ExecuteUbergraph_BP_RsDialog_InputCoupon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "ExecuteUbergraph_BP_RsDialog_InputCoupon");

	Params::BP_RsDialog_InputCoupon_C_ExecuteUbergraph_BP_RsDialog_InputCoupon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_RsDialog_InputCoupon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "PreConstruct");

	Params::BP_RsDialog_InputCoupon_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBP_RsDialog_InputCoupon_C::BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::BP_RsDialog_InputCoupon_C_BndEvt__Box_Input_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBP_RsDialog_InputCoupon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.SetDialogInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ERsDialogProductTitleType               ProductTilteType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             ProductName                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_RsDialog_InputCoupon_C::SetDialogInfo(ERsDialogProductTitleType ProductTilteType, int32 ItemSetId, const class FText& ProductName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "SetDialogInfo");

	Params::BP_RsDialog_InputCoupon_C_SetDialogInfo Parms{};

	Parms.ProductTilteType = ProductTilteType;
	Parms.ItemSetId = ItemSetId;
	Parms.ProductName = std::move(ProductName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_InputCoupon_C::BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "BndEvt__Btn_02_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RsDialog_InputCoupon.BP_RsDialog_InputCoupon_C.BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBP_RsDialog_InputCoupon_C::BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RsDialog_InputCoupon_C", "BndEvt__Btn_01_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}


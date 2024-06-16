#pragma once

 

// Package: EventShopCashBox

#include "Basic.hpp"

#include "EventShopCashBox_classes.hpp"
#include "EventShopCashBox_parameters.hpp"


namespace SDK
{

// Function EventShopCashBox.EventShopCashBox_C.OnPurchased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UEventShopCashBox_C::OnPurchased__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "OnPurchased__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopCashBox.EventShopCashBox_C.ExecuteUbergraph_EventShopCashBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_C::ExecuteUbergraph_EventShopCashBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "ExecuteUbergraph_EventShopCashBox");

	Params::EventShopCashBox_C_ExecuteUbergraph_EventShopCashBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCashBox.EventShopCashBox_C.BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UEventShopCashBox_C::BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "BndEvt__EventShopCashBox_Btn_Purchase_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopCashBox.EventShopCashBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventShopCashBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopCashBox.EventShopCashBox_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UEventShopCashBox_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopCashBox.EventShopCashBox_C.SetTokenList
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           TokenList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEventShopCashBox_C::SetTokenList(TArray<int32>& TokenList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "SetTokenList");

	Params::EventShopCashBox_C_SetTokenList Parms{};

	Parms.TokenList = std::move(TokenList);

	UObject::ProcessEvent(Func, &Parms);

	TokenList = std::move(Parms.TokenList);
}


// Function EventShopCashBox.EventShopCashBox_C.SetTokenAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Price                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_C::SetTokenAmount(int32 TokenID, int32 Price)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "SetTokenAmount");

	Params::EventShopCashBox_C_SetTokenAmount Parms{};

	Parms.TokenID = TokenID;
	Parms.Price = Price;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCashBox.EventShopCashBox_C.ResetAmount
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShopCashBox_C::ResetAmount()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "ResetAmount");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopCashBox.EventShopCashBox_C.GetAmount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_C::GetAmount(int32 TokenID, int32* Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "GetAmount");

	Params::EventShopCashBox_C_GetAmount Parms{};

	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);

	if (Amount != nullptr)
		*Amount = Parms.Amount;
}


// Function EventShopCashBox.EventShopCashBox_C.SetShopType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EShopType                               ShopType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCashBox_C::SetShopType(EShopType ShopType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "SetShopType");

	Params::EventShopCashBox_C_SetShopType Parms{};

	Parms.ShopType = ShopType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCashBox.EventShopCashBox_C.UpdatePurchaseButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           PriceList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEventShopCashBox_C::UpdatePurchaseButton(TArray<int32>& PriceList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "UpdatePurchaseButton");

	Params::EventShopCashBox_C_UpdatePurchaseButton Parms{};

	Parms.PriceList = std::move(PriceList);

	UObject::ProcessEvent(Func, &Parms);

	PriceList = std::move(Parms.PriceList);
}


// Function EventShopCashBox.EventShopCashBox_C.SetClickInputState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopCashBox_C::SetClickInputState(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCashBox_C", "SetClickInputState");

	Params::EventShopCashBox_C_SetClickInputState Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}

}


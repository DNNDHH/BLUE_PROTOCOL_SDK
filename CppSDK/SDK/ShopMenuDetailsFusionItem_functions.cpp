#pragma once

 

// Package: ShopMenuDetailsFusionItem

#include "Basic.hpp"

#include "ShopMenuDetailsFusionItem_classes.hpp"
#include "ShopMenuDetailsFusionItem_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsFusionItem_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsFusionItem_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsFusionItem_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ExecuteUbergraph_ShopMenuDetailsFusionItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsFusionItem_C::ExecuteUbergraph_ShopMenuDetailsFusionItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "ExecuteUbergraph_ShopMenuDetailsFusionItem");

	Params::ShopMenuDetailsFusionItem_C_ExecuteUbergraph_ShopMenuDetailsFusionItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsFusionItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_AmountMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsFusionItem_C::ShowDetails(int32 ItemIndex, int32 Param_Amount, int32 Param_AmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "ShowDetails");

	Params::ShopMenuDetailsFusionItem_C_ShowDetails Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Param_Amount = Param_Amount;
	Parms.Param_AmountMin = Param_AmountMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsFusionItem_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsFusionItem_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "OnAnimationFinished");

	Params::ShopMenuDetailsFusionItem_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemIconImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsFusionItem_C::SetItemIconImage(int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "SetItemIconImage");

	Params::ShopMenuDetailsFusionItem_C_SetItemIconImage Parms{};

	Parms.InItemIndex = InItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsFusionItem.ShopMenuDetailsFusionItem_C.SetItemEffectText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsFusionItem_C::SetItemEffectText(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsFusionItem_C", "SetItemEffectText");

	Params::ShopMenuDetailsFusionItem_C_SetItemEffectText Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}

}


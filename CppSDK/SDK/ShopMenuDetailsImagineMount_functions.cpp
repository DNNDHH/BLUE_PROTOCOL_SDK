#pragma once

 

// Package: ShopMenuDetailsImagineMount

#include "Basic.hpp"

#include "ShopMenuDetailsImagineMount_classes.hpp"
#include "ShopMenuDetailsImagineMount_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsImagineMount_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsImagineMount_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsImagineMount_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "OnClickZoomIn__DelegateSignature");

	Params::ShopMenuDetailsImagineMount_C_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.ExecuteUbergraph_ShopMenuDetailsImagineMount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsImagineMount_C::ExecuteUbergraph_ShopMenuDetailsImagineMount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "ExecuteUbergraph_ShopMenuDetailsImagineMount");

	Params::ShopMenuDetailsImagineMount_C_ExecuteUbergraph_ShopMenuDetailsImagineMount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.BndEvt__ShopMenuDetailsImagineMount_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsImagineMount_C::BndEvt__ShopMenuDetailsImagineMount_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "BndEvt__ShopMenuDetailsImagineMount_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UShopMenuDetailsImagineMount_C::SetData(int32 ItemIndex, int32 Amount, int32 AmountMin, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "SetData");

	Params::ShopMenuDetailsImagineMount_C_SetData Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Amount = Amount;
	Parms.AmountMin = AmountMin;
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShopMenuDetailsImagineMount_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsImagineMount_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsImagineMount_C::ShowDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "ShowDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsImagineMount.ShopMenuDetailsImagineMount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsImagineMount_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsImagineMount_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

 

// Package: ShopMenuDetailsStamp

#include "Basic.hpp"

#include "ShopMenuDetailsStamp_classes.hpp"
#include "ShopMenuDetailsStamp_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsStamp_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsStamp_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsStamp_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.ExecuteUbergraph_ShopMenuDetailsStamp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsStamp_C::ExecuteUbergraph_ShopMenuDetailsStamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsStamp_C", "ExecuteUbergraph_ShopMenuDetailsStamp");

	Params::ShopMenuDetailsStamp_C_ExecuteUbergraph_ShopMenuDetailsStamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsStamp_C::SetData(ESBRewardItemType RewardType, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsStamp_C", "SetData");

	Params::ShopMenuDetailsStamp_C_SetData Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShopMenuDetailsStamp_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsStamp_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsStamp_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsStamp_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsStamp_C::ShowDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsStamp_C", "ShowDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsStamp.ShopMenuDetailsStamp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsStamp_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsStamp_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


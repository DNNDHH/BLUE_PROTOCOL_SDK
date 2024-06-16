#pragma once

 

// Package: ShopMenuDetailsAchievement

#include "Basic.hpp"

#include "ShopMenuDetailsAchievement_classes.hpp"
#include "ShopMenuDetailsAchievement_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsAchievement_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsAchievement_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsAchievement_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ExecuteUbergraph_ShopMenuDetailsAchievement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsAchievement_C::ExecuteUbergraph_ShopMenuDetailsAchievement(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsAchievement_C", "ExecuteUbergraph_ShopMenuDetailsAchievement");

	Params::ShopMenuDetailsAchievement_C_ExecuteUbergraph_ShopMenuDetailsAchievement Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsAchievement_C::SetData(ESBRewardItemType RewardType, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsAchievement_C", "SetData");

	Params::ShopMenuDetailsAchievement_C_SetData Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShopMenuDetailsAchievement_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsAchievement_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsAchievement_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsAchievement_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsAchievement_C::ShowDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsAchievement_C", "ShowDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsAchievement.ShopMenuDetailsAchievement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsAchievement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsAchievement_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


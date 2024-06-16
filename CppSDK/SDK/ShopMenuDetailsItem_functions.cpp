#pragma once

 

// Package: ShopMenuDetailsItem

#include "Basic.hpp"

#include "ShopMenuDetailsItem_classes.hpp"
#include "ShopMenuDetailsItem_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsItem_C::OnClose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "OnClose__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsItem_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickItemBoxDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsItem_C::OnClickItemBoxDetail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "OnClickItemBoxDetail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "OnClickZoomIn__DelegateSignature");

	Params::ShopMenuDetailsItem_C_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnClickShowProduct__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::OnClickShowProduct__DelegateSignature(ESBRewardItemType RewardType, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "OnClickShowProduct__DelegateSignature");

	Params::ShopMenuDetailsItem_C_OnClickShowProduct__DelegateSignature Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ExecuteUbergraph_ShopMenuDetailsItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::ExecuteUbergraph_ShopMenuDetailsItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "ExecuteUbergraph_ShopMenuDetailsItem");

	Params::ShopMenuDetailsItem_C_ExecuteUbergraph_ShopMenuDetailsItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsItem_C::BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "BndEvt__ShopMenuDetailsItem_SBButtonShowProduct_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetupExtraButton
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsItem_C::SetupExtraButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "SetupExtraButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ResetDisplay
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsItem_C::ResetDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "ResetDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsItem_C::BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "BndEvt__ShopMenuDetailsItem_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_1_OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsItem_C::BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "BndEvt__ShopMenuDetailsItem_SBButtonItemBox_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "OnAnimationFinished");

	Params::ShopMenuDetailsItem_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsItem_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Amount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_AmountMin                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::ShowDetails(int32 ItemIndex, int32 Param_Amount, int32 Param_AmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "ShowDetails");

	Params::ShopMenuDetailsItem_C_ShowDetails Parms{};

	Parms.ItemIndex = ItemIndex;
	Parms.Param_Amount = Param_Amount;
	Parms.Param_AmountMin = Param_AmountMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemIconImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::SetItemIconImage(int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "SetItemIconImage");

	Params::ShopMenuDetailsItem_C_SetItemIconImage Parms{};

	Parms.InItemIndex = InItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemEffectText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::SetItemEffectText(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "SetItemEffectText");

	Params::ShopMenuDetailsItem_C_SetItemEffectText Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetItemRecastText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsItem_C::SetItemRecastText(int32 InItemID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "SetItemRecastText");

	Params::ShopMenuDetailsItem_C_SetItemRecastText Parms{};

	Parms.InItemID = InItemID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsItem.ShopMenuDetailsItem_C.SetIntervalGrpVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShopMenuDetailsItem_C::SetIntervalGrpVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsItem_C", "SetIntervalGrpVisibility");

	Params::ShopMenuDetailsItem_C_SetIntervalGrpVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: ShopMenuDetailsCurrency

#include "Basic.hpp"

#include "ShopMenuDetailsCurrency_classes.hpp"
#include "ShopMenuDetailsCurrency_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnEndCloseDetailAnimation__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      InWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCurrency_C::OnEndCloseDetailAnimation__DelegateSignature(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "OnEndCloseDetailAnimation__DelegateSignature");

	Params::ShopMenuDetailsCurrency_C_OnEndCloseDetailAnimation__DelegateSignature Parms{};

	Parms.InWidget = InWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnClickZoomIn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBDetailsZoomIn                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCurrency_C::OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "OnClickZoomIn__DelegateSignature");

	Params::ShopMenuDetailsCurrency_C_OnClickZoomIn__DelegateSignature Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnClickItemBoxDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsCurrency_C::OnClickItemBoxDetail__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "OnClickItemBoxDetail__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.OnCheckShowProduct__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCurrency_C::OnCheckShowProduct__DelegateSignature(ESBRewardItemType RewardType, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "OnCheckShowProduct__DelegateSignature");

	Params::ShopMenuDetailsCurrency_C_OnCheckShowProduct__DelegateSignature Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.ExecuteUbergraph_ShopMenuDetailsCurrency
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCurrency_C::ExecuteUbergraph_ShopMenuDetailsCurrency(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "ExecuteUbergraph_ShopMenuDetailsCurrency");

	Params::ShopMenuDetailsCurrency_C_ExecuteUbergraph_ShopMenuDetailsCurrency Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCurrency_C::SetData(ESBRewardItemType RewardType, int32 ItemIndex, int32 Amount, int32 AmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "SetData");

	Params::ShopMenuDetailsCurrency_C_SetData Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;
	Parms.Amount = Amount;
	Parms.AmountMin = AmountMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UShopMenuDetailsCurrency_C::WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.CloseDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsCurrency_C::CloseDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "CloseDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.ShowDetails
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsCurrency_C::ShowDetails()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "ShowDetails");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShopMenuDetailsCurrency_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.BndEvt__ShopMenuDetailsCurrency_SBButtonItemBoxDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsCurrency_C::BndEvt__ShopMenuDetailsCurrency_SBButtonItemBoxDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "BndEvt__ShopMenuDetailsCurrency_SBButtonItemBoxDetail_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.BndEvt__ShopMenuDetailsCurrency_SBButtonShowProduct_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsCurrency_C::BndEvt__ShopMenuDetailsCurrency_SBButtonShowProduct_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "BndEvt__ShopMenuDetailsCurrency_SBButtonShowProduct_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.ResetDisplay
// (BlueprintCallable, BlueprintEvent)

void UShopMenuDetailsCurrency_C::ResetDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "ResetDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.BndEvt__ShopMenuDetailsCurrency_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature
// (BlueprintEvent)

void UShopMenuDetailsCurrency_C::BndEvt__ShopMenuDetailsCurrency_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "BndEvt__ShopMenuDetailsCurrency_WBP_ShopMenuDetailsTags_K2Node_ComponentBoundEvent_0_OnClickZoomIn__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.GetDescription
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                                    bValid                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

class FString UShopMenuDetailsCurrency_C::GetDescription(ESBRewardItemType RewardType, int32 ItemIndex, bool* bValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "GetDescription");

	Params::ShopMenuDetailsCurrency_C_GetDescription Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (bValid != nullptr)
		*bValid = Parms.bValid;

	return Parms.ReturnValue;
}


// Function ShopMenuDetailsCurrency.ShopMenuDetailsCurrency_C.IsVisibieShowProductForCurrency
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bVisible                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   ButtonIndex                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetailsCurrency_C::IsVisibieShowProductForCurrency(ESBRewardItemType RewardType, int32 ItemIndex, bool* bVisible, int32* ButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetailsCurrency_C", "IsVisibieShowProductForCurrency");

	Params::ShopMenuDetailsCurrency_C_IsVisibieShowProductForCurrency Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (bVisible != nullptr)
		*bVisible = Parms.bVisible;

	if (ButtonIndex != nullptr)
		*ButtonIndex = Parms.ButtonIndex;
}

}


#pragma once

 

// Package: FlatShop_ProductItem_DescItem

#include "Basic.hpp"

#include "FlatShop_ProductItem_DescItem_classes.hpp"
#include "FlatShop_ProductItem_DescItem_parameters.hpp"


namespace SDK
{

// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSetItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_ProductItem_DescItem_C::OnBtnClicked__DelegateSignature(bool IsSetItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "OnBtnClicked__DelegateSignature");

	Params::FlatShop_ProductItem_DescItem_C_OnBtnClicked__DelegateSignature Parms{};

	Parms.IsSetItem = IsSetItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnBtnClicked2__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::OnBtnClicked2__DelegateSignature(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "OnBtnClicked2__DelegateSignature");

	Params::FlatShop_ProductItem_DescItem_C_OnBtnClicked2__DelegateSignature Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ExecuteUbergraph_FlatShop_ProductItem_DescItem
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::ExecuteUbergraph_FlatShop_ProductItem_DescItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "ExecuteUbergraph_FlatShop_ProductItem_DescItem");

	Params::FlatShop_ProductItem_DescItem_C_ExecuteUbergraph_FlatShop_ProductItem_DescItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFlatShop_ProductItem_DescItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeTrying
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Sender                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_ProductItem_DescItem_C::OnChangeTrying(class UBP_SBProductItemData_C* Sender, bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "OnChangeTrying");

	Params::FlatShop_ProductItem_DescItem_C_OnChangeTrying Parms{};

	Parms.Sender = Sender;
	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetTrying
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_ProductItem_DescItem_C::SetTrying(bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "SetTrying");

	Params::FlatShop_ProductItem_DescItem_C_SetTrying Parms{};

	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.LayoutCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   Param_DetailType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::LayoutCheck(E_SBProductDetailType Param_DetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "LayoutCheck");

	Params::FlatShop_ProductItem_DescItem_C_LayoutCheck Parms{};

	Parms.Param_DetailType = Param_DetailType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.UpdateLayout
// (BlueprintCallable, BlueprintEvent)

void UFlatShop_ProductItem_DescItem_C::UpdateLayout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "UpdateLayout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlatShop_ProductItem_DescItem_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "PreConstruct");

	Params::FlatShop_ProductItem_DescItem_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.OnChangeVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Param_Visibility                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::OnChangeVisibility(ESlateVisibility Param_Visibility)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "OnChangeVisibility");

	Params::FlatShop_ProductItem_DescItem_C_OnChangeVisibility Parms{};

	Parms.Param_Visibility = Param_Visibility;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFlatShop_ProductItem_DescItem_C::BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "BndEvt__Btn_Item_1_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFlatShop_ProductItem_DescItem_C::BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::SetProductInfo(int32 ItemId, EItemType ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "SetProductInfo");

	Params::FlatShop_ProductItem_DescItem_C_SetProductInfo Parms{};

	Parms.ItemId = ItemId;
	Parms.ItemType = ItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductInfoReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::SetProductInfoReward(ESBRewardItemType RewardItemType, int32 ItemId, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "SetProductInfoReward");

	Params::FlatShop_ProductItem_DescItem_C_SetProductInfoReward Parms{};

	Parms.RewardItemType = RewardItemType;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetProductItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_SBProductItemData_C*          Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::SetProductItemData(class UBP_SBProductItemData_C* Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "SetProductItemData");

	Params::FlatShop_ProductItem_DescItem_C_SetProductItemData Parms{};

	Parms.Data = Data;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSwitchType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SwitchId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::SetSwitchType(int32 SwitchId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "SetSwitchType");

	Params::FlatShop_ProductItem_DescItem_C_SetSwitchType Parms{};

	Parms.SwitchId = SwitchId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetRate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::SetRate(float Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "SetRate");

	Params::FlatShop_ProductItem_DescItem_C_SetRate Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetDetailType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_SBProductDetailType                   InDetailType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlatShop_ProductItem_DescItem_C::SetDetailType(E_SBProductDetailType InDetailType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "SetDetailType");

	Params::FlatShop_ProductItem_DescItem_C_SetDetailType Parms{};

	Parms.InDetailType = InDetailType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.ClearProductItemData
// (Public, BlueprintCallable, BlueprintEvent)

void UFlatShop_ProductItem_DescItem_C::ClearProductItemData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "ClearProductItemData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FlatShop_ProductItem_DescItem.FlatShop_ProductItem_DescItem_C.SetSeasonPassRewardExtraInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFlatShop_ProductItem_DescItem_C::SetSeasonPassRewardExtraInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FlatShop_ProductItem_DescItem_C", "SetSeasonPassRewardExtraInfo");

	UObject::ProcessEvent(Func, nullptr);
}

}


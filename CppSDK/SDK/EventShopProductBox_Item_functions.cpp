#pragma once

 

// Package: EventShopProductBox_Item

#include "Basic.hpp"

#include "EventShopProductBox_Item_classes.hpp"
#include "EventShopProductBox_Item_parameters.hpp"


namespace SDK
{

// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnBtnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventShopProductBox_Item_C*      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bOnNumberInput                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopProductBox_Item_C::OnBtnSelected__DelegateSignature(class UEventShopProductBox_Item_C* Item, bool bOnNumberInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "OnBtnSelected__DelegateSignature");

	Params::EventShopProductBox_Item_C_OnBtnSelected__DelegateSignature Parms{};

	Parms.Item = Item;
	Parms.bOnNumberInput = bOnNumberInput;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAdd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::OnAdd__DelegateSignature(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "OnAdd__DelegateSignature");

	Params::EventShopProductBox_Item_C_OnAdd__DelegateSignature Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSub__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::OnSub__DelegateSignature(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "OnSub__DelegateSignature");

	Params::EventShopProductBox_Item_C_OnSub__DelegateSignature Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnAddRemake__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventShopProductBox_Item_C*      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::OnAddRemake__DelegateSignature(class UEventShopProductBox_Item_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "OnAddRemake__DelegateSignature");

	Params::EventShopProductBox_Item_C_OnAddRemake__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnSubRemake__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEventShopProductBox_Item_C*      Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::OnSubRemake__DelegateSignature(class UEventShopProductBox_Item_C* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "OnSubRemake__DelegateSignature");

	Params::EventShopProductBox_Item_C_OnSubRemake__DelegateSignature Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.ExecuteUbergraph_EventShopProductBox_Item
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::ExecuteUbergraph_EventShopProductBox_Item(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "ExecuteUbergraph_EventShopProductBox_Item");

	Params::EventShopProductBox_Item_C_ExecuteUbergraph_EventShopProductBox_Item Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetTrying
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bTrying                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopProductBox_Item_C::SetTrying(bool bTrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetTrying");

	Params::EventShopProductBox_Item_C_SetTrying Parms{};

	Parms.bTrying = bTrying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.LoadTexture
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrencyType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::LoadTexture(int32 CurrencyType, int32 TokenID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "LoadTexture");

	Params::EventShopProductBox_Item_C_LoadTexture Parms{};

	Parms.CurrencyType = CurrencyType;
	Parms.TokenID = TokenID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UEventShopProductBox_Item_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetSelectNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::SetSelectNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetSelectNum");

	Params::EventShopProductBox_Item_C_SetSelectNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.UpdateButton
// (BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::UpdateButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "UpdateButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBEventShopProduct              Param_ProductData                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// float                                   Param_DiscountRate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsDiscount                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USBTemporallyStorage*             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBTemporallyStorage*             Equip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBTemporallyStorage*             Storage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBTemporallyStorage*             Ornament                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::SetProductData(const struct FSBEventShopProduct& Param_ProductData, float Param_DiscountRate, bool Param_IsDiscount, class USBTemporallyStorage* Item, class USBTemporallyStorage* Equip, class USBTemporallyStorage* Storage, class USBTemporallyStorage* Ornament)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetProductData");

	Params::EventShopProductBox_Item_C_SetProductData Parms{};

	Parms.Param_ProductData = std::move(Param_ProductData);
	Parms.Param_DiscountRate = Param_DiscountRate;
	Parms.Param_IsDiscount = Param_IsDiscount;
	Parms.Item = Item;
	Parms.Equip = Equip;
	Parms.Storage = Storage;
	Parms.Ornament = Ornament;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.StartRepeatMinus
// (BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::StartRepeatMinus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "StartRepeatMinus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.NumberMinus
// (BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::NumberMinus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "NumberMinus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UEventShopProductBox_Item_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UEventShopProductBox_Item_C::BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "BndEvt__SBButton_Minus_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.ClearHandle
// (BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::ClearHandle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "ClearHandle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.StartRepeatPlus
// (BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::StartRepeatPlus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "StartRepeatPlus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.NumberPlus
// (BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::NumberPlus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "NumberPlus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UEventShopProductBox_Item_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UEventShopProductBox_Item_C::BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "BndEvt__SBButton_Plus_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UEventShopProductBox_Item_C::BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "BndEvt__SBBtn1Hit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetExchangePeriod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        End                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::SetExchangePeriod(const struct FDateTime& End)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetExchangePeriod");

	Params::EventShopProductBox_Item_C_SetExchangePeriod Parms{};

	Parms.End = std::move(End);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetProductIcon
// (BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::SetProductIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetProductIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetItemId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemSetId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::GetItemId(int32 ItemSetId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "GetItemId");

	Params::EventShopProductBox_Item_C_GetItemId Parms{};

	Parms.ItemSetId = ItemSetId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckItemType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::CheckItemType(int32 ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "CheckItemType");

	Params::EventShopProductBox_Item_C_CheckItemType Parms{};

	Parms.ItemType = ItemType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetStockNum
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Stock                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Limit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::SetStockNum(int32 Stock, int32 Limit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetStockNum");

	Params::EventShopProductBox_Item_C_SetStockNum Parms{};

	Parms.Stock = Stock;
	Parms.Limit = Limit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetResetType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::SetResetType(int32 Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetResetType");

	Params::EventShopProductBox_Item_C_SetResetType Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A");

	Params::EventShopProductBox_Item_C_OnLoaded_8BF2257B4B76563CA1AA46BFA48D763A Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56");

	Params::EventShopProductBox_Item_C_OnLoaded_4B7D8DF8408EDDC34FB910BF7F350F56 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopProductBox_Item_C::SetBtnSelected(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetBtnSelected");

	Params::EventShopProductBox_Item_C_SetBtnSelected Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetBtnSelected Remake
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Selected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopProductBox_Item_C::SetBtnSelected_Remake(bool Selected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetBtnSelected Remake");

	Params::EventShopProductBox_Item_C_SetBtnSelected_Remake Parms{};

	Parms.Selected = Selected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetPurchaseNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Purchase                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Force                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopProductBox_Item_C::SetPurchaseNum(int32 Purchase, bool Force)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetPurchaseNum");

	Params::EventShopProductBox_Item_C_SetPurchaseNum Parms{};

	Parms.Purchase = Purchase;
	Parms.Force = Force;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetAmountNum
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Have                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   Remain                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::GetAmountNum(bool Have, int32* Remain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "GetAmountNum");

	Params::EventShopProductBox_Item_C_GetAmountNum Parms{};

	Parms.Have = Have;

	UObject::ProcessEvent(Func, &Parms);

	if (Remain != nullptr)
		*Remain = Parms.Remain;
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetStorageRemainNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Remain                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::GetStorageRemainNum(int32* Remain)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "GetStorageRemainNum");

	Params::EventShopProductBox_Item_C_GetStorageRemainNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Remain != nullptr)
		*Remain = Parms.Remain;
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetWorkSpace
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBTemporallyStorage*             Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBTemporallyStorage*             Equip                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBTemporallyStorage*             Storage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USBTemporallyStorage*             Ornament                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::SetWorkSpace(class USBTemporallyStorage* Item, class USBTemporallyStorage* Equip, class USBTemporallyStorage* Storage, class USBTemporallyStorage* Ornament)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetWorkSpace");

	Params::EventShopProductBox_Item_C_SetWorkSpace Parms{};

	Parms.Item = Item;
	Parms.Equip = Equip;
	Parms.Storage = Storage;
	Parms.Ornament = Ornament;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.Set Token Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrencyType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   TokenID                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_DiscountRate                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::Set_Token_Info(int32 CurrencyType, int32 TokenID, float Param_DiscountRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "Set Token Info");

	Params::EventShopProductBox_Item_C_Set_Token_Info Parms{};

	Parms.CurrencyType = CurrencyType;
	Parms.TokenID = TokenID;
	Parms.Param_DiscountRate = Param_DiscountRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.GetTAbiiltyClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBClassType                            ClassType                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::GetTAbiiltyClass(ESBClassType* ClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "GetTAbiiltyClass");

	Params::EventShopProductBox_Item_C_GetTAbiiltyClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ClassType != nullptr)
		*ClassType = Parms.ClassType;
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetIconNewMark
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::SetIconNewMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetIconNewMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.IsReadedNewMark
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShopProductBox_Item_C::IsReadedNewMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "IsReadedNewMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SetActiveIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopProductBox_Item_C::SetActiveIcon(bool IsItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SetActiveIcon");

	Params::EventShopProductBox_Item_C_SetActiveIcon Parms{};

	Parms.IsItem = IsItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.CheckExchangeLimitNum
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   LimitNum                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopProductBox_Item_C::CheckExchangeLimitNum(int32* LimitNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "CheckExchangeLimitNum");

	Params::EventShopProductBox_Item_C_CheckExchangeLimitNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LimitNum != nullptr)
		*LimitNum = Parms.LimitNum;
}


// Function EventShopProductBox_Item.EventShopProductBox_Item_C.SwitchHoldType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsToken                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopProductBox_Item_C::SwitchHoldType(bool* IsToken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopProductBox_Item_C", "SwitchHoldType");

	Params::EventShopProductBox_Item_C_SwitchHoldType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsToken != nullptr)
		*IsToken = Parms.IsToken;
}

}


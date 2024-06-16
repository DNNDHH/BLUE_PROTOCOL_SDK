#pragma once

 

// Package: ShopMenuDetails_ItemIconL

#include "Basic.hpp"

#include "ShopMenuDetails_ItemIconL_classes.hpp"
#include "ShopMenuDetails_ItemIconL_parameters.hpp"


namespace SDK
{

// Function ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C.ExecuteUbergraph_ShopMenuDetails_ItemIconL
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetails_ItemIconL_C::ExecuteUbergraph_ShopMenuDetails_ItemIconL(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetails_ItemIconL_C", "ExecuteUbergraph_ShopMenuDetails_ItemIconL");

	Params::ShopMenuDetails_ItemIconL_C_ExecuteUbergraph_ShopMenuDetails_ItemIconL Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C.SetRewardData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ItemIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetails_ItemIconL_C::SetRewardData(ESBRewardItemType RewardType, int32 ItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetails_ItemIconL_C", "SetRewardData");

	Params::ShopMenuDetails_ItemIconL_C_SetRewardData Parms{};

	Parms.RewardType = RewardType;
	Parms.ItemIndex = ItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C.SetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetails_ItemIconL_C::SetItem(int32 InItemIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetails_ItemIconL_C", "SetItem");

	Params::ShopMenuDetails_ItemIconL_C_SetItem Parms{};

	Parms.InItemIndex = InItemIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ShopMenuDetails_ItemIconL.ShopMenuDetails_ItemIconL_C.OnLoaded_F007825A4510AF00D498C5946084418E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShopMenuDetails_ItemIconL_C::OnLoaded_F007825A4510AF00D498C5946084418E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ShopMenuDetails_ItemIconL_C", "OnLoaded_F007825A4510AF00D498C5946084418E");

	Params::ShopMenuDetails_ItemIconL_C_OnLoaded_F007825A4510AF00D498C5946084418E Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}

}


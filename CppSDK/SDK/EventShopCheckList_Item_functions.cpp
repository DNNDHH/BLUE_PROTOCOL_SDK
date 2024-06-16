#pragma once

 

// Package: EventShopCheckList_Item

#include "Basic.hpp"

#include "EventShopCheckList_Item_classes.hpp"
#include "EventShopCheckList_Item_parameters.hpp"


namespace SDK
{

// Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   NumExchange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumHave                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumLimit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCheckList_Item_C::SetItemInfo(ESBRewardItemType RewardItemType, const class FString& ItemName, int32 NumExchange, int32 NumHave, int32 NumLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_C", "SetItemInfo");

	Params::EventShopCheckList_Item_C_SetItemInfo Parms{};

	Parms.RewardItemType = RewardItemType;
	Parms.ItemName = std::move(ItemName);
	Parms.NumExchange = NumExchange;
	Parms.NumHave = NumHave;
	Parms.NumLimit = NumLimit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCheckList_Item.EventShopCheckList_Item_C.GetCheckListType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBRewardItemType                       RewardItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EventShopCheckList_ItemType             CheckListType                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCheckList_Item_C::GetCheckListType(ESBRewardItemType RewardItemType, EventShopCheckList_ItemType* CheckListType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_C", "GetCheckListType");

	Params::EventShopCheckList_Item_C_GetCheckListType Parms{};

	Parms.RewardItemType = RewardItemType;

	UObject::ProcessEvent(Func, &Parms);

	if (CheckListType != nullptr)
		*CheckListType = Parms.CheckListType;
}


// Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetStorage
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShopCheckList_Item_C::SetStorage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_C", "SetStorage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopCheckList_Item.EventShopCheckList_Item_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShopCheckList_Item_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function EventShopCheckList_Item.EventShopCheckList_Item_C.SetIconOver
// (Public, BlueprintCallable, BlueprintEvent)

void UEventShopCheckList_Item_C::SetIconOver()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_C", "SetIconOver");

	UObject::ProcessEvent(Func, nullptr);
}

}


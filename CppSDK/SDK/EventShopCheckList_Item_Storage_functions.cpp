#pragma once

 

// Package: EventShopCheckList_Item_Storage

#include "Basic.hpp"

#include "EventShopCheckList_Item_Storage_classes.hpp"
#include "EventShopCheckList_Item_Storage_parameters.hpp"


namespace SDK
{

// Function EventShopCheckList_Item_Storage.EventShopCheckList_Item_Storage_C.SetItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   NumExchange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumHave                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumLimit                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCheckList_Item_Storage_C::SetItemInfo(const class FString& ItemName, int32 NumExchange, int32 NumHave, int32 NumLimit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_Storage_C", "SetItemInfo");

	Params::EventShopCheckList_Item_Storage_C_SetItemInfo Parms{};

	Parms.ItemName = std::move(ItemName);
	Parms.NumExchange = NumExchange;
	Parms.NumHave = NumHave;
	Parms.NumLimit = NumLimit;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCheckList_Item_Storage.EventShopCheckList_Item_Storage_C.SetIconOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOver                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopCheckList_Item_Storage_C::SetIconOver(bool IsOver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_Storage_C", "SetIconOver");

	Params::EventShopCheckList_Item_Storage_C_SetIconOver Parms{};

	Parms.IsOver = IsOver;

	UObject::ProcessEvent(Func, &Parms);
}

}


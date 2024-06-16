#pragma once

 

// Package: EventShopCheckList_Item_Reward3

#include "Basic.hpp"

#include "EventShopCheckList_Item_Reward3_classes.hpp"
#include "EventShopCheckList_Item_Reward3_parameters.hpp"


namespace SDK
{

// Function EventShopCheckList_Item_Reward3.EventShopCheckList_Item_Reward3_C.SetItemInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           ItemName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   NumExchange                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NumHave                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCheckList_Item_Reward3_C::SetItemInfo(const class FString& ItemName, int32 NumExchange, int32 NumHave)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_Reward3_C", "SetItemInfo");

	Params::EventShopCheckList_Item_Reward3_C_SetItemInfo Parms{};

	Parms.ItemName = std::move(ItemName);
	Parms.NumExchange = NumExchange;
	Parms.NumHave = NumHave;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCheckList_Item_Reward3.EventShopCheckList_Item_Reward3_C.SetIconOver
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsOver                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEventShopCheckList_Item_Reward3_C::SetIconOver(bool IsOver)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Item_Reward3_C", "SetIconOver");

	Params::EventShopCheckList_Item_Reward3_C_SetIconOver Parms{};

	Parms.IsOver = IsOver;

	UObject::ProcessEvent(Func, &Parms);
}

}


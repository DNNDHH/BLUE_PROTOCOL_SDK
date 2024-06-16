#pragma once

 

// Package: EventShopCheckList_Icon

#include "Basic.hpp"

#include "EventShopCheckList_Icon_classes.hpp"
#include "EventShopCheckList_Icon_parameters.hpp"


namespace SDK
{

// Function EventShopCheckList_Icon.EventShopCheckList_Icon_C.SetSelectNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCheckList_Icon_C::SetSelectNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Icon_C", "SetSelectNum");

	Params::EventShopCheckList_Icon_C_SetSelectNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EventShopCheckList_Icon.EventShopCheckList_Icon_C.SetRewardIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       InRewardType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InAmountMin                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventShopCheckList_Icon_C::SetRewardIcon(ESBRewardItemType InRewardType, int32 InId, int32 InAmount, int32 InAmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EventShopCheckList_Icon_C", "SetRewardIcon");

	Params::EventShopCheckList_Icon_C_SetRewardIcon Parms{};

	Parms.InRewardType = InRewardType;
	Parms.InId = InId;
	Parms.InAmount = InAmount;
	Parms.InAmountMin = InAmountMin;

	UObject::ProcessEvent(Func, &Parms);
}

}


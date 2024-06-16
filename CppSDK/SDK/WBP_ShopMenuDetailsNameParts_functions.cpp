#pragma once

 

// Package: WBP_ShopMenuDetailsNameParts

#include "Basic.hpp"

#include "WBP_ShopMenuDetailsNameParts_classes.hpp"
#include "WBP_ShopMenuDetailsNameParts_parameters.hpp"


namespace SDK
{

// Function WBP_ShopMenuDetailsNameParts.WBP_ShopMenuDetailsNameParts_C.ExecuteUbergraph_WBP_ShopMenuDetailsNameParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsNameParts_C::ExecuteUbergraph_WBP_ShopMenuDetailsNameParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsNameParts_C", "ExecuteUbergraph_WBP_ShopMenuDetailsNameParts");

	Params::WBP_ShopMenuDetailsNameParts_C_ExecuteUbergraph_WBP_ShopMenuDetailsNameParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsNameParts.WBP_ShopMenuDetailsNameParts_C.SetStackB
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsNameParts_C::SetStackB(ESBRewardItemType RewardType, int32 ID, const class FString& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsNameParts_C", "SetStackB");

	Params::WBP_ShopMenuDetailsNameParts_C_SetStackB Parms{};

	Parms.RewardType = RewardType;
	Parms.ID = ID;
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsNameParts.WBP_ShopMenuDetailsNameParts_C.SetNameAndType2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsNameParts_C::SetNameAndType2(ESBRewardItemType RewardType, int32 ID, int32 Amount, int32 AmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsNameParts_C", "SetNameAndType2");

	Params::WBP_ShopMenuDetailsNameParts_C_SetNameAndType2 Parms{};

	Parms.RewardType = RewardType;
	Parms.ID = ID;
	Parms.Amount = Amount;
	Parms.AmountMin = AmountMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsNameParts.WBP_ShopMenuDetailsNameParts_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsNameParts_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsNameParts_C", "PreConstruct");

	Params::WBP_ShopMenuDetailsNameParts_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsNameParts.WBP_ShopMenuDetailsNameParts_C.SetNameAndType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsNameParts_C::SetNameAndType(ESBRewardItemType RewardType, int32 ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsNameParts_C", "SetNameAndType");

	Params::WBP_ShopMenuDetailsNameParts_C_SetNameAndType Parms{};

	Parms.RewardType = RewardType;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsNameParts.WBP_ShopMenuDetailsNameParts_C.SetText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ShopMenuDetailsNameParts_C::SetText(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsNameParts_C", "SetText");

	Params::WBP_ShopMenuDetailsNameParts_C_SetText Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsNameParts.WBP_ShopMenuDetailsNameParts_C.SetBonus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bBonus                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsNameParts_C::SetBonus(bool bBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsNameParts_C", "SetBonus");

	Params::WBP_ShopMenuDetailsNameParts_C_SetBonus Parms{};

	Parms.bBonus = bBonus;

	UObject::ProcessEvent(Func, &Parms);
}

}


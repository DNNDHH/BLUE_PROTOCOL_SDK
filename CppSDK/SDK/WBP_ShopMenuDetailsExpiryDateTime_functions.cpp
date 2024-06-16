#pragma once

 

// Package: WBP_ShopMenuDetailsExpiryDateTime

#include "Basic.hpp"

#include "WBP_ShopMenuDetailsExpiryDateTime_classes.hpp"
#include "WBP_ShopMenuDetailsExpiryDateTime_parameters.hpp"


namespace SDK
{

// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsExpiryDateTime_C::ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_ExecuteUbergraph_WBP_ShopMenuDetailsExpiryDateTime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ShopMenuDetailsExpiryDateTime_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "PreConstruct");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetDataAndVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventTermId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   DurationMinutes                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsExpiryDateTime_C::SetDataAndVisibility(const class FString& EventTermId, int32 DurationMinutes, ESBRewardItemType RewardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "SetDataAndVisibility");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_SetDataAndVisibility Parms{};

	Parms.EventTermId = std::move(EventTermId);
	Parms.DurationMinutes = DurationMinutes;
	Parms.RewardType = RewardType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetExpiryDateTime
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        ExpiryDateTime                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsExpiryDateTime_C::SetExpiryDateTime(const struct FDateTime& ExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "SetExpiryDateTime");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_SetExpiryDateTime Parms{};

	Parms.ExpiryDateTime = std::move(ExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventTermId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   DurationMinutes                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsExpiryDateTime_C::SetData(const class FString& EventTermId, int32 DurationMinutes, ESBRewardItemType RewardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "SetData");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_SetData Parms{};

	Parms.EventTermId = std::move(EventTermId);
	Parms.DurationMinutes = DurationMinutes;
	Parms.RewardType = RewardType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetEventTermId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           EventTermId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsExpiryDateTime_C::SetEventTermId(const class FString& EventTermId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "SetEventTermId");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_SetEventTermId Parms{};

	Parms.EventTermId = std::move(EventTermId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetDurationMinutes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   DurationMinutes                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsExpiryDateTime_C::SetDurationMinutes(int32 DurationMinutes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "SetDurationMinutes");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_SetDurationMinutes Parms{};

	Parms.DurationMinutes = DurationMinutes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetMessage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       RewardType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ShopMenuDetailsExpiryDateTime_C::SetMessage(ESBRewardItemType RewardType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "SetMessage");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_SetMessage Parms{};

	Parms.RewardType = RewardType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ShopMenuDetailsExpiryDateTime.WBP_ShopMenuDetailsExpiryDateTime_C.SetMessageTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                      LimitTime                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                      Desc                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ShopMenuDetailsExpiryDateTime_C::SetMessageTextColor(const struct FSlateColor& LimitTime, const struct FSlateColor& Desc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ShopMenuDetailsExpiryDateTime_C", "SetMessageTextColor");

	Params::WBP_ShopMenuDetailsExpiryDateTime_C_SetMessageTextColor Parms{};

	Parms.LimitTime = std::move(LimitTime);
	Parms.Desc = std::move(Desc);

	UObject::ProcessEvent(Func, &Parms);
}

}


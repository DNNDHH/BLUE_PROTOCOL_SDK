#pragma once

 

// Package: History_Item

#include "Basic.hpp"

#include "History_Item_classes.hpp"
#include "History_Item_parameters.hpp"


namespace SDK
{

// Function History_Item.History_Item_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBHistoryType                          Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBCashHistory                   Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UHistory_Item_C::SetData(ESBHistoryType Type, const struct FSBCashHistory& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Item_C", "SetData");

	Params::History_Item_C_SetData Parms{};

	Parms.Type = Type;
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_Item.History_Item_C.SetAmountNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Paid                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Free                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHistory_Item_C::SetAmountNum(int32 Paid, int32 Free)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Item_C", "SetAmountNum");

	Params::History_Item_C_SetAmountNum Parms{};

	Parms.Paid = Paid;
	Parms.Free = Free;

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_Item.History_Item_C.SetAmountCode
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             Text                                                   (Parm, OutParm)

void UHistory_Item_C::SetAmountCode(int32 Num, class FText* Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Item_C", "SetAmountCode");

	Params::History_Item_C_SetAmountCode Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = std::move(Parms.Text);
}


// Function History_Item.History_Item_C.SetActionTypeByTextId
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBTextTableHash                 TextId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UHistory_Item_C::SetActionTypeByTextId(const struct FSBTextTableHash& TextId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Item_C", "SetActionTypeByTextId");

	Params::History_Item_C_SetActionTypeByTextId Parms{};

	Parms.TextId = std::move(TextId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function History_Item.History_Item_C.SetReasonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UHistory_Item_C::SetReasonText(const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("History_Item_C", "SetReasonText");

	Params::History_Item_C_SetReasonText Parms{};

	Parms.Reason = std::move(Reason);

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: WBP_ItemBoxScrollText_Bag

#include "Basic.hpp"

#include "WBP_ItemBoxScrollText_Bag_classes.hpp"
#include "WBP_ItemBoxScrollText_Bag_parameters.hpp"


namespace SDK
{

// Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemSingle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Expectation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxScrollText_Bag_C::SetItemSingle(int32 NowNum, int32 MaxNum, int32 Expectation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Bag_C", "SetItemSingle");

	Params::WBP_ItemBoxScrollText_Bag_C_SetItemSingle Parms{};

	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.Expectation = Expectation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNamMax                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNamMin                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxScrollText_Bag_C::SetItemRange(int32 NowNum, int32 MaxNum, int32 ExpectationNamMax, int32 ExpectationNamMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Bag_C", "SetItemRange");

	Params::WBP_ItemBoxScrollText_Bag_C_SetItemRange Parms{};

	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.ExpectationNamMax = ExpectationNamMax;
	Parms.ExpectationNamMin = ExpectationNamMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.GetNumColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      SlateColor                                             (Parm, OutParm)

void UWBP_ItemBoxScrollText_Bag_C::GetNumColor(int32 Num, int32 Max, struct FSlateColor* SlateColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Bag_C", "GetNumColor");

	Params::WBP_ItemBoxScrollText_Bag_C_GetNumColor Parms{};

	Parms.Num = Num;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);
}


// Function WBP_ItemBoxScrollText_Bag.WBP_ItemBoxScrollText_Bag_C.SetItemRandomRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxAdd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ItemBoxScrollText_Bag_C::SetItemRandomRange(int32 NowNum, int32 MaxNum, int32 MaxAdd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_Bag_C", "SetItemRandomRange");

	Params::WBP_ItemBoxScrollText_Bag_C_SetItemRandomRange Parms{};

	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.MaxAdd = MaxAdd;

	UObject::ProcessEvent(Func, &Parms);
}

}


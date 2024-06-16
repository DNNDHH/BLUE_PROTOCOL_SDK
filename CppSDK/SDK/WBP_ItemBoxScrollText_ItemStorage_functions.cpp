#pragma once

 

// Package: WBP_ItemBoxScrollText_ItemStorage

#include "Basic.hpp"

#include "WBP_ItemBoxScrollText_ItemStorage_classes.hpp"
#include "WBP_ItemBoxScrollText_ItemStorage_parameters.hpp"


namespace SDK
{

// Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.SetItemSingle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ItemName                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Expectation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanNotLost                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxScrollText_ItemStorage_C::SetItemSingle(const class FText& Param_ItemName, int32 NowNum, int32 MaxNum, int32 Expectation, bool bCanNotLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_ItemStorage_C", "SetItemSingle");

	Params::WBP_ItemBoxScrollText_ItemStorage_C_SetItemSingle Parms{};

	Parms.Param_ItemName = std::move(Param_ItemName);
	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.Expectation = Expectation;
	Parms.bCanNotLost = bCanNotLost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.SetItemRange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_ItemName                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   NowNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   MaxNum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNamMin                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ExpectationNamMax                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCanNotLost                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_ItemBoxScrollText_ItemStorage_C::SetItemRange(const class FText& Param_ItemName, int32 NowNum, int32 MaxNum, int32 ExpectationNamMin, int32 ExpectationNamMax, bool bCanNotLost)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_ItemStorage_C", "SetItemRange");

	Params::WBP_ItemBoxScrollText_ItemStorage_C_SetItemRange Parms{};

	Parms.Param_ItemName = std::move(Param_ItemName);
	Parms.NowNum = NowNum;
	Parms.MaxNum = MaxNum;
	Parms.ExpectationNamMin = ExpectationNamMin;
	Parms.ExpectationNamMax = ExpectationNamMax;
	Parms.bCanNotLost = bCanNotLost;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_ItemBoxScrollText_ItemStorage.WBP_ItemBoxScrollText_ItemStorage_C.GetNumColor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                      SlateColor                                             (Parm, OutParm)

void UWBP_ItemBoxScrollText_ItemStorage_C::GetNumColor(int32 Num, int32 Max, struct FSlateColor* SlateColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_ItemBoxScrollText_ItemStorage_C", "GetNumColor");

	Params::WBP_ItemBoxScrollText_ItemStorage_C_GetNumColor Parms{};

	Parms.Num = Num;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);
}

}


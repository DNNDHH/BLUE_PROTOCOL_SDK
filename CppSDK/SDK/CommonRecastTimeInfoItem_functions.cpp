#pragma once

 

// Package: CommonRecastTimeInfoItem

#include "Basic.hpp"

#include "CommonRecastTimeInfoItem_classes.hpp"
#include "CommonRecastTimeInfoItem_parameters.hpp"


namespace SDK
{

// Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.ExecuteUbergraph_CommonRecastTimeInfoItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonRecastTimeInfoItem_C::ExecuteUbergraph_CommonRecastTimeInfoItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRecastTimeInfoItem_C", "ExecuteUbergraph_CommonRecastTimeInfoItem");

	Params::CommonRecastTimeInfoItem_C_ExecuteUbergraph_CommonRecastTimeInfoItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonRecastTimeInfoItem_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRecastTimeInfoItem_C", "SetTextColor");

	Params::CommonRecastTimeInfoItem_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonRecastTimeInfoItem.CommonRecastTimeInfoItem_C.SetRecastTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRecastTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonRecastTimeInfoItem_C::SetRecastTime(float InRecastTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonRecastTimeInfoItem_C", "SetRecastTime");

	Params::CommonRecastTimeInfoItem_C_SetRecastTime Parms{};

	Parms.InRecastTime = InRecastTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

 

// Package: CommonIconToolTipContents_RecastTimeParts

#include "Basic.hpp"

#include "CommonIconToolTipContents_RecastTimeParts_classes.hpp"
#include "CommonIconToolTipContents_RecastTimeParts_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContents_RecastTimeParts_C::ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_RecastTimeParts_C", "ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts");

	Params::CommonIconToolTipContents_RecastTimeParts_C_ExecuteUbergraph_CommonIconToolTipContents_RecastTimeParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContents_RecastTimeParts_C::SetTextColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_RecastTimeParts_C", "SetTextColor");

	Params::CommonIconToolTipContents_RecastTimeParts_C_SetTextColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContents_RecastTimeParts_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_RecastTimeParts_C", "PreConstruct");

	Params::CommonIconToolTipContents_RecastTimeParts_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContents_RecastTimeParts.CommonIconToolTipContents_RecastTimeParts_C.SetRecastTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InRecastTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContents_RecastTimeParts_C::SetRecastTime(float InRecastTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContents_RecastTimeParts_C", "SetRecastTime");

	Params::CommonIconToolTipContents_RecastTimeParts_C_SetRecastTime Parms{};

	Parms.InRecastTime = InRecastTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


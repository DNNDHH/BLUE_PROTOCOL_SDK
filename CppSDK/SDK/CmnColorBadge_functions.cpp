#pragma once

 

// Package: CmnColorBadge

#include "Basic.hpp"

#include "CmnColorBadge_classes.hpp"
#include "CmnColorBadge_parameters.hpp"


namespace SDK
{

// Function CmnColorBadge.CmnColorBadge_C.ExecuteUbergraph_CmnColorBadge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnColorBadge_C::ExecuteUbergraph_CmnColorBadge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnColorBadge_C", "ExecuteUbergraph_CmnColorBadge");

	Params::CmnColorBadge_C_ExecuteUbergraph_CmnColorBadge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnColorBadge.CmnColorBadge_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCmnColorBadge_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnColorBadge_C", "PreConstruct");

	Params::CmnColorBadge_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EColorBadgeType                         InColorBadgeType                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnColorBadge_C::SetColorBadgeType(EColorBadgeType InColorBadgeType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnColorBadge_C", "SetColorBadgeType");

	Params::CmnColorBadge_C_SetColorBadgeType Parms{};

	Parms.InColorBadgeType = InColorBadgeType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnColorBadge_C::SetColorBadgeColor(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnColorBadge_C", "SetColorBadgeColor");

	Params::CmnColorBadge_C_SetColorBadgeColor Parms{};

	Parms.InColor = std::move(InColor);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnColorBadge.CmnColorBadge_C.SetColorBadgeExtraColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     InColor1                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     InColor2                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnColorBadge_C::SetColorBadgeExtraColor(const struct FLinearColor& InColor1, const struct FLinearColor& InColor2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnColorBadge_C", "SetColorBadgeExtraColor");

	Params::CmnColorBadge_C_SetColorBadgeExtraColor Parms{};

	Parms.InColor1 = std::move(InColor1);
	Parms.InColor2 = std::move(InColor2);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     OutColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnColorBadge_C::GetColorBadgeColor(struct FLinearColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnColorBadge_C", "GetColorBadgeColor");

	Params::CmnColorBadge_C_GetColorBadgeColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);
}


// Function CmnColorBadge.CmnColorBadge_C.GetColorBadgeExtraColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     OutColor1                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     OutColor2                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCmnColorBadge_C::GetColorBadgeExtraColor(struct FLinearColor* OutColor1, struct FLinearColor* OutColor2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CmnColorBadge_C", "GetColorBadgeExtraColor");

	Params::CmnColorBadge_C_GetColorBadgeExtraColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutColor1 != nullptr)
		*OutColor1 = std::move(Parms.OutColor1);

	if (OutColor2 != nullptr)
		*OutColor2 = std::move(Parms.OutColor2);
}

}


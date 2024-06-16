#pragma once

 

// Package: CommonEquipmentAbilityEfficacyInfoItem

#include "Basic.hpp"

#include "CommonEquipmentAbilityEfficacyInfoItem_classes.hpp"
#include "CommonEquipmentAbilityEfficacyInfoItem_parameters.hpp"


namespace SDK
{

// Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetAbilityEfficacyInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBAbilityConfig                 InAbilityConfig                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                             InEfficacyDesc                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   InEfficacyValue                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentAbilityEfficacyInfoItem_C::SetAbilityEfficacyInfo(const struct FSBAbilityConfig& InAbilityConfig, const class FText& InEfficacyDesc, int32 InEfficacyValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityEfficacyInfoItem_C", "SetAbilityEfficacyInfo");

	Params::CommonEquipmentAbilityEfficacyInfoItem_C_SetAbilityEfficacyInfo Parms{};

	Parms.InAbilityConfig = std::move(InAbilityConfig);
	Parms.InEfficacyDesc = std::move(InEfficacyDesc);
	Parms.InEfficacyValue = InEfficacyValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetUnderlineVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentAbilityEfficacyInfoItem_C::SetUnderlineVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityEfficacyInfoItem_C", "SetUnderlineVisibility");

	Params::CommonEquipmentAbilityEfficacyInfoItem_C_SetUnderlineVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.ConvertValueToPercentageNotation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OutConvertedValue                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)

void UCommonEquipmentAbilityEfficacyInfoItem_C::ConvertValueToPercentageNotation(int32 InValue, class FString* OutConvertedValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityEfficacyInfoItem_C", "ConvertValueToPercentageNotation");

	Params::CommonEquipmentAbilityEfficacyInfoItem_C_ConvertValueToPercentageNotation Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutConvertedValue != nullptr)
		*OutConvertedValue = std::move(Parms.OutConvertedValue);
}


// Function CommonEquipmentAbilityEfficacyInfoItem.CommonEquipmentAbilityEfficacyInfoItem_C.SetValueText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBAbilityUIAttribute                   InUIAttribute                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentAbilityEfficacyInfoItem_C::SetValueText(ESBAbilityUIAttribute InUIAttribute, int32 InValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityEfficacyInfoItem_C", "SetValueText");

	Params::CommonEquipmentAbilityEfficacyInfoItem_C_SetValueText Parms{};

	Parms.InUIAttribute = InUIAttribute;
	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);
}

}


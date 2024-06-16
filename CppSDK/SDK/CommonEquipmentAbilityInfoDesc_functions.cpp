#pragma once

 

// Package: CommonEquipmentAbilityInfoDesc

#include "Basic.hpp"

#include "CommonEquipmentAbilityInfoDesc_classes.hpp"
#include "CommonEquipmentAbilityInfoDesc_parameters.hpp"


namespace SDK
{

// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.ExecuteUbergraph_CommonEquipmentAbilityInfoDesc
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentAbilityInfoDesc_C::ExecuteUbergraph_CommonEquipmentAbilityInfoDesc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityInfoDesc_C", "ExecuteUbergraph_CommonEquipmentAbilityInfoDesc");

	Params::CommonEquipmentAbilityInfoDesc_C_ExecuteUbergraph_CommonEquipmentAbilityInfoDesc Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentAbilityInfoDesc_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityInfoDesc_C", "PreConstruct");

	Params::CommonEquipmentAbilityInfoDesc_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.CreateEfficacyInfoItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonEquipmentAbilityInfoDesc_C::CreateEfficacyInfoItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityInfoDesc_C", "CreateEfficacyInfoItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.SetupAbilityInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InAbilityEffectId                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentAbilityInfoDesc_C::SetupAbilityInfo(int32 InAbilityEffectId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityInfoDesc_C", "SetupAbilityInfo");

	Params::CommonEquipmentAbilityInfoDesc_C_SetupAbilityInfo Parms{};

	Parms.InAbilityEffectId = InAbilityEffectId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentAbilityInfoDesc.CommonEquipmentAbilityInfoDesc_C.GetAbilityPartsValueText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)

void UCommonEquipmentAbilityInfoDesc_C::GetAbilityPartsValueText(int32 InValue, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentAbilityInfoDesc_C", "GetAbilityPartsValueText");

	Params::CommonEquipmentAbilityInfoDesc_C_GetAbilityPartsValueText Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}

}


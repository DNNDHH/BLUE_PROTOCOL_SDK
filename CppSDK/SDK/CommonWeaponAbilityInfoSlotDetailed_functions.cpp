#pragma once

 

// Package: CommonWeaponAbilityInfoSlotDetailed

#include "Basic.hpp"

#include "CommonWeaponAbilityInfoSlotDetailed_classes.hpp"
#include "CommonWeaponAbilityInfoSlotDetailed_parameters.hpp"


namespace SDK
{

// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlotDetailed_C::ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotDetailed_C", "ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed");

	Params::CommonWeaponAbilityInfoSlotDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotDetailed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotDetailed_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotDetailed_C", "PreConstruct");

	Params::CommonWeaponAbilityInfoSlotDetailed_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.CreateEfficacyInfoItemList
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonWeaponAbilityInfoSlotDetailed_C::CreateEfficacyInfoItemList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotDetailed_C", "CreateEfficacyInfoItemList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetupAbilityInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBCharacterWeaponPerkData       InWeaponPerkData                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UCommonWeaponAbilityInfoSlotDetailed_C::SetupAbilityInfo(const struct FSBCharacterWeaponPerkData& InWeaponPerkData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotDetailed_C", "SetupAbilityInfo");

	Params::CommonWeaponAbilityInfoSlotDetailed_C_SetupAbilityInfo Parms{};

	Parms.InWeaponPerkData = std::move(InWeaponPerkData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.GetAbilityPartsValueText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   InValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                             OutText                                                (Parm, OutParm)

void UCommonWeaponAbilityInfoSlotDetailed_C::GetAbilityPartsValueText(int32 InValue, class FText* OutText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotDetailed_C", "GetAbilityPartsValueText");

	Params::CommonWeaponAbilityInfoSlotDetailed_C_GetAbilityPartsValueText Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = std::move(Parms.OutText);
}


// Function CommonWeaponAbilityInfoSlotDetailed.CommonWeaponAbilityInfoSlotDetailed_C.SetIsSlotEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotDetailed_C::SetIsSlotEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotDetailed_C", "SetIsSlotEmpty");

	Params::CommonWeaponAbilityInfoSlotDetailed_C_SetIsSlotEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}

}


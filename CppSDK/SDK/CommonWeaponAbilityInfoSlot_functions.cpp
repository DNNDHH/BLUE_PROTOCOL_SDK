#pragma once

 

// Package: CommonWeaponAbilityInfoSlot

#include "Basic.hpp"

#include "CommonWeaponAbilityInfoSlot_classes.hpp"
#include "CommonWeaponAbilityInfoSlot_parameters.hpp"


namespace SDK
{

// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlot_C::ExecuteUbergraph_CommonWeaponAbilityInfoSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlot_C", "ExecuteUbergraph_CommonWeaponAbilityInfoSlot");

	Params::CommonWeaponAbilityInfoSlot_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlot_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlot_C", "PreConstruct");

	Params::CommonWeaponAbilityInfoSlot_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetIsSlotEmpty
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlot_C::SetIsSlotEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlot_C", "SetIsSlotEmpty");

	Params::CommonWeaponAbilityInfoSlot_C_SetIsSlotEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotOccupancy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InOccupancyNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlot_C::SetSlotOccupancy(int32 InOccupancyNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlot_C", "SetSlotOccupancy");

	Params::CommonWeaponAbilityInfoSlot_C_SetSlotOccupancy Parms{};

	Parms.InOccupancyNum = InOccupancyNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetFusionItemName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlot_C::SetFusionItemName(const class FString& InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlot_C", "SetFusionItemName");

	Params::CommonWeaponAbilityInfoSlot_C_SetFusionItemName Parms{};

	Parms.InName = std::move(InName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetPerkRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InRarity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlot_C::SetPerkRarity(int32 InRarity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlot_C", "SetPerkRarity");

	Params::CommonWeaponAbilityInfoSlot_C_SetPerkRarity Parms{};

	Parms.InRarity = InRarity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlot.CommonWeaponAbilityInfoSlot_C.SetSlotWidth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InSlotWidth                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlot_C::SetSlotWidth(float InSlotWidth)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlot_C", "SetSlotWidth");

	Params::CommonWeaponAbilityInfoSlot_C_SetSlotWidth Parms{};

	Parms.InSlotWidth = InSlotWidth;

	UObject::ProcessEvent(Func, &Parms);
}

}


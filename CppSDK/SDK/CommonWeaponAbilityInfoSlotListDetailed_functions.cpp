#pragma once

 

// Package: CommonWeaponAbilityInfoSlotListDetailed

#include "Basic.hpp"

#include "CommonWeaponAbilityInfoSlotListDetailed_classes.hpp"
#include "CommonWeaponAbilityInfoSlotListDetailed_parameters.hpp"


namespace SDK
{

// Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlotListDetailed_C::ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotListDetailed_C", "ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed");

	Params::CommonWeaponAbilityInfoSlotListDetailed_C_ExecuteUbergraph_CommonWeaponAbilityInfoSlotListDetailed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotListDetailed_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotListDetailed_C", "PreConstruct");

	Params::CommonWeaponAbilityInfoSlotListDetailed_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.InitAllSlot
// (Public, BlueprintCallable, BlueprintEvent)

void UCommonWeaponAbilityInfoSlotListDetailed_C::InitAllSlot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotListDetailed_C", "InitAllSlot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.GetSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonWeaponAbilityInfoSlotDetailed_C*OutSlot                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlotListDetailed_C::GetSlot(int32 InSlotId, bool* IsValid, class UCommonWeaponAbilityInfoSlotDetailed_C** OutSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotListDetailed_C", "GetSlot");

	Params::CommonWeaponAbilityInfoSlotListDetailed_C_GetSlot Parms{};

	Parms.InSlotId = InSlotId;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutSlot != nullptr)
		*OutSlot = Parms.OutSlot;
}


// Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBWeaponItemData                InWeaponItemData                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UCommonWeaponAbilityInfoSlotListDetailed_C::SetSlotInfo(const struct FSBWeaponItemData& InWeaponItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotListDetailed_C", "SetSlotInfo");

	Params::CommonWeaponAbilityInfoSlotListDetailed_C_SetSlotInfo Parms{};

	Parms.InWeaponItemData = std::move(InWeaponItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonWeaponAbilityInfoSlotListDetailed_C::SetSlotEmpty(int32 InSlotId, bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotListDetailed_C", "SetSlotEmpty");

	Params::CommonWeaponAbilityInfoSlotListDetailed_C_SetSlotEmpty Parms{};

	Parms.InSlotId = InSlotId;
	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonWeaponAbilityInfoSlotListDetailed.CommonWeaponAbilityInfoSlotListDetailed_C.SetSlotOccupancy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSlotId                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InOccupancyNum                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonWeaponAbilityInfoSlotListDetailed_C::SetSlotOccupancy(int32 InSlotId, int32 InOccupancyNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonWeaponAbilityInfoSlotListDetailed_C", "SetSlotOccupancy");

	Params::CommonWeaponAbilityInfoSlotListDetailed_C_SetSlotOccupancy Parms{};

	Parms.InSlotId = InSlotId;
	Parms.InOccupancyNum = InOccupancyNum;

	UObject::ProcessEvent(Func, &Parms);
}

}


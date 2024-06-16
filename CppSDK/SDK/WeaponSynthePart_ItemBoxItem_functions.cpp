#pragma once

 

// Package: WeaponSynthePart_ItemBoxItem

#include "Basic.hpp"

#include "WeaponSynthePart_ItemBoxItem_classes.hpp"
#include "WeaponSynthePart_ItemBoxItem_parameters.hpp"


namespace SDK
{

// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.ExecuteUbergraph_WeaponSynthePart_ItemBoxItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_ItemBoxItem_C::ExecuteUbergraph_WeaponSynthePart_ItemBoxItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "ExecuteUbergraph_WeaponSynthePart_ItemBoxItem");

	Params::WeaponSynthePart_ItemBoxItem_C_ExecuteUbergraph_WeaponSynthePart_ItemBoxItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.Set HeaderMode
// (BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_ItemBoxItem_C::Set_HeaderMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "Set HeaderMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.SetItemData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_ItemBoxItem_C::SetItemData(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "SetItemData");

	Params::WeaponSynthePart_ItemBoxItem_C_SetItemData Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponSynthePart_ItemBoxItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.GetItemData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   ItemId                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponSynthePart_ItemBoxItem_C::GetItemData(int32* ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "GetItemData");

	Params::WeaponSynthePart_ItemBoxItem_C_GetItemData Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;
}


// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.SetColorTextNeedNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_ItemBoxItem_C::SetColorTextNeedNum(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "SetColorTextNeedNum");

	Params::WeaponSynthePart_ItemBoxItem_C_SetColorTextNeedNum Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.IsCondition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWeaponSynthePart_ItemBoxItem_C::IsCondition(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "IsCondition");

	Params::WeaponSynthePart_ItemBoxItem_C_IsCondition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.Nodata
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponSynthePart_ItemBoxItem_C::Nodata()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "Nodata");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponSynthePart_ItemBoxItem.WeaponSynthePart_ItemBoxItem_C.IsLockedItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UWeaponSynthePart_ItemBoxItem_C::IsLockedItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponSynthePart_ItemBoxItem_C", "IsLockedItem");

	Params::WeaponSynthePart_ItemBoxItem_C_IsLockedItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


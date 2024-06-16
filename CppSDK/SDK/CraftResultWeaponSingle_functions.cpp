#pragma once

 

// Package: CraftResultWeaponSingle

#include "Basic.hpp"

#include "CraftResultWeaponSingle_classes.hpp"
#include "CraftResultWeaponSingle_parameters.hpp"


namespace SDK
{

// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.ExecuteUbergraph_CraftResultWeaponSingle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCraftResultWeaponSingle_C::ExecuteUbergraph_CraftResultWeaponSingle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponSingle_C", "ExecuteUbergraph_CraftResultWeaponSingle");

	Params::CraftResultWeaponSingle_C_ExecuteUbergraph_CraftResultWeaponSingle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.SetUID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_UID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   StorageNo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCritical                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftResultWeaponSingle_C::SetUID(const class FString& Param_UID, int32 StorageNo, bool IsCritical)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponSingle_C", "SetUID");

	Params::CraftResultWeaponSingle_C_SetUID Parms{};

	Parms.Param_UID = std::move(Param_UID);
	Parms.StorageNo = StorageNo;
	Parms.IsCritical = IsCritical;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdateStorageDisp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsStorage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftResultWeaponSingle_C::UpdateStorageDisp(bool IsStorage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponSingle_C", "UpdateStorageDisp");

	Params::CraftResultWeaponSingle_C_UpdateStorageDisp Parms{};

	Parms.IsStorage = IsStorage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.UpdatePerkDisp
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBOwnItemListContainer*          Storage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsCritical                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCraftResultWeaponSingle_C::UpdatePerkDisp(class USBOwnItemListContainer* Storage, bool IsCritical)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponSingle_C", "UpdatePerkDisp");

	Params::CraftResultWeaponSingle_C_UpdatePerkDisp Parms{};

	Parms.Storage = Storage;
	Parms.IsCritical = IsCritical;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CraftResultWeaponSingle.CraftResultWeaponSingle_C.PlayAnimIn
// (Public, BlueprintCallable, BlueprintEvent)

void UCraftResultWeaponSingle_C::PlayAnimIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CraftResultWeaponSingle_C", "PlayAnimIn");

	UObject::ProcessEvent(Func, nullptr);
}

}


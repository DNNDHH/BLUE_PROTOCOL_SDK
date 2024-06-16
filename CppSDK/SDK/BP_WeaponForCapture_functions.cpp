#pragma once

 

// Package: BP_WeaponForCapture

#include "Basic.hpp"

#include "BP_WeaponForCapture_classes.hpp"
#include "BP_WeaponForCapture_parameters.hpp"


namespace SDK
{

// Function BP_WeaponForCapture.BP_WeaponForCapture_C.ExecuteUbergraph_BP_WeaponForCapture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_WeaponForCapture_C::ExecuteUbergraph_BP_WeaponForCapture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_C", "ExecuteUbergraph_BP_WeaponForCapture");

	Params::BP_WeaponForCapture_C_ExecuteUbergraph_BP_WeaponForCapture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture.BP_WeaponForCapture_C.SetWeaponMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASBWeapon*                        InWeapon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         InRotation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_WeaponForCapture_C::SetWeaponMesh(class ASBWeapon* InWeapon, const struct FRotator& InRotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_C", "SetWeaponMesh");

	Params::BP_WeaponForCapture_C_SetWeaponMesh Parms{};

	Parms.InWeapon = InWeapon;
	Parms.InRotation = std::move(InRotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_WeaponForCapture.BP_WeaponForCapture_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_WeaponForCapture_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_WeaponForCapture_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}

}


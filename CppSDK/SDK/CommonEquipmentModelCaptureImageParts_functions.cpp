#pragma once

 

// Package: CommonEquipmentModelCaptureImageParts

#include "Basic.hpp"

#include "CommonEquipmentModelCaptureImageParts_classes.hpp"
#include "CommonEquipmentModelCaptureImageParts_parameters.hpp"


namespace SDK
{

// Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.SwitchModelImageForWeaponOrImagine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsForWeapon                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentModelCaptureImageParts_C::SwitchModelImageForWeaponOrImagine(bool InIsForWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentModelCaptureImageParts_C", "SwitchModelImageForWeaponOrImagine");

	Params::CommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine Parms{};

	Parms.InIsForWeapon = InIsForWeapon;

	UObject::ProcessEvent(Func, &Parms);
}

}


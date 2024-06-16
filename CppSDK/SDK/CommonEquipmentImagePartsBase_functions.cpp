#pragma once

 

// Package: CommonEquipmentImagePartsBase

#include "Basic.hpp"

#include "CommonEquipmentImagePartsBase_classes.hpp"
#include "CommonEquipmentImagePartsBase_parameters.hpp"


namespace SDK
{

// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchImageType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIs2DImage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentImagePartsBase_C::SwitchImageType(bool InIs2DImage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentImagePartsBase_C", "SwitchImageType");

	Params::CommonEquipmentImagePartsBase_C_SwitchImageType Parms{};

	Parms.InIs2DImage = InIs2DImage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchModelTypeWeaponOrImagine
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsWeapon                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentImagePartsBase_C::SwitchModelTypeWeaponOrImagine(bool InIsWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentImagePartsBase_C", "SwitchModelTypeWeaponOrImagine");

	Params::CommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine Parms{};

	Parms.InIsWeapon = InIsWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetWeapon2DImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentImagePartsBase_C::SetWeapon2DImage(int32 InWeaponID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentImagePartsBase_C", "SetWeapon2DImage");

	Params::CommonEquipmentImagePartsBase_C_SetWeapon2DImage Parms{};

	Parms.InWeaponID = InWeaponID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetImagine2DImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentImagePartsBase_C::SetImagine2DImage(int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentImagePartsBase_C", "SetImagine2DImage");

	Params::CommonEquipmentImagePartsBase_C_SetImagine2DImage Parms{};

	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetModelCaptureImageVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsVisible                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipmentImagePartsBase_C::SetModelCaptureImageVisibility(bool InIsVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentImagePartsBase_C", "SetModelCaptureImageVisibility");

	Params::CommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility Parms{};

	Parms.InIsVisible = InIsVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetItem2DImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipmentImagePartsBase_C::SetItem2DImage(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipmentImagePartsBase_C", "SetItem2DImage");

	Params::CommonEquipmentImagePartsBase_C_SetItem2DImage Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}

}


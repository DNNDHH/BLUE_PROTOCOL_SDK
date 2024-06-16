#pragma once

 

// Package: CommonEquipment2DImageParts

#include "Basic.hpp"

#include "CommonEquipment2DImageParts_classes.hpp"
#include "CommonEquipment2DImageParts_parameters.hpp"


namespace SDK
{

// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.ExecuteUbergraph_CommonEquipment2DImageParts
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipment2DImageParts_C::ExecuteUbergraph_CommonEquipment2DImageParts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipment2DImageParts_C", "ExecuteUbergraph_CommonEquipment2DImageParts");

	Params::CommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.RequestEquipment2DImageLoad
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InEquipmentId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EItemType                               InEquipmentItemType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ESBImagineCategoryType                  InImagineType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipment2DImageParts_C::RequestEquipment2DImageLoad(int32 InEquipmentId, EItemType InEquipmentItemType, ESBImagineCategoryType InImagineType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipment2DImageParts_C", "RequestEquipment2DImageLoad");

	Params::CommonEquipment2DImageParts_C_RequestEquipment2DImageLoad Parms{};

	Parms.InEquipmentId = InEquipmentId;
	Parms.InEquipmentItemType = InEquipmentItemType;
	Parms.InImagineType = InImagineType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonEquipment2DImageParts_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipment2DImageParts_C", "PreConstruct");

	Params::CommonEquipment2DImageParts_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          Loaded                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipment2DImageParts_C::OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipment2DImageParts_C", "OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1");

	Params::CommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1 Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetWeapon2DImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InWeaponID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipment2DImageParts_C::SetWeapon2DImage(int32 InWeaponID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipment2DImageParts_C", "SetWeapon2DImage");

	Params::CommonEquipment2DImageParts_C_SetWeapon2DImage Parms{};

	Parms.InWeaponID = InWeaponID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetImagine2DImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipment2DImageParts_C::SetImagine2DImage(int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipment2DImageParts_C", "SetImagine2DImage");

	Params::CommonEquipment2DImageParts_C_SetImagine2DImage Parms{};

	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetItem2DImage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   ItemId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonEquipment2DImageParts_C::SetItem2DImage(int32 ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonEquipment2DImageParts_C", "SetItem2DImage");

	Params::CommonEquipment2DImageParts_C_SetItem2DImage Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);
}

}


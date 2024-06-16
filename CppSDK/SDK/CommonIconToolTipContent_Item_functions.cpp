#pragma once

 

// Package: CommonIconToolTipContent_Item

#include "Basic.hpp"

#include "CommonIconToolTipContent_Item_classes.hpp"
#include "CommonIconToolTipContent_Item_parameters.hpp"


namespace SDK
{

// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InItemIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bUnidentified                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_Item_C::SetItem(int32 InItemIndex, bool bUnidentified)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Item_C", "SetItem");

	Params::CommonIconToolTipContent_Item_C_SetItem Parms{};

	Parms.InItemIndex = InItemIndex;
	Parms.bUnidentified = bUnidentified;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Item_C::SetImagine(int32 InImagineItemId, const class FString& InUniqueId, const int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Item_C", "SetImagine");

	Params::CommonIconToolTipContent_Item_C_SetImagine Parms{};

	Parms.InImagineItemId = InImagineItemId;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetMountImagine
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InImagineItemId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Item_C::SetMountImagine(int32 InImagineItemId, const class FString& InUniqueId, const int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Item_C", "SetMountImagine");

	Params::CommonIconToolTipContent_Item_C_SetMountImagine Parms{};

	Parms.InImagineItemId = InImagineItemId;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   WeaponID                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           InUniqueId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   InStorageNumber                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Item_C::SetWeapon(int32 WeaponID, const class FString& InUniqueId, const int32 InStorageNumber)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Item_C", "SetWeapon");

	Params::CommonIconToolTipContent_Item_C_SetWeapon Parms{};

	Parms.WeaponID = WeaponID;
	Parms.InUniqueId = std::move(InUniqueId);
	Parms.InStorageNumber = InStorageNumber;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetCostume
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CostumeId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Item_C::SetCostume(int32 CostumeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Item_C", "SetCostume");

	Params::CommonIconToolTipContent_Item_C_SetCostume Parms{};

	Parms.CostumeId = CostumeId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetNameAndType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBRewardItemType                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Amount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AmountMin                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCommonIconToolTipContent_Item_C::SetNameAndType(ESBRewardItemType Type, int32 ID, int32 Amount, int32 AmountMin)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Item_C", "SetNameAndType");

	Params::CommonIconToolTipContent_Item_C_SetNameAndType Parms{};

	Parms.Type = Type;
	Parms.ID = ID;
	Parms.Amount = Amount;
	Parms.AmountMin = AmountMin;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CommonIconToolTipContent_Item.CommonIconToolTipContent_Item_C.SetVisibleStackB
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCommonIconToolTipContent_Item_C::SetVisibleStackB(bool Visible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CommonIconToolTipContent_Item_C", "SetVisibleStackB");

	Params::CommonIconToolTipContent_Item_C_SetVisibleStackB Parms{};

	Parms.Visible = Visible;

	UObject::ProcessEvent(Func, &Parms);
}

}


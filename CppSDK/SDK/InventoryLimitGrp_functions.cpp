#pragma once

 

// Package: InventoryLimitGrp

#include "Basic.hpp"

#include "InventoryLimitGrp_classes.hpp"
#include "InventoryLimitGrp_parameters.hpp"


namespace SDK
{

// Function InventoryLimitGrp.InventoryLimitGrp_C.ExecuteUbergraph_InventoryLimitGrp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::ExecuteUbergraph_InventoryLimitGrp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "ExecuteUbergraph_InventoryLimitGrp");

	Params::InventoryLimitGrp_C_ExecuteUbergraph_InventoryLimitGrp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForMountImagine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InExpiryDateTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::SetDataForMountImagine(const struct FDateTime& InExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetDataForMountImagine");

	Params::InventoryLimitGrp_C_SetDataForMountImagine Parms{};

	Parms.InExpiryDateTime = std::move(InExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForImagine
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InExpiryDateTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::SetDataForImagine(const struct FDateTime& InExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetDataForImagine");

	Params::InventoryLimitGrp_C_SetDataForImagine Parms{};

	Parms.InExpiryDateTime = std::move(InExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeaponByDurationMinutes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InDurationMinutes                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::SetDataForWeaponByDurationMinutes(int32 InDurationMinutes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetDataForWeaponByDurationMinutes");

	Params::InventoryLimitGrp_C_SetDataForWeaponByDurationMinutes Parms{};

	Parms.InDurationMinutes = InDurationMinutes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostumeByDurationMinutes
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InDurationMinutes                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::SetDataForCostumeByDurationMinutes(int32 InDurationMinutes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetDataForCostumeByDurationMinutes");

	Params::InventoryLimitGrp_C_SetDataForCostumeByDurationMinutes Parms{};

	Parms.InDurationMinutes = InDurationMinutes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InExpiryDateTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::SetDataForWeapon(const struct FDateTime& InExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetDataForWeapon");

	Params::InventoryLimitGrp_C_SetDataForWeapon Parms{};

	Parms.InExpiryDateTime = std::move(InExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDataForCostume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InExpiryDateTime                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::SetDataForCostume(const struct FDateTime& InExpiryDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetDataForCostume");

	Params::InventoryLimitGrp_C_SetDataForCostume Parms{};

	Parms.InExpiryDateTime = std::move(InExpiryDateTime);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetData
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemMasterData                  Param_ItemMasterData                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UInventoryLimitGrp_C::SetData(const struct FItemMasterData& Param_ItemMasterData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetData");

	Params::InventoryLimitGrp_C_SetData Parms{};

	Parms.Param_ItemMasterData = std::move(Param_ItemMasterData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryLimitGrp_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "PreConstruct");

	Params::InventoryLimitGrp_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDurationTimeFromMinutes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InDurationMinutes                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::SetDurationTimeFromMinutes(int32 InDurationMinutes)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetDurationTimeFromMinutes");

	Params::InventoryLimitGrp_C_SetDurationTimeFromMinutes Parms{};

	Parms.InDurationMinutes = InDurationMinutes;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetIsForShopProduct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsForShopProduct                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryLimitGrp_C::SetIsForShopProduct(bool InIsForShopProduct)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetIsForShopProduct");

	Params::InventoryLimitGrp_C_SetIsForShopProduct Parms{};

	Parms.InIsForShopProduct = InIsForShopProduct;

	UObject::ProcessEvent(Func, &Parms);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetDateTimeText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDateTime                        InDateTime                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// ESBDateTimeTextRemainTimeFlag           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

ESBDateTimeTextRemainTimeFlag UInventoryLimitGrp_C::SetDateTimeText(const struct FDateTime& InDateTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetDateTimeText");

	Params::InventoryLimitGrp_C_SetDateTimeText Parms{};

	Parms.InDateTime = std::move(InDateTime);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.SetHeadingMessage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UInventoryLimitGrp_C::SetHeadingMessage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "SetHeadingMessage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function InventoryLimitGrp.InventoryLimitGrp_C.Set Item Type
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EItemType                               Param_ItemType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryLimitGrp_C::Set_Item_Type(EItemType Param_ItemType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("InventoryLimitGrp_C", "Set Item Type");

	Params::InventoryLimitGrp_C_Set_Item_Type Parms{};

	Parms.Param_ItemType = Param_ItemType;

	UObject::ProcessEvent(Func, &Parms);
}

}


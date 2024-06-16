#pragma once

 

// Package: ItemDropInfo

#include "Basic.hpp"

#include "ItemDropInfo_classes.hpp"
#include "ItemDropInfo_parameters.hpp"


namespace SDK
{

// Function ItemDropInfo.ItemDropInfo_C.ExecuteUbergraph_ItemDropInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDropInfo_C::ExecuteUbergraph_ItemDropInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDropInfo_C", "ExecuteUbergraph_ItemDropInfo");

	Params::ItemDropInfo_C_ExecuteUbergraph_ItemDropInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemDropInfo.ItemDropInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemDropInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDropInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDropInfo.ItemDropInfo_C.Set ItemId
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_ItemId                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemDropInfo_C::Set_ItemId(int32 Param_ItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDropInfo_C", "Set ItemId");

	Params::ItemDropInfo_C_Set_ItemId Parms{};

	Parms.Param_ItemId = Param_ItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemDropInfo.ItemDropInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UItemDropInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDropInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemDropInfo.ItemDropInfo_C.GetTexts
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemMasterData                  ItemMasterData                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             Detail1                                                (Parm, OutParm)

void UItemDropInfo_C::GetTexts(const struct FItemMasterData& ItemMasterData, class FText* Detail1)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDropInfo_C", "GetTexts");

	Params::ItemDropInfo_C_GetTexts Parms{};

	Parms.ItemMasterData = std::move(ItemMasterData);

	UObject::ProcessEvent(Func, &Parms);

	if (Detail1 != nullptr)
		*Detail1 = std::move(Parms.Detail1);
}


// Function ItemDropInfo.ItemDropInfo_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UItemDropInfo_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemDropInfo_C", "GetToolTipWidget_0");

	Params::ItemDropInfo_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


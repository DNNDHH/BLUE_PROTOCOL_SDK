#pragma once

 

// Package: EquipStatusImaginePowers

#include "Basic.hpp"

#include "EquipStatusImaginePowers_classes.hpp"
#include "EquipStatusImaginePowers_parameters.hpp"


namespace SDK
{

// Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.ExecuteUbergraph_EquipStatusImaginePowers
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipStatusImaginePowers_C::ExecuteUbergraph_EquipStatusImaginePowers(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusImaginePowers_C", "ExecuteUbergraph_EquipStatusImaginePowers");

	Params::EquipStatusImaginePowers_C_ExecuteUbergraph_EquipStatusImaginePowers Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set PrevInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Param_Prev                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UEquipStatusImaginePowers_C::Set_PrevInfo(const struct FOwnItemInfo& Param_Prev)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusImaginePowers_C", "Set PrevInfo");

	Params::EquipStatusImaginePowers_C_Set_PrevInfo Parms{};

	Parms.Param_Prev = std::move(Param_Prev);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.Set ItemInfo
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     Info                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEquipStatusImaginePowers_C::Set_ItemInfo(const struct FOwnItemInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusImaginePowers_C", "Set ItemInfo");

	Params::EquipStatusImaginePowers_C_Set_ItemInfo Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function EquipStatusImaginePowers.EquipStatusImaginePowers_C.SetColorTxt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USBRuntimeTextBlock*              Txt                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PrevParam                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   AfterParam                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquipStatusImaginePowers_C::SetColorTxt(class USBRuntimeTextBlock* Txt, int32 PrevParam, int32 AfterParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("EquipStatusImaginePowers_C", "SetColorTxt");

	Params::EquipStatusImaginePowers_C_SetColorTxt Parms{};

	Parms.Txt = Txt;
	Parms.PrevParam = PrevParam;
	Parms.AfterParam = AfterParam;

	UObject::ProcessEvent(Func, &Parms);
}

}


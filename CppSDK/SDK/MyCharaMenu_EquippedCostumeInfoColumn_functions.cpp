#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfoColumn

#include "Basic.hpp"

#include "MyCharaMenu_EquippedCostumeInfoColumn_classes.hpp"
#include "MyCharaMenu_EquippedCostumeInfoColumn_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EquippedCostumeInfoColumn_C::ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfoColumn_C", "ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn");

	Params::MyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EquippedCostumeInfoColumn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfoColumn_C", "PreConstruct");

	Params::MyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.UpdateEquippedCostumeInfos
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCharaEquipInfo                  InCharaEquipInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBCharacterGender                      InCharacterGender                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EquippedCostumeInfoColumn_C::UpdateEquippedCostumeInfos(const struct FCharaEquipInfo& InCharaEquipInfo, ESBCharacterGender InCharacterGender)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfoColumn_C", "UpdateEquippedCostumeInfos");

	Params::MyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos Parms{};

	Parms.InCharaEquipInfo = std::move(InCharaEquipInfo);
	Parms.InCharacterGender = InCharacterGender;

	UObject::ProcessEvent(Func, &Parms);
}

}


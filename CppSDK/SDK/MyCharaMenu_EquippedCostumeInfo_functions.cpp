#pragma once

 

// Package: MyCharaMenu_EquippedCostumeInfo

#include "Basic.hpp"

#include "MyCharaMenu_EquippedCostumeInfo_classes.hpp"
#include "MyCharaMenu_EquippedCostumeInfo_parameters.hpp"


namespace SDK
{

// Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMyCharaMenu_EquippedCostumeInfo_C::ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfo_C", "ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo");

	Params::MyCharaMenu_EquippedCostumeInfo_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EquippedCostumeInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfo_C", "PreConstruct");

	Params::MyCharaMenu_EquippedCostumeInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.UpdateEquippedCostumeInfo
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_MyCharaMenu_EquippedCostumeType       InEquippedCostumeType                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharaEquipInfo                  InCharaEquipInfo                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<ECharaPartsLocation>             InGrayOutCharaPartsLocations                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMyCharaMenu_EquippedCostumeInfo_C::UpdateEquippedCostumeInfo(E_MyCharaMenu_EquippedCostumeType InEquippedCostumeType, const struct FCharaEquipInfo& InCharaEquipInfo, TArray<ECharaPartsLocation>& InGrayOutCharaPartsLocations)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfo_C", "UpdateEquippedCostumeInfo");

	Params::MyCharaMenu_EquippedCostumeInfo_C_UpdateEquippedCostumeInfo Parms{};

	Parms.InEquippedCostumeType = InEquippedCostumeType;
	Parms.InCharaEquipInfo = std::move(InCharaEquipInfo);
	Parms.InGrayOutCharaPartsLocations = std::move(InGrayOutCharaPartsLocations);

	UObject::ProcessEvent(Func, &Parms);

	InGrayOutCharaPartsLocations = std::move(Parms.InGrayOutCharaPartsLocations);
}


// Function MyCharaMenu_EquippedCostumeInfo.MyCharaMenu_EquippedCostumeInfo_C.GetRingEquippedHand
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBCharaEquipType                       InRingEquipType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsLeftFinger                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMyCharaMenu_EquippedCostumeInfo_C::GetRingEquippedHand(ESBCharaEquipType InRingEquipType, bool* OutIsLeftFinger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MyCharaMenu_EquippedCostumeInfo_C", "GetRingEquippedHand");

	Params::MyCharaMenu_EquippedCostumeInfo_C_GetRingEquippedHand Parms{};

	Parms.InRingEquipType = InRingEquipType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsLeftFinger != nullptr)
		*OutIsLeftFinger = Parms.OutIsLeftFinger;
}

}


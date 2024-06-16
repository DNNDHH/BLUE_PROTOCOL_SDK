#pragma once

 

// Package: DhcBattleTopEnhanceImagineInfo

#include "Basic.hpp"

#include "DhcBattleTopEnhanceImagineInfo_classes.hpp"
#include "DhcBattleTopEnhanceImagineInfo_parameters.hpp"


namespace SDK
{

// Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopEnhanceImagineInfo_C::ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopEnhanceImagineInfo_C", "ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo");

	Params::DhcBattleTopEnhanceImagineInfo_C_ExecuteUbergraph_DhcBattleTopEnhanceImagineInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDhcBattleTopEnhanceImagineInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopEnhanceImagineInfo_C", "PreConstruct");

	Params::DhcBattleTopEnhanceImagineInfo_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.CreatePassiveImagineIconUnitList
// (Public, BlueprintCallable, BlueprintEvent)

void UDhcBattleTopEnhanceImagineInfo_C::CreatePassiveImagineIconUnitList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopEnhanceImagineInfo_C", "CreatePassiveImagineIconUnitList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FSBDhcBattlePlayerEquipImagineInfo>InEquipEnhanceImagineInfo                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InClassLevel                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopEnhanceImagineInfo_C::Setup(TArray<struct FSBDhcBattlePlayerEquipImagineInfo>& InEquipEnhanceImagineInfo, ESBClassType InClassType, int32 InClassLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopEnhanceImagineInfo_C", "Setup");

	Params::DhcBattleTopEnhanceImagineInfo_C_Setup Parms{};

	Parms.InEquipEnhanceImagineInfo = std::move(InEquipEnhanceImagineInfo);
	Parms.InClassType = InClassType;
	Parms.InClassLevel = InClassLevel;

	UObject::ProcessEvent(Func, &Parms);

	InEquipEnhanceImagineInfo = std::move(Parms.InEquipEnhanceImagineInfo);
}


// Function DhcBattleTopEnhanceImagineInfo.DhcBattleTopEnhanceImagineInfo_C.GetPassiveImagineIconUnit
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPassiveImagineInfoUnitForBattleSet_C*OutImagineIconUnit                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDhcBattleTopEnhanceImagineInfo_C::GetPassiveImagineIconUnit(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* IsValid, class UPassiveImagineInfoUnitForBattleSet_C** OutImagineIconUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DhcBattleTopEnhanceImagineInfo_C", "GetPassiveImagineIconUnit");

	Params::DhcBattleTopEnhanceImagineInfo_C_GetPassiveImagineIconUnit Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutImagineIconUnit != nullptr)
		*OutImagineIconUnit = Parms.OutImagineIconUnit;
}

}


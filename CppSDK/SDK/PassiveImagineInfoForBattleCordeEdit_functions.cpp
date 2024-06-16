#pragma once

 

// Package: PassiveImagineInfoForBattleCordeEdit

#include "Basic.hpp"

#include "PassiveImagineInfoForBattleCordeEdit_classes.hpp"
#include "PassiveImagineInfoForBattleCordeEdit_parameters.hpp"


namespace SDK
{

// Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoForBattleCordeEdit_C::ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleCordeEdit_C", "ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit");

	Params::PassiveImagineInfoForBattleCordeEdit_C_ExecuteUbergraph_PassiveImagineInfoForBattleCordeEdit Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveImagineInfoForBattleCordeEdit_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleCordeEdit_C", "PreConstruct");

	Params::PassiveImagineInfoForBattleCordeEdit_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.CreatePassiveImagineIconBtnList
// (Public, BlueprintCallable, BlueprintEvent)

void UPassiveImagineInfoForBattleCordeEdit_C::CreatePassiveImagineIconBtnList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleCordeEdit_C", "CreatePassiveImagineIconBtnList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.GetPassiveImagineIconBtn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C*OutImagineIconBtn                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoForBattleCordeEdit_C::GetPassiveImagineIconBtn(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* OutIsValid, class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C** OutImagineIconBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleCordeEdit_C", "GetPassiveImagineIconBtn");

	Params::PassiveImagineInfoForBattleCordeEdit_C_GetPassiveImagineIconBtn Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutImagineIconBtn != nullptr)
		*OutImagineIconBtn = Parms.OutImagineIconBtn;
}


// Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.Setup
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   InPassiveImagineUniqueIds                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    InSetupByCurrEquip                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoForBattleCordeEdit_C::Setup(TArray<class FString>& InPassiveImagineUniqueIds, bool InSetupByCurrEquip, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleCordeEdit_C", "Setup");

	Params::PassiveImagineInfoForBattleCordeEdit_C_Setup Parms{};

	Parms.InPassiveImagineUniqueIds = std::move(InPassiveImagineUniqueIds);
	Parms.InSetupByCurrEquip = InSetupByCurrEquip;
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);

	InPassiveImagineUniqueIds = std::move(Parms.InPassiveImagineUniqueIds);
}


// Function PassiveImagineInfoForBattleCordeEdit.PassiveImagineInfoForBattleCordeEdit_C.SetStorageMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsStorageMode                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveImagineInfoForBattleCordeEdit_C::SetStorageMode(bool InIsStorageMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleCordeEdit_C", "SetStorageMode");

	Params::PassiveImagineInfoForBattleCordeEdit_C_SetStorageMode Parms{};

	Parms.InIsStorageMode = InIsStorageMode;

	UObject::ProcessEvent(Func, &Parms);
}

}


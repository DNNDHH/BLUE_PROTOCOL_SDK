#pragma once

 

// Package: PassiveImagineInfoForBattleSetTop

#include "Basic.hpp"

#include "PassiveImagineInfoForBattleSetTop_classes.hpp"
#include "PassiveImagineInfoForBattleSetTop_parameters.hpp"


namespace SDK
{

// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InInnerImagineSlotType                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InImagineId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoForBattleSetTop_C::OnIconBtnPressed__DelegateSignature(ESBPlayerPassiveImagineSlotType InInnerImagineSlotType, int32 InImagineId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "OnIconBtnPressed__DelegateSignature");

	Params::PassiveImagineInfoForBattleSetTop_C_OnIconBtnPressed__DelegateSignature Parms{};

	Parms.InInnerImagineSlotType = InInnerImagineSlotType;
	Parms.InImagineId = InImagineId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.ExecuteUbergraph_PassiveImagineInfoForBattleSetTop
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoForBattleSetTop_C::ExecuteUbergraph_PassiveImagineInfoForBattleSetTop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "ExecuteUbergraph_PassiveImagineInfoForBattleSetTop");

	Params::PassiveImagineInfoForBattleSetTop_C_ExecuteUbergraph_PassiveImagineInfoForBattleSetTop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPassiveImagineInfoForBattleSetTop_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.OnIconBtnClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPassiveImagineItemId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoForBattleSetTop_C::OnIconBtnClicked(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "OnIconBtnClicked");

	Params::PassiveImagineInfoForBattleSetTop_C_OnIconBtnClicked Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;
	Parms.InPassiveImagineItemId = InPassiveImagineItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPassiveImagineInfoForBattleSetTop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveImagineInfoForBattleSetTop_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "PreConstruct");

	Params::PassiveImagineInfoForBattleSetTop_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.CreatePassiveImagineIconBtnList
// (Public, BlueprintCallable, BlueprintEvent)

void UPassiveImagineInfoForBattleSetTop_C::CreatePassiveImagineIconBtnList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "CreatePassiveImagineIconBtnList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineIconBtn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    OutIsValid                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C*OutImagineIconBtn                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoForBattleSetTop_C::GetPassiveImagineIconBtn(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* OutIsValid, class UMyCharaMenu_PassiveImagineIconBtnForBattleSet_C** OutImagineIconBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "GetPassiveImagineIconBtn");

	Params::PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineIconBtn Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;

	UObject::ProcessEvent(Func, &Parms);

	if (OutIsValid != nullptr)
		*OutIsValid = Parms.OutIsValid;

	if (OutImagineIconBtn != nullptr)
		*OutImagineIconBtn = Parms.OutImagineIconBtn;
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.SetupPassiveImagineIconBtnList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPassiveImagineInfoForBattleSetTop_C::SetupPassiveImagineIconBtnList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "SetupPassiveImagineIconBtnList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassiveImagineInfoForBattleSetTop.PassiveImagineInfoForBattleSetTop_C.GetPassiveImagineInfoUnit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPassiveImagineInfoUnitForBattleSet_C*OutImagineInfoUnit                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoForBattleSetTop_C::GetPassiveImagineInfoUnit(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, bool* IsValid, class UPassiveImagineInfoUnitForBattleSet_C** OutImagineInfoUnit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoForBattleSetTop_C", "GetPassiveImagineInfoUnit");

	Params::PassiveImagineInfoForBattleSetTop_C_GetPassiveImagineInfoUnit Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (OutImagineInfoUnit != nullptr)
		*OutImagineInfoUnit = Parms.OutImagineInfoUnit;
}

}


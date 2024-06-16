#pragma once

 

// Package: PassiveImagineInfoUnitForBattleSet

#include "Basic.hpp"

#include "PassiveImagineInfoUnitForBattleSet_classes.hpp"
#include "PassiveImagineInfoUnitForBattleSet_parameters.hpp"


namespace SDK
{

// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.OnImagineIconBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPassiveImagineItemId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoUnitForBattleSet_C::OnImagineIconBtnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "OnImagineIconBtnClicked__DelegateSignature");

	Params::PassiveImagineInfoUnitForBattleSet_C_OnImagineIconBtnClicked__DelegateSignature Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;
	Parms.InPassiveImagineItemId = InPassiveImagineItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoUnitForBattleSet_C::ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet");

	Params::PassiveImagineInfoUnitForBattleSet_C_ExecuteUbergraph_PassiveImagineInfoUnitForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InPassiveImagineSlotType                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   InPassiveImagineItemId                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoUnitForBattleSet_C::BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(ESBPlayerPassiveImagineSlotType InPassiveImagineSlotType, int32 InPassiveImagineItemId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	Params::PassiveImagineInfoUnitForBattleSet_C_BndEvt__PassiveImagineInfoUnitForBattleSet_PassiveImagineIconBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature Parms{};

	Parms.InPassiveImagineSlotType = InPassiveImagineSlotType;
	Parms.InPassiveImagineItemId = InPassiveImagineItemId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveImagineInfoUnitForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "PreConstruct");

	Params::PassiveImagineInfoUnitForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetImagineSlotType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         InImagineSlotType                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoUnitForBattleSet_C::SetImagineSlotType(ESBPlayerPassiveImagineSlotType InImagineSlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "SetImagineSlotType");

	Params::PassiveImagineInfoUnitForBattleSet_C_SetImagineSlotType Parms{};

	Parms.InImagineSlotType = InImagineSlotType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.GetImagineSlotType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBPlayerPassiveImagineSlotType         OutImagineSlotType                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoUnitForBattleSet_C::GetImagineSlotType(ESBPlayerPassiveImagineSlotType* OutImagineSlotType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "GetImagineSlotType");

	Params::PassiveImagineInfoUnitForBattleSet_C_GetImagineSlotType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutImagineSlotType != nullptr)
		*OutImagineSlotType = Parms.OutImagineSlotType;
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineByOwnItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoUnitForBattleSet_C::SetPassiveImagineByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "SetPassiveImagineByOwnItemInfo");

	Params::PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineByOwnItemInfo Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconEmpty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsEmpty                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveImagineInfoUnitForBattleSet_C::SetPassiveImagineIconEmpty(bool InIsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "SetPassiveImagineIconEmpty");

	Params::PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconEmpty Parms{};

	Parms.InIsEmpty = InIsEmpty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineIconAlertVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsAlertVisible                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveImagineInfoUnitForBattleSet_C::SetPassiveImagineIconAlertVisibility(bool InIsAlertVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "SetPassiveImagineIconAlertVisibility");

	Params::PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineIconAlertVisibility Parms{};

	Parms.InIsAlertVisible = InIsAlertVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetButtonOff
// (Public, BlueprintCallable, BlueprintEvent)

void UPassiveImagineInfoUnitForBattleSet_C::SetButtonOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "SetButtonOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.ForcePassiveImagineIconLevelSyncOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInForceLevelSyncOff                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveImagineInfoUnitForBattleSet_C::ForcePassiveImagineIconLevelSyncOff(bool bInForceLevelSyncOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "ForcePassiveImagineIconLevelSyncOff");

	Params::PassiveImagineInfoUnitForBattleSet_C_ForcePassiveImagineIconLevelSyncOff Parms{};

	Parms.bInForceLevelSyncOff = bInForceLevelSyncOff;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetDhcBattleTopMenuMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InIsDhcBattleTopMenuMode                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassiveImagineInfoUnitForBattleSet_C::SetDhcBattleTopMenuMode(bool InIsDhcBattleTopMenuMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "SetDhcBattleTopMenuMode");

	Params::PassiveImagineInfoUnitForBattleSet_C_SetDhcBattleTopMenuMode Parms{};

	Parms.InIsDhcBattleTopMenuMode = InIsDhcBattleTopMenuMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PassiveImagineInfoUnitForBattleSet.PassiveImagineInfoUnitForBattleSet_C.SetPassiveImagineForDhcBattle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBDhcBattlePlayerEquipImagineInfoInImagineInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// ESBClassType                            InClassType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassiveImagineInfoUnitForBattleSet_C::SetPassiveImagineForDhcBattle(const struct FSBDhcBattlePlayerEquipImagineInfo& InImagineInfo, const struct FOwnItemInfo& InOwnItemInfo, ESBClassType InClassType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PassiveImagineInfoUnitForBattleSet_C", "SetPassiveImagineForDhcBattle");

	Params::PassiveImagineInfoUnitForBattleSet_C_SetPassiveImagineForDhcBattle Parms{};

	Parms.InImagineInfo = std::move(InImagineInfo);
	Parms.InOwnItemInfo = std::move(InOwnItemInfo);
	Parms.InClassType = InClassType;

	UObject::ProcessEvent(Func, &Parms);
}

}


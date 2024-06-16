#pragma once

 

// Package: StatusTypeSwitchBtnForBattleSet

#include "Basic.hpp"

#include "StatusTypeSwitchBtnForBattleSet_classes.hpp"
#include "StatusTypeSwitchBtnForBattleSet_parameters.hpp"


namespace SDK
{

// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.OnSwitchBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InPressedSwitchBtnId                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusTypeSwitchBtnForBattleSet_C::OnSwitchBtnPressed__DelegateSignature(int32 InPressedSwitchBtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusTypeSwitchBtnForBattleSet_C", "OnSwitchBtnPressed__DelegateSignature");

	Params::StatusTypeSwitchBtnForBattleSet_C_OnSwitchBtnPressed__DelegateSignature Parms{};

	Parms.InPressedSwitchBtnId = InPressedSwitchBtnId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusTypeSwitchBtnForBattleSet_C::ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusTypeSwitchBtnForBattleSet_C", "ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet");

	Params::StatusTypeSwitchBtnForBattleSet_C_ExecuteUbergraph_StatusTypeSwitchBtnForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn2_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UStatusTypeSwitchBtnForBattleSet_C::BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn2_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusTypeSwitchBtnForBattleSet_C", "BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn2_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UStatusTypeSwitchBtnForBattleSet_C::BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusTypeSwitchBtnForBattleSet_C", "BndEvt__MyCharaMenu_StatusTypeSwitchBtn_SwitchBtn1_K2Node_ComponentBoundEvent_0_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusTypeSwitchBtnForBattleSet_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusTypeSwitchBtnForBattleSet_C", "PreConstruct");

	Params::StatusTypeSwitchBtnForBattleSet_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.SetInfoType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InInfoType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusTypeSwitchBtnForBattleSet_C::SetInfoType(E_BattleSetInfoType InInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusTypeSwitchBtnForBattleSet_C", "SetInfoType");

	Params::StatusTypeSwitchBtnForBattleSet_C_SetInfoType Parms{};

	Parms.InInfoType = InInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function StatusTypeSwitchBtnForBattleSet.StatusTypeSwitchBtnForBattleSet_C.SetSelectedSwitchBtn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InSelectedSwitchBtnId                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatusTypeSwitchBtnForBattleSet_C::SetSelectedSwitchBtn(int32 InSelectedSwitchBtnId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatusTypeSwitchBtnForBattleSet_C", "SetSelectedSwitchBtn");

	Params::StatusTypeSwitchBtnForBattleSet_C_SetSelectedSwitchBtn Parms{};

	Parms.InSelectedSwitchBtnId = InSelectedSwitchBtnId;

	UObject::ProcessEvent(Func, &Parms);
}

}


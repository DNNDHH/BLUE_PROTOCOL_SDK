#pragma once

 

// Package: WeaponInfoForBattleSetTop

#include "Basic.hpp"

#include "WeaponInfoForBattleSetTop_classes.hpp"
#include "WeaponInfoForBattleSetTop_parameters.hpp"


namespace SDK
{

// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.OnWeaponIconClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWeaponInfoForBattleSetTop_C::OnWeaponIconClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleSetTop_C", "OnWeaponIconClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.ExecuteUbergraph_WeaponInfoForBattleSetTop
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInfoForBattleSetTop_C::ExecuteUbergraph_WeaponInfoForBattleSetTop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleSetTop_C", "ExecuteUbergraph_WeaponInfoForBattleSetTop");

	Params::WeaponInfoForBattleSetTop_C_ExecuteUbergraph_WeaponInfoForBattleSetTop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWeaponInfoForBattleSetTop_C::BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature(class UItemIconBtn_C* SelectItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleSetTop_C", "BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature");

	Params::WeaponInfoForBattleSetTop_C_BndEvt__ItemIconBtn_141_K2Node_ComponentBoundEvent_2_OnSelect__DelegateSignature Parms{};

	Parms.SelectItem = SelectItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWeaponInfoForBattleSetTop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleSetTop_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWeaponInfoForBattleSetTop_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleSetTop_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WeaponInfoForBattleSetTop.WeaponInfoForBattleSetTop_C.SetStackBIconByOwnItemInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOwnItemInfo                     InOwnItemInfo                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWeaponInfoForBattleSetTop_C::SetStackBIconByOwnItemInfo(const struct FOwnItemInfo& InOwnItemInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WeaponInfoForBattleSetTop_C", "SetStackBIconByOwnItemInfo");

	Params::WeaponInfoForBattleSetTop_C_SetStackBIconByOwnItemInfo Parms{};

	Parms.InOwnItemInfo = std::move(InOwnItemInfo);

	UObject::ProcessEvent(Func, &Parms);
}

}


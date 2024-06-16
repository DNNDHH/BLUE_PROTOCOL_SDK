#pragma once

 

// Package: BattleCordeSetHeadingForBattleSet

#include "Basic.hpp"

#include "BattleCordeSetHeadingForBattleSet_classes.hpp"
#include "BattleCordeSetHeadingForBattleSet_parameters.hpp"


namespace SDK
{

// Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.OnAdminOrEditBtnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBattleCordeSetHeadingForBattleSet_C::OnAdminOrEditBtnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeSetHeadingForBattleSet_C", "OnAdminOrEditBtnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.ExecuteUbergraph_BattleCordeSetHeadingForBattleSet
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattleCordeSetHeadingForBattleSet_C::ExecuteUbergraph_BattleCordeSetHeadingForBattleSet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeSetHeadingForBattleSet_C", "ExecuteUbergraph_BattleCordeSetHeadingForBattleSet");

	Params::BattleCordeSetHeadingForBattleSet_C_ExecuteUbergraph_BattleCordeSetHeadingForBattleSet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.BndEvt__BattleCordeSetHeadingForBattleSet_AdminOrEditBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UBattleCordeSetHeadingForBattleSet_C::BndEvt__BattleCordeSetHeadingForBattleSet_AdminOrEditBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeSetHeadingForBattleSet_C", "BndEvt__BattleCordeSetHeadingForBattleSet_AdminOrEditBtn_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BattleCordeSetHeadingForBattleSet.BattleCordeSetHeadingForBattleSet_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattleCordeSetHeadingForBattleSet_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BattleCordeSetHeadingForBattleSet_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


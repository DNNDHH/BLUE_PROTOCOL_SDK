#pragma once

 

// Package: LeftSideParametersForBattleSetSecondLevel

#include "Basic.hpp"

#include "LeftSideParametersForBattleSetSecondLevel_classes.hpp"
#include "LeftSideParametersForBattleSetSecondLevel_parameters.hpp"


namespace SDK
{

// Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.OnDetailStatusBtnClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULeftSideParametersForBattleSetSecondLevel_C::OnDetailStatusBtnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeftSideParametersForBattleSetSecondLevel_C", "OnDetailStatusBtnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeftSideParametersForBattleSetSecondLevel_C::ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeftSideParametersForBattleSetSecondLevel_C", "ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel");

	Params::LeftSideParametersForBattleSetSecondLevel_C_ExecuteUbergraph_LeftSideParametersForBattleSetSecondLevel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature
// (BlueprintEvent)

void ULeftSideParametersForBattleSetSecondLevel_C::BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeftSideParametersForBattleSetSecondLevel_C", "BndEvt__LeftSideParametersForBattleSetSecondLevel_LeftSideParametersBody_K2Node_ComponentBoundEvent_0_OnDetailedStatusClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.SetBattleSetInfoType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_BattleSetInfoType                     InBattleSetInfoType                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeftSideParametersForBattleSetSecondLevel_C::SetBattleSetInfoType(E_BattleSetInfoType InBattleSetInfoType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeftSideParametersForBattleSetSecondLevel_C", "SetBattleSetInfoType");

	Params::LeftSideParametersForBattleSetSecondLevel_C_SetBattleSetInfoType Parms{};

	Parms.InBattleSetInfoType = InBattleSetInfoType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LeftSideParametersForBattleSetSecondLevel.LeftSideParametersForBattleSetSecondLevel_C.GetLeftSideParameters
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMyCharaMenu_LeftSideParameters_C*OutLeftSideParameters                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULeftSideParametersForBattleSetSecondLevel_C::GetLeftSideParameters(class UMyCharaMenu_LeftSideParameters_C** OutLeftSideParameters)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LeftSideParametersForBattleSetSecondLevel_C", "GetLeftSideParameters");

	Params::LeftSideParametersForBattleSetSecondLevel_C_GetLeftSideParameters Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutLeftSideParameters != nullptr)
		*OutLeftSideParameters = Parms.OutLeftSideParameters;
}

}


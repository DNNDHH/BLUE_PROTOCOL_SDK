#pragma once

 

// Package: Fang_expedition_StatusWindow

#include "Basic.hpp"

#include "Fang_expedition_StatusWindow_classes.hpp"
#include "Fang_expedition_StatusWindow_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.OnPressPlayListOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_StatusWindow_C::OnPressPlayListOpen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusWindow_C", "OnPressPlayListOpen__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.ExecuteUbergraph_Fang_expedition_StatusWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_StatusWindow_C::ExecuteUbergraph_Fang_expedition_StatusWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusWindow_C", "ExecuteUbergraph_Fang_expedition_StatusWindow");

	Params::Fang_expedition_StatusWindow_C_ExecuteUbergraph_Fang_expedition_StatusWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.BndEvt__Fang_expedition_StatusWindow_SBButton_C_277_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_StatusWindow_C::BndEvt__Fang_expedition_StatusWindow_SBButton_C_277_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusWindow_C", "BndEvt__Fang_expedition_StatusWindow_SBButton_C_277_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_StatusWindow.Fang_expedition_StatusWindow_C.SetData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionData           ExpeditionData                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_StatusWindow_C::SetData(struct FSBFang_expeditionData& ExpeditionData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_StatusWindow_C", "SetData");

	Params::Fang_expedition_StatusWindow_C_SetData Parms{};

	Parms.ExpeditionData = std::move(ExpeditionData);

	UObject::ProcessEvent(Func, &Parms);

	ExpeditionData = std::move(Parms.ExpeditionData);
}

}


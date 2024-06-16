#pragma once

 

// Package: Fang_expedition_DetailItemListPagePoint

#include "Basic.hpp"

#include "Fang_expedition_DetailItemListPagePoint_classes.hpp"
#include "Fang_expedition_DetailItemListPagePoint_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.OnButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemListPagePoint_C::OnButtonClicked__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemListPagePoint_C", "OnButtonClicked__DelegateSignature");

	Params::Fang_expedition_DetailItemListPagePoint_C_OnButtonClicked__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DetailItemListPagePoint_C::ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemListPagePoint_C", "ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint");

	Params::Fang_expedition_DetailItemListPagePoint_C_ExecuteUbergraph_Fang_expedition_DetailItemListPagePoint Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.BndEvt__Fang_expedition_DetailItemListPagePoint_SBButton_C_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DetailItemListPagePoint_C::BndEvt__Fang_expedition_DetailItemListPagePoint_SBButton_C_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemListPagePoint_C", "BndEvt__Fang_expedition_DetailItemListPagePoint_SBButton_C_88_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DetailItemListPagePoint.Fang_expedition_DetailItemListPagePoint_C.SetActive
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DetailItemListPagePoint_C::SetActive(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DetailItemListPagePoint_C", "SetActive");

	Params::Fang_expedition_DetailItemListPagePoint_C_SetActive Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}

}


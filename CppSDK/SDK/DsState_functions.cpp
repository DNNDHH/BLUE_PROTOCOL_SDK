#pragma once

 

// Package: DsState

#include "Basic.hpp"

#include "DsState_classes.hpp"
#include "DsState_parameters.hpp"


namespace SDK
{

// Function DsState.DsState_C.ExecuteUbergraph_DsState
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDsState_C::ExecuteUbergraph_DsState(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "ExecuteUbergraph_DsState");

	Params::DsState_C_ExecuteUbergraph_DsState Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DsState.DsState_C.WidgetAnimationEvt_AnimCountDown_K2Node_WidgetAnimationEvent_2
// (BlueprintEvent)

void UDsState_C::WidgetAnimationEvt_AnimCountDown_K2Node_WidgetAnimationEvent_2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "WidgetAnimationEvt_AnimCountDown_K2Node_WidgetAnimationEvent_2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DsState.DsState_C.WidgetAnimationEvt_AnimCountDownPinch_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UDsState_C::WidgetAnimationEvt_AnimCountDownPinch_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "WidgetAnimationEvt_AnimCountDownPinch_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DsState.DsState_C.OnChangeEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDsState_C::OnChangeEffect(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "OnChangeEffect");

	Params::DsState_C_OnChangeEffect Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DsState.DsState_C.OnSetCount
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                                   Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDsState_C::OnSetCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "OnSetCount");

	Params::DsState_C_OnSetCount Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DsState.DsState_C.OnHide
// (Event, Public, BlueprintEvent)

void UDsState_C::OnHide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "OnHide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DsState.DsState_C.OnShow
// (Event, Public, BlueprintEvent)

void UDsState_C::OnShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "OnShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DsState.DsState_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 Animation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDsState_C::OnAnimationFinished(const class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "OnAnimationFinished");

	Params::DsState_C_OnAnimationFinished Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DsState.DsState_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UDsState_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DsState.DsState_C.Show
// (Public, BlueprintCallable, BlueprintEvent)

void UDsState_C::Show()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "Show");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DsState.DsState_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UDsState_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DsState.DsState_C.SetCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   InCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDsState_C::SetCount(int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DsState_C", "SetCount");

	Params::DsState_C_SetCount Parms{};

	Parms.InCount = InCount;

	UObject::ProcessEvent(Func, &Parms);
}

}


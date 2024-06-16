#pragma once

 

// Package: Fang_expedition_AreaListSelectWindow

#include "Basic.hpp"

#include "Fang_expedition_AreaListSelectWindow_classes.hpp"
#include "Fang_expedition_AreaListSelectWindow_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnListItemClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListSelectWindow_C::OnListItemClick__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "OnListItemClick__DelegateSignature");

	Params::Fang_expedition_AreaListSelectWindow_C_OnListItemClick__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.OnCloseButtonClick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaListSelectWindow_C::OnCloseButtonClick__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "OnCloseButtonClick__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.ExecuteUbergraph_Fang_expedition_AreaListSelectWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListSelectWindow_C::ExecuteUbergraph_Fang_expedition_AreaListSelectWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "ExecuteUbergraph_Fang_expedition_AreaListSelectWindow");

	Params::Fang_expedition_AreaListSelectWindow_C_ExecuteUbergraph_Fang_expedition_AreaListSelectWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_AreaListSelectWindow_C::BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "BndEvt__Fang_expedition_AreaListSelectWindow_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_AreaListSelectWindow_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.AddData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_AreaListSelectWindow_C::AddData(const struct FSBFang_expeditionAreaData& AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "AddData");

	Params::Fang_expedition_AreaListSelectWindow_C_AddData Parms{};

	Parms.AreaData = std::move(AreaData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.CB_OnClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_AreaListSelectWindow_C::CB_OnClick(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "CB_OnClick");

	Params::Fang_expedition_AreaListSelectWindow_C_CB_OnClick Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.GetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionAreaData       AreaData                                               (Parm, OutParm)

void UFang_expedition_AreaListSelectWindow_C::GetData(int32 Param_Index, struct FSBFang_expeditionAreaData* AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "GetData");

	Params::Fang_expedition_AreaListSelectWindow_C_GetData Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (AreaData != nullptr)
		*AreaData = std::move(Parms.AreaData);
}


// Function Fang_expedition_AreaListSelectWindow.Fang_expedition_AreaListSelectWindow_C.SetStatus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBFang_expeditionStatus                Status                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    New                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_AreaListSelectWindow_C::SetStatus(ESBFang_expeditionStatus Status, bool Time, bool New)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_AreaListSelectWindow_C", "SetStatus");

	Params::Fang_expedition_AreaListSelectWindow_C_SetStatus Parms{};

	Parms.Status = Status;
	Parms.Time = Time;
	Parms.New = New;

	UObject::ProcessEvent(Func, &Parms);
}

}


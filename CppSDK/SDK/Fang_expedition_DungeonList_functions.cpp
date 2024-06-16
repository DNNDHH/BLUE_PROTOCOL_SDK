#pragma once

 

// Package: Fang_expedition_DungeonList

#include "Basic.hpp"

#include "Fang_expedition_DungeonList_classes.hpp"
#include "Fang_expedition_DungeonList_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnDungeonAreaSelect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DungeonList_C::OnDungeonAreaSelect__DelegateSignature(int32 Param_Index, const struct FSBFang_expeditionAreaData& AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonList_C", "OnDungeonAreaSelect__DelegateSignature");

	Params::Fang_expedition_DungeonList_C_OnDungeonAreaSelect__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;
	Parms.AreaData = std::move(AreaData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.OnCloseButtonPress__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonList_C::OnCloseButtonPress__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonList_C", "OnCloseButtonPress__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ExecuteUbergraph_Fang_expedition_DungeonList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonList_C::ExecuteUbergraph_Fang_expedition_DungeonList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonList_C", "ExecuteUbergraph_Fang_expedition_DungeonList");

	Params::Fang_expedition_DungeonList_C_ExecuteUbergraph_Fang_expedition_DungeonList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_DungeonList_C::BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonList_C", "BndEvt__Fang_expedition_DungeonList_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.SetData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionAreaData       AreaData                                               (BlueprintVisible, BlueprintReadOnly, Parm)

void UFang_expedition_DungeonList_C::SetData(const struct FSBFang_expeditionAreaData& AreaData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonList_C", "SetData");

	Params::Fang_expedition_DungeonList_C_SetData Parms{};

	Parms.AreaData = std::move(AreaData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_DungeonList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonList_C", "Clear");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.CB_ItemSelect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_DungeonList_C::CB_ItemSelect(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonList_C", "CB_ItemSelect");

	Params::Fang_expedition_DungeonList_C_CB_ItemSelect Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_DungeonList.Fang_expedition_DungeonList_C.ShowEmptyText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InParam                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_DungeonList_C::ShowEmptyText(bool InParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_DungeonList_C", "ShowEmptyText");

	Params::Fang_expedition_DungeonList_C_ShowEmptyText Parms{};

	Parms.InParam = InParam;

	UObject::ProcessEvent(Func, &Parms);
}

}


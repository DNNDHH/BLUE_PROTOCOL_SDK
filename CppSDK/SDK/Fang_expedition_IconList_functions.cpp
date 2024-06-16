#pragma once

 

// Package: Fang_expedition_IconList

#include "Basic.hpp"

#include "Fang_expedition_IconList_classes.hpp"
#include "Fang_expedition_IconList_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_IconList.Fang_expedition_IconList_C.OnFangSelectChange__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   UniqueIds                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_IconList_C::OnFangSelectChange__DelegateSignature(TArray<class FString>& UniqueIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "OnFangSelectChange__DelegateSignature");

	Params::Fang_expedition_IconList_C_OnFangSelectChange__DelegateSignature Parms{};

	Parms.UniqueIds = std::move(UniqueIds);

	UObject::ProcessEvent(Func, &Parms);

	UniqueIds = std::move(Parms.UniqueIds);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.ExecuteUbergraph_Fang_expedition_IconList
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_IconList_C::ExecuteUbergraph_Fang_expedition_IconList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "ExecuteUbergraph_Fang_expedition_IconList");

	Params::Fang_expedition_IconList_C_ExecuteUbergraph_Fang_expedition_IconList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature
// (BlueprintEvent)

void UFang_expedition_IconList_C::BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "BndEvt__Fang_expedition_IconList_ResetButton1_K2Node_ComponentBoundEvent_1_EventOnClicked__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_IconList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.UnBindEvent
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_IconList_C::UnBindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "UnBindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.BindEvent
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_IconList_C::BindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "BindEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_IconList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MaxFangCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Reset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_IconList_C::InitFangList(int32 MaxFangCount, bool Reset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "InitFangList");

	Params::Fang_expedition_IconList_C_InitFangList Parms{};

	Parms.MaxFangCount = MaxFangCount;
	Parms.Reset = Reset;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_OnIconSelect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemIconBtn_C*                   SelectIconBtn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_IconList_C::CB_OnIconSelect(class UItemIconBtn_C* SelectIconBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "CB_OnIconSelect");

	Params::Fang_expedition_IconList_C_CB_OnIconSelect Parms{};

	Parms.SelectIconBtn = SelectIconBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.ClearIconData
// (Public, BlueprintCallable, BlueprintEvent)

void UFang_expedition_IconList_C::ClearIconData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "ClearIconData");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.UpdateIconVisibleStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_IconList_C::UpdateIconVisibleStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "UpdateIconVisibleStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.CallFangSelectChange
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFang_expedition_IconList_C::CallFangSelectChange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "CallFangSelectChange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_FilterChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFilterGroup>             Filter                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_IconList_C::CB_FilterChange(TArray<struct FFilterGroup>& Filter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "CB_FilterChange");

	Params::Fang_expedition_IconList_C_CB_FilterChange Parms{};

	Parms.Filter = std::move(Filter);

	UObject::ProcessEvent(Func, &Parms);

	Filter = std::move(Parms.Filter);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.CB_SortChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESBItemSortType                         Param_SortType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_IconList_C::CB_SortChange(ESBItemSortType Param_SortType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "CB_SortChange");

	Params::Fang_expedition_IconList_C_CB_SortChange Parms{};

	Parms.Param_SortType = Param_SortType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.InitFangList_UniqueId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MaxFangCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_IconList_C::InitFangList_UniqueId(int32 MaxFangCount, TArray<class FString>& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "InitFangList_UniqueId");

	Params::Fang_expedition_IconList_C_InitFangList_UniqueId Parms{};

	Parms.MaxFangCount = MaxFangCount;
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);

	UniqueId = std::move(Parms.UniqueId);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.SetIconSelectLog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    On                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_IconList_C::SetIconSelectLog(bool On)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "SetIconSelectLog");

	Params::Fang_expedition_IconList_C_SetIconSelectLog Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_IconList.Fang_expedition_IconList_C.IsActiveSelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Select                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    Active                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFang_expedition_IconList_C::IsActiveSelect(bool Select, bool* Active)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_IconList_C", "IsActiveSelect");

	Params::Fang_expedition_IconList_C_IsActiveSelect Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

	if (Active != nullptr)
		*Active = Parms.Active;
}

}


#pragma once

 

// Package: Fang_expedition_PlayListWindow

#include "Basic.hpp"

#include "Fang_expedition_PlayListWindow_classes.hpp"
#include "Fang_expedition_PlayListWindow_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnSelectPlayListSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListWindow_C::OnSelectPlayListSlot__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "OnSelectPlayListSlot__DelegateSignature");

	Params::Fang_expedition_PlayListWindow_C_OnSelectPlayListSlot__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnPressDetailButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListWindow_C::OnPressDetailButton__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "OnPressDetailButton__DelegateSignature");

	Params::Fang_expedition_PlayListWindow_C_OnPressDetailButton__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.OnPressFinishButton__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListWindow_C::OnPressFinishButton__DelegateSignature(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "OnPressFinishButton__DelegateSignature");

	Params::Fang_expedition_PlayListWindow_C_OnPressFinishButton__DelegateSignature Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.ExecuteUbergraph_Fang_expedition_PlayListWindow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListWindow_C::ExecuteUbergraph_Fang_expedition_PlayListWindow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "ExecuteUbergraph_Fang_expedition_PlayListWindow");

	Params::Fang_expedition_PlayListWindow_C_ExecuteUbergraph_Fang_expedition_PlayListWindow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_PlayListWindow_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.CB_OnPressFinishButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListWindow_C::CB_OnPressFinishButton(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "CB_OnPressFinishButton");

	Params::Fang_expedition_PlayListWindow_C_CB_OnPressFinishButton Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.CB_OnPressDetailButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_PlayListWindow_C::CB_OnPressDetailButton(int32 Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "CB_OnPressDetailButton");

	Params::Fang_expedition_PlayListWindow_C_CB_OnPressDetailButton Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_PlayListWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_PlayListWindow.Fang_expedition_PlayListWindow_C.SetData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSBFang_expeditionData           ExpeditionData                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_PlayListWindow_C::SetData(struct FSBFang_expeditionData& ExpeditionData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_PlayListWindow_C", "SetData");

	Params::Fang_expedition_PlayListWindow_C_SetData Parms{};

	Parms.ExpeditionData = std::move(ExpeditionData);

	UObject::ProcessEvent(Func, &Parms);

	ExpeditionData = std::move(Parms.ExpeditionData);
}

}


#pragma once

 

// Package: Fang_expedition_FangSelect

#include "Basic.hpp"

#include "Fang_expedition_FangSelect_classes.hpp"
#include "Fang_expedition_FangSelect_parameters.hpp"


namespace SDK
{

// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.OnFangSelectChange__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_FangSelect_C::OnFangSelectChange__DelegateSignature(TArray<class FString>& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "OnFangSelectChange__DelegateSignature");

	Params::Fang_expedition_FangSelect_C_OnFangSelectChange__DelegateSignature Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);

	UniqueId = std::move(Parms.UniqueId);
}


// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.ExecuteUbergraph_Fang_expedition_FangSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_FangSelect_C::ExecuteUbergraph_Fang_expedition_FangSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "ExecuteUbergraph_Fang_expedition_FangSelect");

	Params::Fang_expedition_FangSelect_C_ExecuteUbergraph_Fang_expedition_FangSelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_FangSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.UnbindFunction
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_FangSelect_C::UnbindFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "UnbindFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.BindFunction
// (BlueprintCallable, BlueprintEvent)

void UFang_expedition_FangSelect_C::BindFunction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "BindFunction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFang_expedition_FangSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FangCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFang_expedition_FangSelect_C::InitFangList(int32 FangCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "InitFangList");

	Params::Fang_expedition_FangSelect_C_InitFangList Parms{};

	Parms.FangCount = FangCount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.InitFangList_UniqueId
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FangCount                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>                   UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_FangSelect_C::InitFangList_UniqueId(int32 FangCount, TArray<class FString>& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "InitFangList_UniqueId");

	Params::Fang_expedition_FangSelect_C_InitFangList_UniqueId Parms{};

	Parms.FangCount = FangCount;
	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);

	UniqueId = std::move(Parms.UniqueId);
}


// Function Fang_expedition_FangSelect.Fang_expedition_FangSelect_C.CB_FangSelectChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>                   UniqueId                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UFang_expedition_FangSelect_C::CB_FangSelectChange(TArray<class FString>& UniqueId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fang_expedition_FangSelect_C", "CB_FangSelectChange");

	Params::Fang_expedition_FangSelect_C_CB_FangSelectChange Parms{};

	Parms.UniqueId = std::move(UniqueId);

	UObject::ProcessEvent(Func, &Parms);

	UniqueId = std::move(Parms.UniqueId);
}

}


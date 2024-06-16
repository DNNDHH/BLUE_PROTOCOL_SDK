#pragma once

 

// Package: Fishing_Wait

#include "Basic.hpp"

#include "Fishing_Wait_classes.hpp"
#include "Fishing_Wait_parameters.hpp"


namespace SDK
{

// Function Fishing_Wait.Fishing_Wait_C.ExitFinshing__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UFishing_Wait_C::ExitFinshing__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "ExitFinshing__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Wait.Fishing_Wait_C.ExecuteUbergraph_Fishing_Wait
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Wait_C::ExecuteUbergraph_Fishing_Wait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "ExecuteUbergraph_Fishing_Wait");

	Params::Fishing_Wait_C_ExecuteUbergraph_Fishing_Wait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Wait.Fishing_Wait_C.BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)

void UFishing_Wait_C::BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "BndEvt__Fishing_Wait_BtnShowHint_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Wait.Fishing_Wait_C.Warning_BackPackIsFull
// (BlueprintCallable, BlueprintEvent)

void UFishing_Wait_C::Warning_BackPackIsFull()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "Warning_BackPackIsFull");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Wait.Fishing_Wait_C.DialogAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EDialogResult                           Result                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFishing_Wait_C::DialogAction(EDialogResult Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "DialogAction");

	Params::Fishing_Wait_C_DialogAction Parms{};

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Fishing_Wait.Fishing_Wait_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFishing_Wait_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Wait.Fishing_Wait_C.CheckBackPack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Wait_C::CheckBackPack(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "CheckBackPack");

	Params::Fishing_Wait_C_CheckBackPack Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}


// Function Fishing_Wait.Fishing_Wait_C.Init
// (Public, BlueprintCallable, BlueprintEvent)

void UFishing_Wait_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Fishing_Wait.Fishing_Wait_C.CheckFirstOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ret                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFishing_Wait_C::CheckFirstOpen(bool* Ret)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Fishing_Wait_C", "CheckFirstOpen");

	Params::Fishing_Wait_C_CheckFirstOpen Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Ret != nullptr)
		*Ret = Parms.Ret;
}

}


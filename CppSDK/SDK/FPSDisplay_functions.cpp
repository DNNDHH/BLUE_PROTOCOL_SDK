#pragma once

 

// Package: FPSDisplay

#include "Basic.hpp"

#include "FPSDisplay_classes.hpp"
#include "FPSDisplay_parameters.hpp"


namespace SDK
{

// Function FPSDisplay.FPSDisplay_C.ExecuteUbergraph_FPSDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFPSDisplay_C::ExecuteUbergraph_FPSDisplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPSDisplay_C", "ExecuteUbergraph_FPSDisplay");

	Params::FPSDisplay_C_ExecuteUbergraph_FPSDisplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FPSDisplay.FPSDisplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFPSDisplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPSDisplay_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FPSDisplay.FPSDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UFPSDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPSDisplay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FPSDisplay.FPSDisplay_C.ChangeFPSShow
// (BlueprintCallable, BlueprintEvent)

void UFPSDisplay_C::ChangeFPSShow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPSDisplay_C", "ChangeFPSShow");

	UObject::ProcessEvent(Func, nullptr);
}


// Function FPSDisplay.FPSDisplay_C.SetEditMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EditMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFPSDisplay_C::SetEditMode(bool EditMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPSDisplay_C", "SetEditMode");

	Params::FPSDisplay_C_SetEditMode Parms{};

	Parms.EditMode = EditMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FPSDisplay.FPSDisplay_C.Set Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_bShow                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFPSDisplay_C::Set_Show(bool Param_bShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPSDisplay_C", "Set Show");

	Params::FPSDisplay_C_Set_Show Parms{};

	Parms.Param_bShow = Param_bShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FPSDisplay.FPSDisplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFPSDisplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPSDisplay_C", "Tick");

	Params::FPSDisplay_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function FPSDisplay.FPSDisplay_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UFPSDisplay_C::GetText_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("FPSDisplay_C", "GetText_0");

	Params::FPSDisplay_C_GetText_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


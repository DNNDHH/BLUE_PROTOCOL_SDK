#pragma once

 

// Package: ScriptFastForwardWidget

#include "Basic.hpp"

#include "ScriptFastForwardWidget_classes.hpp"
#include "ScriptFastForwardWidget_parameters.hpp"


namespace SDK
{

// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.ExecuteUbergraph_ScriptFastForwardWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScriptFastForwardWidget_C::ExecuteUbergraph_ScriptFastForwardWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFastForwardWidget_C", "ExecuteUbergraph_ScriptFastForwardWidget");

	Params::ScriptFastForwardWidget_C_ExecuteUbergraph_ScriptFastForwardWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScriptFastForwardWidget_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFastForwardWidget_C", "Tick");

	Params::ScriptFastForwardWidget_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScriptFastForwardWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFastForwardWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.SetFastForwardStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UScriptFastForwardWidget_C::SetFastForwardStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFastForwardWidget_C", "SetFastForwardStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ScriptFastForwardWidget.ScriptFastForwardWidget_C.IsInfoEnable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    RetFlag                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UScriptFastForwardWidget_C::IsInfoEnable(bool* RetFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScriptFastForwardWidget_C", "IsInfoEnable");

	Params::ScriptFastForwardWidget_C_IsInfoEnable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RetFlag != nullptr)
		*RetFlag = Parms.RetFlag;
}

}


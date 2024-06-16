#pragma once

 

// Package: WPB_BuffIcon

#include "Basic.hpp"

#include "WPB_BuffIcon_classes.hpp"
#include "WPB_BuffIcon_parameters.hpp"


namespace SDK
{

// Function WPB_BuffIcon.WPB_BuffIcon_C.ExecuteUbergraph_WPB_BuffIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWPB_BuffIcon_C::ExecuteUbergraph_WPB_BuffIcon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPB_BuffIcon_C", "ExecuteUbergraph_WPB_BuffIcon");

	Params::WPB_BuffIcon_C_ExecuteUbergraph_WPB_BuffIcon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPB_BuffIcon.WPB_BuffIcon_C.SetBuffIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Param_BuffName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWPB_BuffIcon_C::SetBuffIcon(class FName Param_BuffName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPB_BuffIcon_C", "SetBuffIcon");

	Params::WPB_BuffIcon_C_SetBuffIcon Parms{};

	Parms.Param_BuffName = Param_BuffName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WPB_BuffIcon.WPB_BuffIcon_C.Get_BuffIcon_1_ToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWPB_BuffIcon_C::Get_BuffIcon_1_ToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WPB_BuffIcon_C", "Get_BuffIcon_1_ToolTipWidget_0");

	Params::WPB_BuffIcon_C_Get_BuffIcon_1_ToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


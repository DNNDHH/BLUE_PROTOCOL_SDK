#pragma once

 

// Package: Effect_Active

#include "Basic.hpp"

#include "Effect_Active_classes.hpp"
#include "Effect_Active_parameters.hpp"


namespace SDK
{

// Function Effect_Active.Effect_Active_C.ExecuteUbergraph_Effect_Active
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_Active_C::ExecuteUbergraph_Effect_Active(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Active_C", "ExecuteUbergraph_Effect_Active");

	Params::Effect_Active_C_ExecuteUbergraph_Effect_Active Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Active.Effect_Active_C.SetValueVisible
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_Active_C::SetValueVisible(bool bVisible)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Active_C", "SetValueVisible");

	Params::Effect_Active_C_SetValueVisible Parms{};

	Parms.bVisible = bVisible;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Active.Effect_Active_C.SetDataByDateTIme
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FDateTime                        Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    bHideYear                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEffect_Active_C::SetDataByDateTIme(const class FString& Param_Name, const struct FDateTime& Time, bool bHideYear)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Active_C", "SetDataByDateTIme");

	Params::Effect_Active_C_SetDataByDateTIme Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Time = std::move(Time);
	Parms.bHideYear = bHideYear;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Active.Effect_Active_C.SetDataByFloatValue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEffect_Active_C::SetDataByFloatValue(const class FString& Param_Name, float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Active_C", "SetDataByFloatValue");

	Params::Effect_Active_C_SetDataByFloatValue Parms{};

	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Active.Effect_Active_C.Set Data
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Param_IsShowTooltip                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                           Param_Name                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Param_ToolTipText                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UEffect_Active_C::Set_Data(bool Param_IsShowTooltip, const class FString& Param_Name, int32 Value, const class FString& Param_ToolTipText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Active_C", "Set Data");

	Params::Effect_Active_C_Set_Data Parms{};

	Parms.Param_IsShowTooltip = Param_IsShowTooltip;
	Parms.Param_Name = std::move(Param_Name);
	Parms.Value = Value;
	Parms.Param_ToolTipText = std::move(Param_ToolTipText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Effect_Active.Effect_Active_C.GetToolTipWidget_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UEffect_Active_C::GetToolTipWidget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Effect_Active_C", "GetToolTipWidget_0");

	Params::Effect_Active_C_GetToolTipWidget_0 Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


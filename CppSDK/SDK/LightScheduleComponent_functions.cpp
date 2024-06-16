#pragma once

 

// Package: LightScheduleComponent

#include "Basic.hpp"

#include "LightScheduleComponent_classes.hpp"
#include "LightScheduleComponent_parameters.hpp"


namespace SDK
{

// Function LightScheduleComponent.LightScheduleComponent_C.LightOnEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULightScheduleComponent_C::LightOnEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "LightOnEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightScheduleComponent.LightScheduleComponent_C.LightOffEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ULightScheduleComponent_C::LightOffEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "LightOffEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightScheduleComponent.LightScheduleComponent_C.ExecuteUbergraph_LightScheduleComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightScheduleComponent_C::ExecuteUbergraph_LightScheduleComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "ExecuteUbergraph_LightScheduleComponent");

	Params::LightScheduleComponent_C_ExecuteUbergraph_LightScheduleComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LightScheduleComponent.LightScheduleComponent_C.StartTimeSchedule
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SetGameTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightScheduleComponent_C::StartTimeSchedule(int32 SetGameTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "StartTimeSchedule");

	Params::LightScheduleComponent_C_StartTimeSchedule Parms{};

	Parms.SetGameTime = SetGameTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LightScheduleComponent.LightScheduleComponent_C.UpdateTimeSchedule
// (BlueprintCallable, BlueprintEvent)

void ULightScheduleComponent_C::UpdateTimeSchedule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "UpdateTimeSchedule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightScheduleComponent.LightScheduleComponent_C.StartFadeIn
// (BlueprintCallable, BlueprintEvent)

void ULightScheduleComponent_C::StartFadeIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "StartFadeIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightScheduleComponent.LightScheduleComponent_C.StartFadeOut
// (BlueprintCallable, BlueprintEvent)

void ULightScheduleComponent_C::StartFadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "StartFadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightScheduleComponent.LightScheduleComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ULightScheduleComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightScheduleComponent.LightScheduleComponent_C.CheckTime
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                           Array                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                                   PrevTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_CurrTime                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CheckedTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightScheduleComponent_C::CheckTime(TArray<int32>& Array, int32 PrevTime, int32 Param_CurrTime, int32* CheckedTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "CheckTime");

	Params::LightScheduleComponent_C_CheckTime Parms{};

	Parms.Array = std::move(Array);
	Parms.PrevTime = PrevTime;
	Parms.Param_CurrTime = Param_CurrTime;

	UObject::ProcessEvent(Func, &Parms);

	Array = std::move(Parms.Array);

	if (CheckedTime != nullptr)
		*CheckedTime = Parms.CheckedTime;
}


// Function LightScheduleComponent.LightScheduleComponent_C.SetVariableLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULightComponent*                  LightComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightScheduleComponent_C::SetVariableLight(class ULightComponent* LightComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "SetVariableLight");

	Params::LightScheduleComponent_C_SetVariableLight Parms{};

	Parms.LightComponent = LightComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LightScheduleComponent.LightScheduleComponent_C.SetVariableMaterial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*         MaterialInstance                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             ParameterName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Intencity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ArrayIndex                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightScheduleComponent_C::SetVariableMaterial(class UMaterialInstanceDynamic* MaterialInstance, class FName ParameterName, float Intencity, int32* ArrayIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "SetVariableMaterial");

	Params::LightScheduleComponent_C_SetVariableMaterial Parms{};

	Parms.MaterialInstance = MaterialInstance;
	Parms.ParameterName = ParameterName;
	Parms.Intencity = Intencity;

	UObject::ProcessEvent(Func, &Parms);

	if (ArrayIndex != nullptr)
		*ArrayIndex = Parms.ArrayIndex;
}


// Function LightScheduleComponent.LightScheduleComponent_C.Set Variable Light All
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULightScheduleComponent_C::Set_Variable_Light_All()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "Set Variable Light All");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightScheduleComponent.LightScheduleComponent_C.GetVariableMaterial
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*         NewParam                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULightScheduleComponent_C::GetVariableMaterial(int32 Param_Index, class UMaterialInstanceDynamic** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "GetVariableMaterial");

	Params::LightScheduleComponent_C_GetVariableMaterial Parms{};

	Parms.Param_Index = Param_Index;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function LightScheduleComponent.LightScheduleComponent_C.ClearVariableMaterials
// (Public, BlueprintCallable, BlueprintEvent)

void ULightScheduleComponent_C::ClearVariableMaterials()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "ClearVariableMaterials");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LightScheduleComponent.LightScheduleComponent_C.EditorPreview
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ULightScheduleComponent_C::EditorPreview(float TimeRate, bool Sw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LightScheduleComponent_C", "EditorPreview");

	Params::LightScheduleComponent_C_EditorPreview Parms{};

	Parms.TimeRate = TimeRate;
	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


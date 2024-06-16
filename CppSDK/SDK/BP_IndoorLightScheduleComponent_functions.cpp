#pragma once

 

// Package: BP_IndoorLightScheduleComponent

#include "Basic.hpp"

#include "BP_IndoorLightScheduleComponent_classes.hpp"
#include "BP_IndoorLightScheduleComponent_parameters.hpp"


namespace SDK
{

// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ExecuteUbergraph_BP_IndoorLightScheduleComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IndoorLightScheduleComponent_C::ExecuteUbergraph_BP_IndoorLightScheduleComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "ExecuteUbergraph_BP_IndoorLightScheduleComponent");

	Params::BP_IndoorLightScheduleComponent_C_ExecuteUbergraph_BP_IndoorLightScheduleComponent Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetLightValueByMinOfDay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MinOfday                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IndoorLightScheduleComponent_C::SetLightValueByMinOfDay(int32 MinOfday)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "SetLightValueByMinOfDay");

	Params::BP_IndoorLightScheduleComponent_C_SetLightValueByMinOfDay Parms{};

	Parms.MinOfday = MinOfday;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateEditorPreview
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   TimeRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IndoorLightScheduleComponent_C::UpdateEditorPreview(float TimeRate, bool Sw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "UpdateEditorPreview");

	Params::BP_IndoorLightScheduleComponent_C_UpdateEditorPreview Parms{};

	Parms.TimeRate = TimeRate;
	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ClearArrays
// (BlueprintCallable, BlueprintEvent)

void UBP_IndoorLightScheduleComponent_C::ClearArrays()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "ClearArrays");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_IndoorLightScheduleComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.FadeStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Param_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   NowRate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IndoorLightScheduleComponent_C::FadeStart(int32 Param_Index, float NowRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "FadeStart");

	Params::BP_IndoorLightScheduleComponent_C_FadeStart Parms{};

	Parms.Param_Index = Param_Index;
	Parms.NowRate = NowRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.UpdateLightSchedule
// (BlueprintCallable, BlueprintEvent)

void UBP_IndoorLightScheduleComponent_C::UpdateLightSchedule()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "UpdateLightSchedule");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.InitMaterialSchedule
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMeshComponent*>           MeshComponents                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                                    Sw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_IndoorLightScheduleComponent_C::InitMaterialSchedule(const TArray<class UMeshComponent*>& MeshComponents, bool Sw)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "InitMaterialSchedule");

	Params::BP_IndoorLightScheduleComponent_C_InitMaterialSchedule Parms{};

	Parms.MeshComponents = std::move(MeshComponents);
	Parms.Sw = Sw;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IndoorLightScheduleComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "ReceiveTick");

	Params::BP_IndoorLightScheduleComponent_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNewFadeParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   End                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_Index                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IndoorLightScheduleComponent_C::GetNewFadeParam(int32 Start, int32 End, int32* Param_Index)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "GetNewFadeParam");

	Params::BP_IndoorLightScheduleComponent_C_GetNewFadeParam Parms{};

	Parms.Start = Start;
	Parms.End = End;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_Index != nullptr)
		*Param_Index = Parms.Param_Index;
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.GetNowMinOfDay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MinOfday                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IndoorLightScheduleComponent_C::GetNowMinOfDay(int32* MinOfday)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "GetNowMinOfDay");

	Params::BP_IndoorLightScheduleComponent_C_GetNowMinOfDay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MinOfday != nullptr)
		*MinOfday = Parms.MinOfday;
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.CalcFadeColorAndTime
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   CurrentTimeOfDay                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CurrentId                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Param_CurrentFadeId                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Param_CurrentColor                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_CurrentIntensity                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CurrentEmmisiveScale                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_IndoorLightScheduleComponent_C::CalcFadeColorAndTime(int32 CurrentTimeOfDay, int32* CurrentId, int32* Param_CurrentFadeId, float* Rate, struct FLinearColor* Param_CurrentColor, float* Param_CurrentIntensity, float* CurrentEmmisiveScale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "CalcFadeColorAndTime");

	Params::BP_IndoorLightScheduleComponent_C_CalcFadeColorAndTime Parms{};

	Parms.CurrentTimeOfDay = CurrentTimeOfDay;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentId != nullptr)
		*CurrentId = Parms.CurrentId;

	if (Param_CurrentFadeId != nullptr)
		*Param_CurrentFadeId = Parms.Param_CurrentFadeId;

	if (Rate != nullptr)
		*Rate = Parms.Rate;

	if (Param_CurrentColor != nullptr)
		*Param_CurrentColor = std::move(Parms.Param_CurrentColor);

	if (Param_CurrentIntensity != nullptr)
		*Param_CurrentIntensity = Parms.Param_CurrentIntensity;

	if (CurrentEmmisiveScale != nullptr)
		*CurrentEmmisiveScale = Parms.CurrentEmmisiveScale;
}


// Function BP_IndoorLightScheduleComponent.BP_IndoorLightScheduleComponent_C.SetIndoorLightWithCurrentValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_IndoorLightScheduleComponent_C::SetIndoorLightWithCurrentValue()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_IndoorLightScheduleComponent_C", "SetIndoorLightWithCurrentValue");

	UObject::ProcessEvent(Func, nullptr);
}

}


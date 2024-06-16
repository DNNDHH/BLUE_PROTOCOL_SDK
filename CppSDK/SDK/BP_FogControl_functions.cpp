#pragma once

 

// Package: BP_FogControl

#include "Basic.hpp"

#include "BP_FogControl_classes.hpp"
#include "BP_FogControl_parameters.hpp"


namespace SDK
{

// Function BP_FogControl.BP_FogControl_C.ExecuteUbergraph_BP_FogControl
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControl_C::ExecuteUbergraph_BP_FogControl(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "ExecuteUbergraph_BP_FogControl");

	Params::BP_FogControl_C_ExecuteUbergraph_BP_FogControl Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControl.BP_FogControl_C.SetCurrentParam
// (BlueprintCallable, BlueprintEvent)

void ABP_FogControl_C::SetCurrentParam()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "SetCurrentParam");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FogControl.BP_FogControl_C.StartFogControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FogControlVolume_C*           ControlVolume                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControl_C::StartFogControl(class ABP_FogControlVolume_C* ControlVolume, float Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "StartFogControl");

	Params::BP_FogControl_C_StartFogControl Parms{};

	Parms.ControlVolume = ControlVolume;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControl.BP_FogControl_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_FogControl_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FogControl.BP_FogControl_C.Lerp__UpdateFunc
// (BlueprintEvent)

void ABP_FogControl_C::Lerp__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "Lerp__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FogControl.BP_FogControl_C.Lerp__FinishedFunc
// (BlueprintEvent)

void ABP_FogControl_C::Lerp__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "Lerp__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FogControl.BP_FogControl_C.UpdateFogForDynamicSky
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   InTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFogControlCurveParam            CurveParam                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVolumetricFogControlParam       VolumetricParam                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   HueShift                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Saturation_Scale                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Color_Value_Scale                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControl_C::UpdateFogForDynamicSky(float InTime, const struct FFogControlCurveParam& CurveParam, const struct FVolumetricFogControlParam& VolumetricParam, float HueShift, float Saturation_Scale, float Color_Value_Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "UpdateFogForDynamicSky");

	Params::BP_FogControl_C_UpdateFogForDynamicSky Parms{};

	Parms.InTime = InTime;
	Parms.CurveParam = std::move(CurveParam);
	Parms.VolumetricParam = std::move(VolumetricParam);
	Parms.HueShift = HueShift;
	Parms.Saturation_Scale = Saturation_Scale;
	Parms.Color_Value_Scale = Color_Value_Scale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControl.BP_FogControl_C.AddActivatedVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FogControlVolume_C*           FogControlVolume                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControl_C::AddActivatedVolume(class ABP_FogControlVolume_C* FogControlVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "AddActivatedVolume");

	Params::BP_FogControl_C_AddActivatedVolume Parms{};

	Parms.FogControlVolume = FogControlVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FogControl.BP_FogControl_C.RemoveVolume
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FogControlVolume_C*           FogControlVolume                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FogControlVolume_C*           PrimeVolume                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FogControl_C::RemoveVolume(class ABP_FogControlVolume_C* FogControlVolume, class ABP_FogControlVolume_C** PrimeVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FogControl_C", "RemoveVolume");

	Params::BP_FogControl_C_RemoveVolume Parms{};

	Parms.FogControlVolume = FogControlVolume;

	UObject::ProcessEvent(Func, &Parms);

	if (PrimeVolume != nullptr)
		*PrimeVolume = Parms.PrimeVolume;
}

}


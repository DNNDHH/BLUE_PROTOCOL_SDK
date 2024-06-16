#pragma once

 

// Package: BP_DynamicSky

#include "Basic.hpp"

#include "BP_DynamicSky_classes.hpp"
#include "BP_DynamicSky_parameters.hpp"


namespace SDK
{

// Function BP_DynamicSky.BP_DynamicSky_C.ExecuteUbergraph_BP_DynamicSky
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::ExecuteUbergraph_BP_DynamicSky(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "ExecuteUbergraph_BP_DynamicSky");

	Params::BP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.AddSkyLightControlVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SkyLightControlVolume_C*      Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::AddSkyLightControlVolume(class ABP_SkyLightControlVolume_C* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "AddSkyLightControlVolume");

	Params::BP_DynamicSky_C_AddSkyLightControlVolume Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.RemoveSkyLightControlVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SkyLightControlVolume_C*      Param_Instigator                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::RemoveSkyLightControlVolume(class ABP_SkyLightControlVolume_C* Param_Instigator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "RemoveSkyLightControlVolume");

	Params::BP_DynamicSky_C_RemoveSkyLightControlVolume Parms{};

	Parms.Param_Instigator = Param_Instigator;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.FixDynamicSkyForDemo
// (BlueprintCallable, BlueprintEvent)

void ABP_DynamicSky_C::FixDynamicSkyForDemo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "FixDynamicSkyForDemo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightsImmidiate
// (Event, Public, BlueprintEvent)

void ABP_DynamicSky_C::UpdateLightsImmidiate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateLightsImmidiate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkySphere
// (Event, Public, BlueprintEvent)

void ABP_DynamicSky_C::UpdateSkySphere()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateSkySphere");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.StartSkyLightControl
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   SkyLightColorTgt                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SkyLightIntensityTgt                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_SkyLightToonIntensityScale                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_SkyLightToonSaturationScale                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   LerpTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::StartSkyLightControl(float SkyLightColorTgt, float SkyLightIntensityTgt, float Param_SkyLightToonIntensityScale, float Param_SkyLightToonSaturationScale, float LerpTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "StartSkyLightControl");

	Params::BP_DynamicSky_C_StartSkyLightControl Parms{};

	Parms.SkyLightColorTgt = SkyLightColorTgt;
	Parms.SkyLightIntensityTgt = SkyLightIntensityTgt;
	Parms.Param_SkyLightToonIntensityScale = Param_SkyLightToonIntensityScale;
	Parms.Param_SkyLightToonSaturationScale = Param_SkyLightToonSaturationScale;
	Parms.LerpTime = LerpTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_DynamicSky_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "ReceiveTick");

	Params::BP_DynamicSky_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.SkyLightControlTimeline__UpdateFunc
// (BlueprintEvent)

void ABP_DynamicSky_C::SkyLightControlTimeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "SkyLightControlTimeline__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.SkyLightControlTimeline__FinishedFunc
// (BlueprintEvent)

void ABP_DynamicSky_C::SkyLightControlTimeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "SkyLightControlTimeline__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_DynamicSky_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateMPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   In_time                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::UpdateMPC(float In_time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateMPC");

	Params::BP_DynamicSky_C_UpdateMPC Parms{};

	Parms.In_time = In_time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.GetLightVector
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   LightIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     LightVector                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::GetLightVector(int32 LightIndex, struct FLinearColor* LightVector)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "GetLightVector");

	Params::BP_DynamicSky_C_GetLightVector Parms{};

	Parms.LightIndex = LightIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (LightVector != nullptr)
		*LightVector = std::move(Parms.LightVector);
}


// Function BP_DynamicSky.BP_DynamicSky_C.GetLightColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   LightIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     Param_LightColor                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::GetLightColor(int32 LightIndex, struct FLinearColor* Param_LightColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "GetLightColor");

	Params::BP_DynamicSky_C_GetLightColor Parms{};

	Parms.LightIndex = LightIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_LightColor != nullptr)
		*Param_LightColor = std::move(Parms.Param_LightColor);
}


// Function BP_DynamicSky.BP_DynamicSky_C.GetLightIntensity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   LightIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Param_LightIntensity                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::GetLightIntensity(int32 LightIndex, float* Param_LightIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "GetLightIntensity");

	Params::BP_DynamicSky_C_GetLightIntensity Parms{};

	Parms.LightIndex = LightIndex;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_LightIntensity != nullptr)
		*Param_LightIntensity = Parms.Param_LightIntensity;
}


// Function BP_DynamicSky.BP_DynamicSky_C.GetLightNumInv
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   LightNumInv                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::GetLightNumInv(float* LightNumInv)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "GetLightNumInv");

	Params::BP_DynamicSky_C_GetLightNumInv Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (LightNumInv != nullptr)
		*LightNumInv = Parms.LightNumInv;
}


// Function BP_DynamicSky.BP_DynamicSky_C.SetMainLightContribution
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Light_Index                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MainLightContribution                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::SetMainLightContribution(int32 Light_Index, float MainLightContribution)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "SetMainLightContribution");

	Params::BP_DynamicSky_C_SetMainLightContribution Parms{};

	Parms.Light_Index = Light_Index;
	Parms.MainLightContribution = MainLightContribution;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkyLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::UpdateSkyLight(float Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateSkyLight");

	Params::BP_DynamicSky_C_UpdateSkyLight Parms{};

	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateFog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::UpdateFog(float Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateFog");

	Params::BP_DynamicSky_C_UpdateFog Parms{};

	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateLight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::UpdateLight(float Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateLight");

	Params::BP_DynamicSky_C_UpdateLight Parms{};

	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateStageShadow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::UpdateStageShadow(float Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateStageShadow");

	Params::BP_DynamicSky_C_UpdateStageShadow Parms{};

	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateDistantFog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::UpdateDistantFog(float Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateDistantFog");

	Params::BP_DynamicSky_C_UpdateDistantFog Parms{};

	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateRimLight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::UpdateRimLight(float Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateRimLight");

	Params::BP_DynamicSky_C_UpdateRimLight Parms{};

	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateDynamicSkyForEditor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DynamicSky_C::UpdateDynamicSkyForEditor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateDynamicSkyForEditor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightSchedule
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DynamicSky_C::UpdateLightSchedule(float Param_Time, bool Override)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateLightSchedule");

	Params::BP_DynamicSky_C_UpdateLightSchedule Parms{};

	Parms.Param_Time = Param_Time;
	Parms.Override = Override;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.Update LUT
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::Update_LUT(float Param_Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "Update LUT");

	Params::BP_DynamicSky_C_Update_LUT Parms{};

	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.GetDynamicSkyFogControlParam
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Time                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFogControlParam                 FogControlParam                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DynamicSky_C::GetDynamicSkyFogControlParam(float Param_Time, struct FFogControlParam* FogControlParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "GetDynamicSkyFogControlParam");

	Params::BP_DynamicSky_C_GetDynamicSkyFogControlParam Parms{};

	Parms.Param_Time = Param_Time;

	UObject::ProcessEvent(Func, &Parms);

	if (FogControlParam != nullptr)
		*FogControlParam = std::move(Parms.FogControlParam);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateOcean
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DynamicSky_C::UpdateOcean()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateOcean");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.InitDinamicMaterialInstance
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_DynamicSky_C::InitDinamicMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "InitDinamicMaterialInstance");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_DynamicSky.BP_DynamicSky_C.Should Update Height Gradation Color
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bUpdate                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DynamicSky_C::Should_Update_Height_Gradation_Color(bool* bUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "Should Update Height Gradation Color");

	Params::BP_DynamicSky_C_Should_Update_Height_Gradation_Color Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bUpdate != nullptr)
		*bUpdate = Parms.bUpdate;
}


// Function BP_DynamicSky.BP_DynamicSky_C.SetDisableUpdateHeightGradationColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bInDisable                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_DynamicSky_C::SetDisableUpdateHeightGradationColor(bool bInDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "SetDisableUpdateHeightGradationColor");

	Params::BP_DynamicSky_C_SetDisableUpdateHeightGradationColor Parms{};

	Parms.bInDisable = bInDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_DynamicSky.BP_DynamicSky_C.UpdateDirectionalLightControlForEditor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_DynamicSky_C::UpdateDirectionalLightControlForEditor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DynamicSky_C", "UpdateDirectionalLightControlForEditor");

	UObject::ProcessEvent(Func, nullptr);
}

}


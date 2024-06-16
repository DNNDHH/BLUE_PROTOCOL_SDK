#pragma once

 

// Package: BP_SkylightControlLibrary

#include "Basic.hpp"

#include "BP_SkylightControlLibrary_classes.hpp"
#include "BP_SkylightControlLibrary_parameters.hpp"


namespace SDK
{

// Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightToonIntensityScaleDefault
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DynamicSky_C*                 DynamicSky                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkylightControlLibrary_C::UpdateSkyLightToonIntensityScaleDefault(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SkylightControlLibrary_C", "UpdateSkyLightToonIntensityScaleDefault");

	Params::BP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault Parms{};

	Parms.DynamicSky = DynamicSky;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightPreviewFlag
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DynamicSky_C*                 DynamicSky                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    PreviewFlagChange                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_SkylightControlLibrary_C::UpdateSkyLightPreviewFlag(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext, bool* PreviewFlagChange)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SkylightControlLibrary_C", "UpdateSkyLightPreviewFlag");

	Params::BP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag Parms{};

	Parms.DynamicSky = DynamicSky;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (PreviewFlagChange != nullptr)
		*PreviewFlagChange = Parms.PreviewFlagChange;
}


// Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightControlLightParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DynamicSky_C*                 DynamicSky                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveLinearColor*                SkyLightColorOverride                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                      SkyLightIntensityOverride                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                      SkyLightToonIntensityOverride                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCurveFloat*                      SkyLightToonSaturationScaleOverride                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkylightControlLibrary_C::SetSkyLightControlLightParam(class ABP_DynamicSky_C* DynamicSky, class UCurveLinearColor* SkyLightColorOverride, class UCurveFloat* SkyLightIntensityOverride, class UCurveFloat* SkyLightToonIntensityOverride, class UCurveFloat* SkyLightToonSaturationScaleOverride, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SkylightControlLibrary_C", "SetSkyLightControlLightParam");

	Params::BP_SkylightControlLibrary_C_SetSkyLightControlLightParam Parms{};

	Parms.DynamicSky = DynamicSky;
	Parms.SkyLightColorOverride = SkyLightColorOverride;
	Parms.SkyLightIntensityOverride = SkyLightIntensityOverride;
	Parms.SkyLightToonIntensityOverride = SkyLightToonIntensityOverride;
	Parms.SkyLightToonSaturationScaleOverride = SkyLightToonSaturationScaleOverride;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightDefaultLightParam
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_DynamicSky_C*                 DynamicSky                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkylightControlLibrary_C::SetSkyLightDefaultLightParam(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BP_SkylightControlLibrary_C", "SetSkyLightDefaultLightParam");

	Params::BP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam Parms{};

	Parms.DynamicSky = DynamicSky;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}


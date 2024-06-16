#pragma once

 

// Package: BP_SkylightControlLibrary

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SkylightControlLibrary.BP_SkylightControlLibrary_C
// 0x0000 (0x0028 - 0x0028)
class UBP_SkylightControlLibrary_C final : public UBlueprintFunctionLibrary
{
public:
	static void UpdateSkyLightToonIntensityScaleDefault(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext);
	static void UpdateSkyLightPreviewFlag(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext, bool* PreviewFlagChange);
	static void SetSkyLightControlLightParam(class ABP_DynamicSky_C* DynamicSky, class UCurveLinearColor* SkyLightColorOverride, class UCurveFloat* SkyLightIntensityOverride, class UCurveFloat* SkyLightToonIntensityOverride, class UCurveFloat* SkyLightToonSaturationScaleOverride, class UObject* __WorldContext);
	static void SetSkyLightDefaultLightParam(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkylightControlLibrary_C">();
	}
	static class UBP_SkylightControlLibrary_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SkylightControlLibrary_C>();
	}
};
static_assert(alignof(UBP_SkylightControlLibrary_C) == 0x000008, "Wrong alignment on UBP_SkylightControlLibrary_C");
static_assert(sizeof(UBP_SkylightControlLibrary_C) == 0x000028, "Wrong size on UBP_SkylightControlLibrary_C");

}


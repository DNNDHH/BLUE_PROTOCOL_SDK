#pragma once

 

// Package: LensDistortion

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class LensDistortion.LensDistortionBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULensDistortionBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static void DrawUVDisplacementToRenderTarget(const class UObject* WorldContextObject, const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float UndistortOverscanFactor, class UTextureRenderTarget2D* OutputRenderTarget, float OutputMultiply, float OutputAdd);
	static bool EqualEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B);
	static void GetUndistortOverscanFactor(const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float* UndistortOverscanFactor);
	static bool NotEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LensDistortionBlueprintLibrary">();
	}
	static class ULensDistortionBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULensDistortionBlueprintLibrary>();
	}
};
static_assert(alignof(ULensDistortionBlueprintLibrary) == 0x000008, "Wrong alignment on ULensDistortionBlueprintLibrary");
static_assert(sizeof(ULensDistortionBlueprintLibrary) == 0x000028, "Wrong size on ULensDistortionBlueprintLibrary");

}


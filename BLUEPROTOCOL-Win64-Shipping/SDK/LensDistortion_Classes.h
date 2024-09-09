#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class LensDistortion.LensDistortionBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class ULensDistortionBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool NotEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B);
		void GetUndistortOverscanFactor(const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float* UndistortOverscanFactor);
		bool EqualEqual_CompareLensDistortionModels(const struct FLensDistortionCameraModel& A, const struct FLensDistortionCameraModel& B);
		void DrawUVDisplacementToRenderTarget(class UObject* WorldContextObject, const struct FLensDistortionCameraModel& CameraModel, float DistortedHorizontalFOV, float DistortedAspectRatio, float UndistortOverscanFactor, class UTextureRenderTarget2D* OutputRenderTarget, float OutputMultiply, float OutputAdd);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

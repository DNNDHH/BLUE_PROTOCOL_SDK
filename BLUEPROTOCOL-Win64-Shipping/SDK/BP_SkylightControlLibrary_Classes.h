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
	 * BlueprintGeneratedClass BP_SkylightControlLibrary.BP_SkylightControlLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_SkylightControlLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void SetSkyLightDefaultLightParam(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext);
		void SetSkyLightControlLightParam(class ABP_DynamicSky_C* DynamicSky, class UCurveLinearColor* SkyLightColorOverride, class UCurveFloat* SkyLightIntensityOverride, class UCurveFloat* SkyLightToonIntensityOverride, class UCurveFloat* SkyLightToonSaturationScaleOverride, class UObject* __WorldContext);
		void UpdateSkyLightPreviewFlag(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext, bool* PreviewFlagChange);
		void UpdateSkyLightToonIntensityScaleDefault(class ABP_DynamicSky_C* DynamicSky, class UObject* __WorldContext);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

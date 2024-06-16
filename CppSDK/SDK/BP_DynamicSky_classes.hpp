#pragma once

 

// Package: BP_DynamicSky

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "VolumetricFogControlParam_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "FogControlParam_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DynamicSky.BP_DynamicSky_C
// 0x0790 (0x0AF8 - 0x0368)
class ABP_DynamicSky_C final : public ASBSkySphere
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0368(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                  PostProcess;                                       // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightControlTimeline_TimeParam_3DE0D4F44AE97E2AA4B3859A79DA66F2; // 0x0378(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ETimelineDirection                            SkyLightControlTimeline__Direction_3DE0D4F44AE97E2AA4B3859A79DA66F2; // 0x037C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9999[0x3];                                     // 0x037D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UTimelineComponent*                     SkyLightControlTimeline;                           // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Primary_light_transition_curve;                    // 0x0388(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Sky_color_curve;                                   // 0x0390(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Ground_color_curve;                                // 0x0398(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Line_modulate_color_curve;                         // 0x03A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Shadow_Color_Curve;                                // 0x03A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      Aerial_Perspective_Color_Curve;                    // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASkyLight*                              SkyLight;                                          // 0x03B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SkyLightColor;                                     // 0x03C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightIntensity;                                 // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightToonIntensityScale;                        // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightToonSaturationScale;                       // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            IlluminationBrightness;                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                  Fog;                                               // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCurve_F;                                        // 0x03F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_999A[0x7];                                     // 0x03F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            FogDensity;                                        // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      FogInscatteringColor;                              // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FogHeightFalloff;                                  // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            FogMaxOpacity;                                     // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SecondFogDensity;                                  // 0x0418(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SecondFogHeightFalloff;                            // 0x0420(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            StartDistance;                                     // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DirectionalInscatteringExponent;                   // 0x0430(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DirectionalInscatteringStartDistence;              // 0x0438(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      DirectionalInscatteringColor;                      // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Brightness;                                        // 0x0448(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      EnviromentColor;                                   // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Noon_SunFlare_Material;                            // 0x0458(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Sunset_SunFlare_Material;                          // 0x0460(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Night_SunFlare_Material;                           // 0x0468(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                      Sunrise_SunFlare_Material;                         // 0x0470(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Noon_SET;                                          // 0x0478(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Sunset_SET;                                        // 0x0480(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Night_SET;                                         // 0x0488(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               Sunrise_SET;                                       // 0x0490(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Time;                                              // 0x0498(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimeReset;                                         // 0x049C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Noon_Waight;                                       // 0x04A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sunset_Waight;                                     // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Night_Waight;                                      // 0x04A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Sunrise_Waight;                                    // 0x04AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            Vanish;                                            // 0x04B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      TimedParaCurve;                                    // 0x04B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SunFlare_ON;                                       // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_999B[0x3];                                     // 0x04C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SpawnEnvEffectExecIntervalTime;                    // 0x04C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SpawnEnvEffectTotalDeltaTime;                      // 0x04C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EffectBloom;                                       // 0x04CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   GameTime;                                          // 0x04D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_DayThreshold;                                   // 0x04D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_DayDistance;                                    // 0x04DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SS_DayNearColorHSV;                                // 0x04E0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_DayNearWeight;                                  // 0x04EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SS_DayFarColorHSV;                                 // 0x04F0(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_DayFarWeight;                                   // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_NightThreshold;                                 // 0x0500(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_NightDistance;                                  // 0x0504(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SS_NightNearColorHSV;                              // 0x0508(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_NightNearWeight;                                // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SS_NightFarColorHSV;                               // 0x0518(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_NightFarWeight;                                 // 0x0524(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseCurve;                                          // 0x0528(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_999C[0x7];                                     // 0x0529(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            SS_Threshold_curve;                                // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SS_Distance_curve;                                 // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SS_Near_Color_curve;                               // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SS_Near_Weight_curve;                              // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SS_Far_Color_curve;                                // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SS_Far_Weight_curve;                               // 0x0558(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_FogControl_C*                       FogControlActor;                                   // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogInscatteringColor_HueShift;                     // 0x0568(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogInscatteringColor_SaturationScale;              // 0x056C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogInscatteringColor_ValueScale;                   // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_Color_HueShift;                                 // 0x0574(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_Color_SaturationScale;                          // 0x0578(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_Color_ValueScale;                               // 0x057C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DF_BlendContrast_curve;                            // 0x0580(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DF_BlendDistance_curve;                            // 0x0588(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DF_BlendScale_curve;                               // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DF_Color_ChangePoint_curve;                        // 0x0598(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            DF_Color_ChangeContrast_curve;                     // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      DF_Color_Far_curve;                                // 0x05A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      DF_Color_Near_curve;                               // 0x05B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DF_CutoffDistance;                                 // 0x05B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DF_CutoffHeight;                                   // 0x05BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APostProcessVolume*                     PostProcessVolume;                                 // 0x05C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RL_GroundAttenuation;                              // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RL_Threshold;                                      // 0x05CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RL_Intensity;                                      // 0x05D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RL_BaseReflectFraction;                            // 0x05D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RL_BacklightAttenuation;                           // 0x05D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RL_Exponent;                                       // 0x05DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RL_ZenithAttenuation;                              // 0x05E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 RL_LightColor;                                     // 0x05E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          EnvEffect;                                         // 0x05E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_999D[0x7];                                     // 0x05E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UParticleSystem*>                ENV_Particles;                                     // 0x05F0(0x0010)(Edit, BlueprintVisible)
	float                                         TraceDepth;                                        // 0x0600(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TraceWigth;                                        // 0x0604(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWindDirectionalSource*                 WindDirectionalSource;                             // 0x0608(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WindStrength;                                      // 0x0610(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               WindDirection;                                     // 0x0614(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                Wind;                                              // 0x0620(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_999E[0x4];                                     // 0x062C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      TS_Color_curve;                                    // 0x0630(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FlarePower;                                        // 0x0638(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_999F[0x4];                                     // 0x063C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveFloat*                            DF_LightReference_curve;                           // 0x0640(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      DF_Color_Far_SunSide_curve;                        // 0x0648(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      DF_Color_Near_SunSide_curve;                       // 0x0650(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightColorScale;                                // 0x0658(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightIntensityScale;                            // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightToonIntensityScaleTgt;                     // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightToonIntensityScaleDef;                     // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightToonSaturationScaleTgt;                    // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightToonSaturationScaleDef;                    // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SkyLightColorScaleChange;                          // 0x0670(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SkyLightIntensityScaleChange;                      // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              SkyLightToonIntensityChange;                       // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SkyLightColorOverride;                             // 0x0688(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightIntensityOverride;                         // 0x0690(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightToonIntensityScaleOverride;                // 0x0698(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SkyLightToonSaturationScaleOverride;               // 0x06A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Hit_01;                                            // 0x06A8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Hit_02;                                            // 0x06B4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TraceSlope;                                        // 0x06C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_99A0[0x3];                                     // 0x06C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FarScale;                                          // 0x06C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TraceHeight;                                       // 0x06C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RayLength;                                         // 0x06CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         OffsetWindward;                                    // 0x06D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          PreviewSchedulableLight;                           // 0x06D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99A1[0x3];                                     // 0x06D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UChildActorComponent*>           SpawnChildActorComponent;                          // 0x06D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FVolumetricFogControlParam             Volumetric_Fog_Param;                              // 0x06E8(0x0028)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SkyLightControlEdit;                               // 0x0710(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99A2[0x3];                                     // 0x0711(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SkyLightControlAlpha;                              // 0x0714(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SkyLightColorControlBase;                          // 0x0718(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightIntensityControlBase;                      // 0x0728(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightToonIntensityControlBase;                  // 0x072C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SkyLightToonSaturationControlBase;                 // 0x0730(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99A3[0x4];                                     // 0x0734(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class ABP_SkyLightControlVolume_C*>    SkyLightControlInstigator;                         // 0x0738(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         SunSize;                                           // 0x0748(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FogFollowingPlayerHeight;                          // 0x074C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99A4[0x3];                                     // 0x074D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FogFollowingPlayerHeightOffset;                    // 0x0750(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FogHeightDefault;                                  // 0x0754(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFogControlParam                       FogControlParamDefault;                            // 0x0758(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FogControlPreview;                                 // 0x0798(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99A5[0x3];                                     // 0x0799(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FColor                                 HeightGradationColor;                              // 0x079C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FColor                                 HeightGradationColorSkin;                          // 0x07A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99A6[0x4];                                     // 0x07A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      SS_Near_PenumbraColor_curve;                       // 0x07A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SS_Near_PenumbraWeight_curve;                      // 0x07B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SS_Near_PenumbraWidth_curve;                       // 0x07B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SS_Far_PenumbraColor_curve;                        // 0x07C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SS_Far_PenumbraWeight_curve;                       // 0x07C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                            SS_Far_PenumbraWidth_curve;                        // 0x07D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SS_DayNearPenumbraColorHSV;                        // 0x07D8(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_DayNearPenumbraWeight;                          // 0x07E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_DayNearPenumbraWidth;                           // 0x07E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SS_DayFarPenumbraColorHSV;                         // 0x07EC(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_DayFarPenumbraWeight;                           // 0x07F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_DayFarPenumbraWidth;                            // 0x07FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SS_NightNearPenumbraColorHSV;                      // 0x0800(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_NightNearPenumbraWeight;                        // 0x080C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_NightNearPenumbraWidth;                         // 0x0810(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                SS_NightFarPenumbraColorHSV;                       // 0x0814(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_NightFarPenumbraWeight;                         // 0x0820(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SS_NightFarPenumbraWidth;                          // 0x0824(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TimeZoneChange;                                    // 0x0828(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99A7[0x3];                                     // 0x0829(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                PreSunLocation;                                    // 0x082C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pre_Noon_Waight;                                   // 0x0838(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pre_Sunset_Waight;                                 // 0x083C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pre_Night_Waight;                                  // 0x0840(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Pre_Sunrise_Waight;                                // 0x0844(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               LUTMaterial;                                       // 0x0848(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DaytimeStart;                                      // 0x0850(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DaytimeEnd;                                        // 0x0854(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EveningStart;                                      // 0x0858(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EveningEnd;                                        // 0x085C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NightStart;                                        // 0x0860(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         NightEnd;                                          // 0x0864(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             DaytimeLUT;                                        // 0x0868(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             EveningLUT;                                        // 0x0870(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             NightLUT;                                          // 0x0878(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LUT;                                               // 0x0880(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor)
	uint8                                         Pad_99A8[0x7];                                     // 0x0881(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UCurveLinearColor*                      SF_Color_Far_curve;                                // 0x0888(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                      SF_Color_Near_curve;                               // 0x0890(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SF_ColorRange_Far;                                 // 0x0898(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         SF_ColorRange_Near;                                // 0x089C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TimedPost;                                         // 0x08A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99A9[0x7];                                     // 0x08A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      TimedPostMaterial;                                 // 0x08A8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               TimedPostMaterialDMI;                              // 0x08B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimedPostOnStart;                                  // 0x08B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimedPostOnEnd;                                    // 0x08BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimedPostOffStart;                                 // 0x08C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TimedPostOffEnd;                                   // 0x08C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Climbable;                                         // 0x08C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Floor;                                             // 0x08D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Grass;                                             // 0x08E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Grass_D;                                           // 0x08F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Gravel;                                            // 0x0908(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Ice;                                               // 0x0918(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Ivy;                                               // 0x0928(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Leaf;                                              // 0x0938(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Metal;                                             // 0x0948(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Metal_Mesh;                                        // 0x0958(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Pebble;                                            // 0x0968(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Sand;                                              // 0x0978(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Snow;                                              // 0x0988(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Snow_D;                                            // 0x0998(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Soil;                                              // 0x09A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Stone;                                             // 0x09B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Tree;                                              // 0x09C8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Water;                                             // 0x09D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           WireUnattachable;                                  // 0x09E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Wood;                                              // 0x09F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Wood_Thin;                                         // 0x0A08(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Sand_Wet;                                          // 0x0A18(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Rooftile;                                          // 0x0A28(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Cloth;                                             // 0x0A38(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Soil_Wet;                                          // 0x0A48(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Carpet;                                            // 0x0A58(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Poison;                                            // 0x0A68(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Paralyze;                                          // 0x0A78(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           SAP;                                               // 0x0A88(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Lava;                                              // 0x0A98(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Swamp;                                             // 0x0AA8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LightFixForDemo;                                   // 0x0AB8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_99AA[0x3];                                     // 0x0AB9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         UpdatedElapsedTime;                                // 0x0ABC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         DisableUpdateHeightGradationColorCount;            // 0x0AC0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightOverrideAlpha;                                // 0x0AC4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           LightOverrideColor;                                // 0x0AC8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightOverrideIntensity;                            // 0x0AD8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightOverrideToonIntensityScale;                   // 0x0ADC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           DefaultLightColor;                                 // 0x0AE0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultLightIntensity;                             // 0x0AF0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefaultLightToonIntensityScale;                    // 0x0AF4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DynamicSky(int32 EntryPoint);
	void AddSkyLightControlVolume(class ABP_SkyLightControlVolume_C* Param_Instigator);
	void RemoveSkyLightControlVolume(class ABP_SkyLightControlVolume_C* Param_Instigator);
	void FixDynamicSkyForDemo();
	void UpdateLightsImmidiate();
	void UpdateSkySphere();
	void StartSkyLightControl(float SkyLightColorTgt, float SkyLightIntensityTgt, float Param_SkyLightToonIntensityScale, float Param_SkyLightToonSaturationScale, float LerpTime);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SkyLightControlTimeline__UpdateFunc();
	void SkyLightControlTimeline__FinishedFunc();
	void UserConstructionScript();
	void UpdateMPC(float In_time);
	void GetLightVector(int32 LightIndex, struct FLinearColor* LightVector);
	void GetLightColor(int32 LightIndex, struct FLinearColor* Param_LightColor);
	void GetLightIntensity(int32 LightIndex, float* Param_LightIntensity);
	void GetLightNumInv(float* LightNumInv);
	void SetMainLightContribution(int32 Light_Index, float MainLightContribution);
	void UpdateSkyLight(float Param_Time);
	void UpdateFog(float Param_Time);
	void UpdateLight(float Param_Time);
	void UpdateStageShadow(float Param_Time);
	void UpdateDistantFog(float Param_Time);
	void UpdateRimLight(float Param_Time);
	void UpdateDynamicSkyForEditor();
	void UpdateLightSchedule(float Param_Time, bool Override);
	void Update_LUT(float Param_Time);
	void GetDynamicSkyFogControlParam(float Param_Time, struct FFogControlParam* FogControlParam);
	void UpdateOcean();
	void InitDinamicMaterialInstance();
	void Should_Update_Height_Gradation_Color(bool* bUpdate);
	void SetDisableUpdateHeightGradationColor(bool bInDisable);
	void UpdateDirectionalLightControlForEditor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DynamicSky_C">();
	}
	static class ABP_DynamicSky_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DynamicSky_C>();
	}
};
static_assert(alignof(ABP_DynamicSky_C) == 0x000008, "Wrong alignment on ABP_DynamicSky_C");
static_assert(sizeof(ABP_DynamicSky_C) == 0x000AF8, "Wrong size on ABP_DynamicSky_C");
static_assert(offsetof(ABP_DynamicSky_C, UberGraphFrame) == 0x000368, "Member 'ABP_DynamicSky_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, PostProcess) == 0x000370, "Member 'ABP_DynamicSky_C::PostProcess' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightControlTimeline_TimeParam_3DE0D4F44AE97E2AA4B3859A79DA66F2) == 0x000378, "Member 'ABP_DynamicSky_C::SkyLightControlTimeline_TimeParam_3DE0D4F44AE97E2AA4B3859A79DA66F2' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightControlTimeline__Direction_3DE0D4F44AE97E2AA4B3859A79DA66F2) == 0x00037C, "Member 'ABP_DynamicSky_C::SkyLightControlTimeline__Direction_3DE0D4F44AE97E2AA4B3859A79DA66F2' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightControlTimeline) == 0x000380, "Member 'ABP_DynamicSky_C::SkyLightControlTimeline' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Primary_light_transition_curve) == 0x000388, "Member 'ABP_DynamicSky_C::Primary_light_transition_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sky_color_curve) == 0x000390, "Member 'ABP_DynamicSky_C::Sky_color_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Ground_color_curve) == 0x000398, "Member 'ABP_DynamicSky_C::Ground_color_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Line_modulate_color_curve) == 0x0003A0, "Member 'ABP_DynamicSky_C::Line_modulate_color_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Shadow_Color_Curve) == 0x0003A8, "Member 'ABP_DynamicSky_C::Shadow_Color_Curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Aerial_Perspective_Color_Curve) == 0x0003B0, "Member 'ABP_DynamicSky_C::Aerial_Perspective_Color_Curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLight) == 0x0003B8, "Member 'ABP_DynamicSky_C::SkyLight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightColor) == 0x0003C0, "Member 'ABP_DynamicSky_C::SkyLightColor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightIntensity) == 0x0003C8, "Member 'ABP_DynamicSky_C::SkyLightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonIntensityScale) == 0x0003D0, "Member 'ABP_DynamicSky_C::SkyLightToonIntensityScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonSaturationScale) == 0x0003D8, "Member 'ABP_DynamicSky_C::SkyLightToonSaturationScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, IlluminationBrightness) == 0x0003E0, "Member 'ABP_DynamicSky_C::IlluminationBrightness' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Fog) == 0x0003E8, "Member 'ABP_DynamicSky_C::Fog' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, UseCurve_F) == 0x0003F0, "Member 'ABP_DynamicSky_C::UseCurve_F' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogDensity) == 0x0003F8, "Member 'ABP_DynamicSky_C::FogDensity' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogInscatteringColor) == 0x000400, "Member 'ABP_DynamicSky_C::FogInscatteringColor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogHeightFalloff) == 0x000408, "Member 'ABP_DynamicSky_C::FogHeightFalloff' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogMaxOpacity) == 0x000410, "Member 'ABP_DynamicSky_C::FogMaxOpacity' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SecondFogDensity) == 0x000418, "Member 'ABP_DynamicSky_C::SecondFogDensity' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SecondFogHeightFalloff) == 0x000420, "Member 'ABP_DynamicSky_C::SecondFogHeightFalloff' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, StartDistance) == 0x000428, "Member 'ABP_DynamicSky_C::StartDistance' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DirectionalInscatteringExponent) == 0x000430, "Member 'ABP_DynamicSky_C::DirectionalInscatteringExponent' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DirectionalInscatteringStartDistence) == 0x000438, "Member 'ABP_DynamicSky_C::DirectionalInscatteringStartDistence' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DirectionalInscatteringColor) == 0x000440, "Member 'ABP_DynamicSky_C::DirectionalInscatteringColor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Brightness) == 0x000448, "Member 'ABP_DynamicSky_C::Brightness' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, EnviromentColor) == 0x000450, "Member 'ABP_DynamicSky_C::EnviromentColor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Noon_SunFlare_Material) == 0x000458, "Member 'ABP_DynamicSky_C::Noon_SunFlare_Material' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sunset_SunFlare_Material) == 0x000460, "Member 'ABP_DynamicSky_C::Sunset_SunFlare_Material' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Night_SunFlare_Material) == 0x000468, "Member 'ABP_DynamicSky_C::Night_SunFlare_Material' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sunrise_SunFlare_Material) == 0x000470, "Member 'ABP_DynamicSky_C::Sunrise_SunFlare_Material' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Noon_SET) == 0x000478, "Member 'ABP_DynamicSky_C::Noon_SET' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sunset_SET) == 0x000480, "Member 'ABP_DynamicSky_C::Sunset_SET' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Night_SET) == 0x000488, "Member 'ABP_DynamicSky_C::Night_SET' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sunrise_SET) == 0x000490, "Member 'ABP_DynamicSky_C::Sunrise_SET' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Time) == 0x000498, "Member 'ABP_DynamicSky_C::Time' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimeReset) == 0x00049C, "Member 'ABP_DynamicSky_C::TimeReset' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Noon_Waight) == 0x0004A0, "Member 'ABP_DynamicSky_C::Noon_Waight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sunset_Waight) == 0x0004A4, "Member 'ABP_DynamicSky_C::Sunset_Waight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Night_Waight) == 0x0004A8, "Member 'ABP_DynamicSky_C::Night_Waight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sunrise_Waight) == 0x0004AC, "Member 'ABP_DynamicSky_C::Sunrise_Waight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Vanish) == 0x0004B0, "Member 'ABP_DynamicSky_C::Vanish' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimedParaCurve) == 0x0004B8, "Member 'ABP_DynamicSky_C::TimedParaCurve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SunFlare_ON) == 0x0004C0, "Member 'ABP_DynamicSky_C::SunFlare_ON' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SpawnEnvEffectExecIntervalTime) == 0x0004C4, "Member 'ABP_DynamicSky_C::SpawnEnvEffectExecIntervalTime' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SpawnEnvEffectTotalDeltaTime) == 0x0004C8, "Member 'ABP_DynamicSky_C::SpawnEnvEffectTotalDeltaTime' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, EffectBloom) == 0x0004CC, "Member 'ABP_DynamicSky_C::EffectBloom' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, GameTime) == 0x0004D0, "Member 'ABP_DynamicSky_C::GameTime' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayThreshold) == 0x0004D8, "Member 'ABP_DynamicSky_C::SS_DayThreshold' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayDistance) == 0x0004DC, "Member 'ABP_DynamicSky_C::SS_DayDistance' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayNearColorHSV) == 0x0004E0, "Member 'ABP_DynamicSky_C::SS_DayNearColorHSV' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayNearWeight) == 0x0004EC, "Member 'ABP_DynamicSky_C::SS_DayNearWeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayFarColorHSV) == 0x0004F0, "Member 'ABP_DynamicSky_C::SS_DayFarColorHSV' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayFarWeight) == 0x0004FC, "Member 'ABP_DynamicSky_C::SS_DayFarWeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightThreshold) == 0x000500, "Member 'ABP_DynamicSky_C::SS_NightThreshold' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightDistance) == 0x000504, "Member 'ABP_DynamicSky_C::SS_NightDistance' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightNearColorHSV) == 0x000508, "Member 'ABP_DynamicSky_C::SS_NightNearColorHSV' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightNearWeight) == 0x000514, "Member 'ABP_DynamicSky_C::SS_NightNearWeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightFarColorHSV) == 0x000518, "Member 'ABP_DynamicSky_C::SS_NightFarColorHSV' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightFarWeight) == 0x000524, "Member 'ABP_DynamicSky_C::SS_NightFarWeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, UseCurve) == 0x000528, "Member 'ABP_DynamicSky_C::UseCurve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Threshold_curve) == 0x000530, "Member 'ABP_DynamicSky_C::SS_Threshold_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Distance_curve) == 0x000538, "Member 'ABP_DynamicSky_C::SS_Distance_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Near_Color_curve) == 0x000540, "Member 'ABP_DynamicSky_C::SS_Near_Color_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Near_Weight_curve) == 0x000548, "Member 'ABP_DynamicSky_C::SS_Near_Weight_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Far_Color_curve) == 0x000550, "Member 'ABP_DynamicSky_C::SS_Far_Color_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Far_Weight_curve) == 0x000558, "Member 'ABP_DynamicSky_C::SS_Far_Weight_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogControlActor) == 0x000560, "Member 'ABP_DynamicSky_C::FogControlActor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogInscatteringColor_HueShift) == 0x000568, "Member 'ABP_DynamicSky_C::FogInscatteringColor_HueShift' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogInscatteringColor_SaturationScale) == 0x00056C, "Member 'ABP_DynamicSky_C::FogInscatteringColor_SaturationScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogInscatteringColor_ValueScale) == 0x000570, "Member 'ABP_DynamicSky_C::FogInscatteringColor_ValueScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Color_HueShift) == 0x000574, "Member 'ABP_DynamicSky_C::SS_Color_HueShift' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Color_SaturationScale) == 0x000578, "Member 'ABP_DynamicSky_C::SS_Color_SaturationScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Color_ValueScale) == 0x00057C, "Member 'ABP_DynamicSky_C::SS_Color_ValueScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_BlendContrast_curve) == 0x000580, "Member 'ABP_DynamicSky_C::DF_BlendContrast_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_BlendDistance_curve) == 0x000588, "Member 'ABP_DynamicSky_C::DF_BlendDistance_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_BlendScale_curve) == 0x000590, "Member 'ABP_DynamicSky_C::DF_BlendScale_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_Color_ChangePoint_curve) == 0x000598, "Member 'ABP_DynamicSky_C::DF_Color_ChangePoint_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_Color_ChangeContrast_curve) == 0x0005A0, "Member 'ABP_DynamicSky_C::DF_Color_ChangeContrast_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_Color_Far_curve) == 0x0005A8, "Member 'ABP_DynamicSky_C::DF_Color_Far_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_Color_Near_curve) == 0x0005B0, "Member 'ABP_DynamicSky_C::DF_Color_Near_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_CutoffDistance) == 0x0005B8, "Member 'ABP_DynamicSky_C::DF_CutoffDistance' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_CutoffHeight) == 0x0005BC, "Member 'ABP_DynamicSky_C::DF_CutoffHeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, PostProcessVolume) == 0x0005C0, "Member 'ABP_DynamicSky_C::PostProcessVolume' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RL_GroundAttenuation) == 0x0005C8, "Member 'ABP_DynamicSky_C::RL_GroundAttenuation' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RL_Threshold) == 0x0005CC, "Member 'ABP_DynamicSky_C::RL_Threshold' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RL_Intensity) == 0x0005D0, "Member 'ABP_DynamicSky_C::RL_Intensity' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RL_BaseReflectFraction) == 0x0005D4, "Member 'ABP_DynamicSky_C::RL_BaseReflectFraction' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RL_BacklightAttenuation) == 0x0005D8, "Member 'ABP_DynamicSky_C::RL_BacklightAttenuation' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RL_Exponent) == 0x0005DC, "Member 'ABP_DynamicSky_C::RL_Exponent' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RL_ZenithAttenuation) == 0x0005E0, "Member 'ABP_DynamicSky_C::RL_ZenithAttenuation' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RL_LightColor) == 0x0005E4, "Member 'ABP_DynamicSky_C::RL_LightColor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, EnvEffect) == 0x0005E8, "Member 'ABP_DynamicSky_C::EnvEffect' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, ENV_Particles) == 0x0005F0, "Member 'ABP_DynamicSky_C::ENV_Particles' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TraceDepth) == 0x000600, "Member 'ABP_DynamicSky_C::TraceDepth' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TraceWigth) == 0x000604, "Member 'ABP_DynamicSky_C::TraceWigth' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, WindDirectionalSource) == 0x000608, "Member 'ABP_DynamicSky_C::WindDirectionalSource' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, WindStrength) == 0x000610, "Member 'ABP_DynamicSky_C::WindStrength' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, WindDirection) == 0x000614, "Member 'ABP_DynamicSky_C::WindDirection' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Wind) == 0x000620, "Member 'ABP_DynamicSky_C::Wind' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TS_Color_curve) == 0x000630, "Member 'ABP_DynamicSky_C::TS_Color_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FlarePower) == 0x000638, "Member 'ABP_DynamicSky_C::FlarePower' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_LightReference_curve) == 0x000640, "Member 'ABP_DynamicSky_C::DF_LightReference_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_Color_Far_SunSide_curve) == 0x000648, "Member 'ABP_DynamicSky_C::DF_Color_Far_SunSide_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DF_Color_Near_SunSide_curve) == 0x000650, "Member 'ABP_DynamicSky_C::DF_Color_Near_SunSide_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightColorScale) == 0x000658, "Member 'ABP_DynamicSky_C::SkyLightColorScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightIntensityScale) == 0x00065C, "Member 'ABP_DynamicSky_C::SkyLightIntensityScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonIntensityScaleTgt) == 0x000660, "Member 'ABP_DynamicSky_C::SkyLightToonIntensityScaleTgt' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonIntensityScaleDef) == 0x000664, "Member 'ABP_DynamicSky_C::SkyLightToonIntensityScaleDef' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonSaturationScaleTgt) == 0x000668, "Member 'ABP_DynamicSky_C::SkyLightToonSaturationScaleTgt' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonSaturationScaleDef) == 0x00066C, "Member 'ABP_DynamicSky_C::SkyLightToonSaturationScaleDef' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightColorScaleChange) == 0x000670, "Member 'ABP_DynamicSky_C::SkyLightColorScaleChange' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightIntensityScaleChange) == 0x000678, "Member 'ABP_DynamicSky_C::SkyLightIntensityScaleChange' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonIntensityChange) == 0x000680, "Member 'ABP_DynamicSky_C::SkyLightToonIntensityChange' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightColorOverride) == 0x000688, "Member 'ABP_DynamicSky_C::SkyLightColorOverride' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightIntensityOverride) == 0x000690, "Member 'ABP_DynamicSky_C::SkyLightIntensityOverride' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonIntensityScaleOverride) == 0x000698, "Member 'ABP_DynamicSky_C::SkyLightToonIntensityScaleOverride' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonSaturationScaleOverride) == 0x0006A0, "Member 'ABP_DynamicSky_C::SkyLightToonSaturationScaleOverride' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Hit_01) == 0x0006A8, "Member 'ABP_DynamicSky_C::Hit_01' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Hit_02) == 0x0006B4, "Member 'ABP_DynamicSky_C::Hit_02' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TraceSlope) == 0x0006C0, "Member 'ABP_DynamicSky_C::TraceSlope' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FarScale) == 0x0006C4, "Member 'ABP_DynamicSky_C::FarScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TraceHeight) == 0x0006C8, "Member 'ABP_DynamicSky_C::TraceHeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, RayLength) == 0x0006CC, "Member 'ABP_DynamicSky_C::RayLength' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, OffsetWindward) == 0x0006D0, "Member 'ABP_DynamicSky_C::OffsetWindward' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, PreviewSchedulableLight) == 0x0006D4, "Member 'ABP_DynamicSky_C::PreviewSchedulableLight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SpawnChildActorComponent) == 0x0006D8, "Member 'ABP_DynamicSky_C::SpawnChildActorComponent' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Volumetric_Fog_Param) == 0x0006E8, "Member 'ABP_DynamicSky_C::Volumetric_Fog_Param' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightControlEdit) == 0x000710, "Member 'ABP_DynamicSky_C::SkyLightControlEdit' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightControlAlpha) == 0x000714, "Member 'ABP_DynamicSky_C::SkyLightControlAlpha' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightColorControlBase) == 0x000718, "Member 'ABP_DynamicSky_C::SkyLightColorControlBase' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightIntensityControlBase) == 0x000728, "Member 'ABP_DynamicSky_C::SkyLightIntensityControlBase' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonIntensityControlBase) == 0x00072C, "Member 'ABP_DynamicSky_C::SkyLightToonIntensityControlBase' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightToonSaturationControlBase) == 0x000730, "Member 'ABP_DynamicSky_C::SkyLightToonSaturationControlBase' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SkyLightControlInstigator) == 0x000738, "Member 'ABP_DynamicSky_C::SkyLightControlInstigator' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SunSize) == 0x000748, "Member 'ABP_DynamicSky_C::SunSize' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogFollowingPlayerHeight) == 0x00074C, "Member 'ABP_DynamicSky_C::FogFollowingPlayerHeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogFollowingPlayerHeightOffset) == 0x000750, "Member 'ABP_DynamicSky_C::FogFollowingPlayerHeightOffset' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogHeightDefault) == 0x000754, "Member 'ABP_DynamicSky_C::FogHeightDefault' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogControlParamDefault) == 0x000758, "Member 'ABP_DynamicSky_C::FogControlParamDefault' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, FogControlPreview) == 0x000798, "Member 'ABP_DynamicSky_C::FogControlPreview' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, HeightGradationColor) == 0x00079C, "Member 'ABP_DynamicSky_C::HeightGradationColor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, HeightGradationColorSkin) == 0x0007A0, "Member 'ABP_DynamicSky_C::HeightGradationColorSkin' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Near_PenumbraColor_curve) == 0x0007A8, "Member 'ABP_DynamicSky_C::SS_Near_PenumbraColor_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Near_PenumbraWeight_curve) == 0x0007B0, "Member 'ABP_DynamicSky_C::SS_Near_PenumbraWeight_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Near_PenumbraWidth_curve) == 0x0007B8, "Member 'ABP_DynamicSky_C::SS_Near_PenumbraWidth_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Far_PenumbraColor_curve) == 0x0007C0, "Member 'ABP_DynamicSky_C::SS_Far_PenumbraColor_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Far_PenumbraWeight_curve) == 0x0007C8, "Member 'ABP_DynamicSky_C::SS_Far_PenumbraWeight_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_Far_PenumbraWidth_curve) == 0x0007D0, "Member 'ABP_DynamicSky_C::SS_Far_PenumbraWidth_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayNearPenumbraColorHSV) == 0x0007D8, "Member 'ABP_DynamicSky_C::SS_DayNearPenumbraColorHSV' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayNearPenumbraWeight) == 0x0007E4, "Member 'ABP_DynamicSky_C::SS_DayNearPenumbraWeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayNearPenumbraWidth) == 0x0007E8, "Member 'ABP_DynamicSky_C::SS_DayNearPenumbraWidth' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayFarPenumbraColorHSV) == 0x0007EC, "Member 'ABP_DynamicSky_C::SS_DayFarPenumbraColorHSV' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayFarPenumbraWeight) == 0x0007F8, "Member 'ABP_DynamicSky_C::SS_DayFarPenumbraWeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_DayFarPenumbraWidth) == 0x0007FC, "Member 'ABP_DynamicSky_C::SS_DayFarPenumbraWidth' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightNearPenumbraColorHSV) == 0x000800, "Member 'ABP_DynamicSky_C::SS_NightNearPenumbraColorHSV' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightNearPenumbraWeight) == 0x00080C, "Member 'ABP_DynamicSky_C::SS_NightNearPenumbraWeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightNearPenumbraWidth) == 0x000810, "Member 'ABP_DynamicSky_C::SS_NightNearPenumbraWidth' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightFarPenumbraColorHSV) == 0x000814, "Member 'ABP_DynamicSky_C::SS_NightFarPenumbraColorHSV' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightFarPenumbraWeight) == 0x000820, "Member 'ABP_DynamicSky_C::SS_NightFarPenumbraWeight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SS_NightFarPenumbraWidth) == 0x000824, "Member 'ABP_DynamicSky_C::SS_NightFarPenumbraWidth' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimeZoneChange) == 0x000828, "Member 'ABP_DynamicSky_C::TimeZoneChange' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, PreSunLocation) == 0x00082C, "Member 'ABP_DynamicSky_C::PreSunLocation' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Pre_Noon_Waight) == 0x000838, "Member 'ABP_DynamicSky_C::Pre_Noon_Waight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Pre_Sunset_Waight) == 0x00083C, "Member 'ABP_DynamicSky_C::Pre_Sunset_Waight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Pre_Night_Waight) == 0x000840, "Member 'ABP_DynamicSky_C::Pre_Night_Waight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Pre_Sunrise_Waight) == 0x000844, "Member 'ABP_DynamicSky_C::Pre_Sunrise_Waight' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, LUTMaterial) == 0x000848, "Member 'ABP_DynamicSky_C::LUTMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DaytimeStart) == 0x000850, "Member 'ABP_DynamicSky_C::DaytimeStart' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DaytimeEnd) == 0x000854, "Member 'ABP_DynamicSky_C::DaytimeEnd' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, EveningStart) == 0x000858, "Member 'ABP_DynamicSky_C::EveningStart' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, EveningEnd) == 0x00085C, "Member 'ABP_DynamicSky_C::EveningEnd' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, NightStart) == 0x000860, "Member 'ABP_DynamicSky_C::NightStart' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, NightEnd) == 0x000864, "Member 'ABP_DynamicSky_C::NightEnd' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DaytimeLUT) == 0x000868, "Member 'ABP_DynamicSky_C::DaytimeLUT' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, EveningLUT) == 0x000870, "Member 'ABP_DynamicSky_C::EveningLUT' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, NightLUT) == 0x000878, "Member 'ABP_DynamicSky_C::NightLUT' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, LUT) == 0x000880, "Member 'ABP_DynamicSky_C::LUT' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SF_Color_Far_curve) == 0x000888, "Member 'ABP_DynamicSky_C::SF_Color_Far_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SF_Color_Near_curve) == 0x000890, "Member 'ABP_DynamicSky_C::SF_Color_Near_curve' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SF_ColorRange_Far) == 0x000898, "Member 'ABP_DynamicSky_C::SF_ColorRange_Far' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SF_ColorRange_Near) == 0x00089C, "Member 'ABP_DynamicSky_C::SF_ColorRange_Near' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimedPost) == 0x0008A0, "Member 'ABP_DynamicSky_C::TimedPost' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimedPostMaterial) == 0x0008A8, "Member 'ABP_DynamicSky_C::TimedPostMaterial' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimedPostMaterialDMI) == 0x0008B0, "Member 'ABP_DynamicSky_C::TimedPostMaterialDMI' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimedPostOnStart) == 0x0008B8, "Member 'ABP_DynamicSky_C::TimedPostOnStart' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimedPostOnEnd) == 0x0008BC, "Member 'ABP_DynamicSky_C::TimedPostOnEnd' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimedPostOffStart) == 0x0008C0, "Member 'ABP_DynamicSky_C::TimedPostOffStart' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, TimedPostOffEnd) == 0x0008C4, "Member 'ABP_DynamicSky_C::TimedPostOffEnd' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Climbable) == 0x0008C8, "Member 'ABP_DynamicSky_C::Climbable' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Floor) == 0x0008D8, "Member 'ABP_DynamicSky_C::Floor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Grass) == 0x0008E8, "Member 'ABP_DynamicSky_C::Grass' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Grass_D) == 0x0008F8, "Member 'ABP_DynamicSky_C::Grass_D' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Gravel) == 0x000908, "Member 'ABP_DynamicSky_C::Gravel' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Ice) == 0x000918, "Member 'ABP_DynamicSky_C::Ice' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Ivy) == 0x000928, "Member 'ABP_DynamicSky_C::Ivy' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Leaf) == 0x000938, "Member 'ABP_DynamicSky_C::Leaf' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Metal) == 0x000948, "Member 'ABP_DynamicSky_C::Metal' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Metal_Mesh) == 0x000958, "Member 'ABP_DynamicSky_C::Metal_Mesh' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Pebble) == 0x000968, "Member 'ABP_DynamicSky_C::Pebble' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sand) == 0x000978, "Member 'ABP_DynamicSky_C::Sand' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Snow) == 0x000988, "Member 'ABP_DynamicSky_C::Snow' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Snow_D) == 0x000998, "Member 'ABP_DynamicSky_C::Snow_D' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Soil) == 0x0009A8, "Member 'ABP_DynamicSky_C::Soil' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Stone) == 0x0009B8, "Member 'ABP_DynamicSky_C::Stone' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Tree) == 0x0009C8, "Member 'ABP_DynamicSky_C::Tree' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Water) == 0x0009D8, "Member 'ABP_DynamicSky_C::Water' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, WireUnattachable) == 0x0009E8, "Member 'ABP_DynamicSky_C::WireUnattachable' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Wood) == 0x0009F8, "Member 'ABP_DynamicSky_C::Wood' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Wood_Thin) == 0x000A08, "Member 'ABP_DynamicSky_C::Wood_Thin' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Sand_Wet) == 0x000A18, "Member 'ABP_DynamicSky_C::Sand_Wet' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Rooftile) == 0x000A28, "Member 'ABP_DynamicSky_C::Rooftile' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Cloth) == 0x000A38, "Member 'ABP_DynamicSky_C::Cloth' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Soil_Wet) == 0x000A48, "Member 'ABP_DynamicSky_C::Soil_Wet' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Carpet) == 0x000A58, "Member 'ABP_DynamicSky_C::Carpet' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Poison) == 0x000A68, "Member 'ABP_DynamicSky_C::Poison' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Paralyze) == 0x000A78, "Member 'ABP_DynamicSky_C::Paralyze' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, SAP) == 0x000A88, "Member 'ABP_DynamicSky_C::SAP' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Lava) == 0x000A98, "Member 'ABP_DynamicSky_C::Lava' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, Swamp) == 0x000AA8, "Member 'ABP_DynamicSky_C::Swamp' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, LightFixForDemo) == 0x000AB8, "Member 'ABP_DynamicSky_C::LightFixForDemo' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, UpdatedElapsedTime) == 0x000ABC, "Member 'ABP_DynamicSky_C::UpdatedElapsedTime' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DisableUpdateHeightGradationColorCount) == 0x000AC0, "Member 'ABP_DynamicSky_C::DisableUpdateHeightGradationColorCount' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, LightOverrideAlpha) == 0x000AC4, "Member 'ABP_DynamicSky_C::LightOverrideAlpha' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, LightOverrideColor) == 0x000AC8, "Member 'ABP_DynamicSky_C::LightOverrideColor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, LightOverrideIntensity) == 0x000AD8, "Member 'ABP_DynamicSky_C::LightOverrideIntensity' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, LightOverrideToonIntensityScale) == 0x000ADC, "Member 'ABP_DynamicSky_C::LightOverrideToonIntensityScale' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DefaultLightColor) == 0x000AE0, "Member 'ABP_DynamicSky_C::DefaultLightColor' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DefaultLightIntensity) == 0x000AF0, "Member 'ABP_DynamicSky_C::DefaultLightIntensity' has a wrong offset!");
static_assert(offsetof(ABP_DynamicSky_C, DefaultLightToonIntensityScale) == 0x000AF4, "Member 'ABP_DynamicSky_C::DefaultLightToonIntensityScale' has a wrong offset!");

}


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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightDefaultLightParam
	 */
	struct UBP_SkylightControlLibrary_C_SetSkyLightDefaultLightParam_Params
	{
	public:
		class ABP_DynamicSky_C*                                    DynamicSky;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.SetSkyLightControlLightParam
	 */
	struct UBP_SkylightControlLibrary_C_SetSkyLightControlLightParam_Params
	{
	public:
		class ABP_DynamicSky_C*                                    DynamicSky;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCurveLinearColor*                                   SkyLightColorOverride;                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCurveFloat*                                         SkyLightIntensityOverride;                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCurveFloat*                                         SkyLightToonIntensityOverride;                           // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCurveFloat*                                         SkyLightToonSaturationScaleOverride;                     // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightPreviewFlag
	 */
	struct UBP_SkylightControlLibrary_C_UpdateSkyLightPreviewFlag_Params
	{
	public:
		class ABP_DynamicSky_C*                                    DynamicSky;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       PreviewFlagChange;                                       // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_SkylightControlLibrary.BP_SkylightControlLibrary_C.UpdateSkyLightToonIntensityScaleDefault
	 */
	struct UBP_SkylightControlLibrary_C_UpdateSkyLightToonIntensityScaleDefault_Params
	{
	public:
		class ABP_DynamicSky_C*                                    DynamicSky;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             __WorldContext;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

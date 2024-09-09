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
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateDirectionalLightControlForEditor
	 */
	struct ABP_DynamicSky_C_UpdateDirectionalLightControlForEditor_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.SetDisableUpdateHeightGradationColor
	 */
	struct ABP_DynamicSky_C_SetDisableUpdateHeightGradationColor_Params
	{
	public:
		bool                                                       bInDisable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EFNH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.Should Update Height Gradation Color
	 */
	struct ABP_DynamicSky_C_ShouldUpdateHeightGradationColor_Params
	{
	public:
		bool                                                       bUpdate;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.InitDinamicMaterialInstance
	 */
	struct ABP_DynamicSky_C_InitDinamicMaterialInstance_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateOcean
	 */
	struct ABP_DynamicSky_C_UpdateOcean_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.GetDynamicSkyFogControlParam
	 */
	struct ABP_DynamicSky_C_GetDynamicSkyFogControlParam_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FFogControlParam                                    FogControlParam;                                         // 0x0004(0x0040)  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NRYO[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.Update LUT
	 */
	struct ABP_DynamicSky_C_UpdateLUT_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightSchedule
	 */
	struct ABP_DynamicSky_C_UpdateLightSchedule_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Override;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V0LV[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateDynamicSkyForEditor
	 */
	struct ABP_DynamicSky_C_UpdateDynamicSkyForEditor_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateRimLight
	 */
	struct ABP_DynamicSky_C_UpdateRimLight_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateDistantFog
	 */
	struct ABP_DynamicSky_C_UpdateDistantFog_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateStageShadow
	 */
	struct ABP_DynamicSky_C_UpdateStageShadow_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateLight
	 */
	struct ABP_DynamicSky_C_UpdateLight_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateFog
	 */
	struct ABP_DynamicSky_C_UpdateFog_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkyLight
	 */
	struct ABP_DynamicSky_C_UpdateSkyLight_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.SetMainLightContribution
	 */
	struct ABP_DynamicSky_C_SetMainLightContribution_Params
	{
	public:
		int32_t                                                    LightIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MainLightContribution;                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.GetLightNumInv
	 */
	struct ABP_DynamicSky_C_GetLightNumInv_Params
	{
	public:
		float                                                      LightNumInv;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.GetLightIntensity
	 */
	struct ABP_DynamicSky_C_GetLightIntensity_Params
	{
	public:
		int32_t                                                    LightIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LightIntensity;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.GetLightColor
	 */
	struct ABP_DynamicSky_C_GetLightColor_Params
	{
	public:
		int32_t                                                    LightIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        LightColor;                                              // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.GetLightVector
	 */
	struct ABP_DynamicSky_C_GetLightVector_Params
	{
	public:
		int32_t                                                    LightIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        LightVector;                                             // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateMPC
	 */
	struct ABP_DynamicSky_C_UpdateMPC_Params
	{
	public:
		float                                                      Intime;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UserConstructionScript
	 */
	struct ABP_DynamicSky_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.SkyLightControlTimeline__FinishedFunc
	 */
	struct ABP_DynamicSky_C_SkyLightControlTimeline__FinishedFunc_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.SkyLightControlTimeline__UpdateFunc
	 */
	struct ABP_DynamicSky_C_SkyLightControlTimeline__UpdateFunc_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.ReceiveTick
	 */
	struct ABP_DynamicSky_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.ReceiveBeginPlay
	 */
	struct ABP_DynamicSky_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.StartSkyLightControl
	 */
	struct ABP_DynamicSky_C_StartSkyLightControl_Params
	{
	public:
		float                                                      SkyLightColorTgt;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SkyLightIntensityTgt;                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SkyLightToonIntensityScale;                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SkyLightToonSaturationScale;                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      LerpTime;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateSkySphere
	 */
	struct ABP_DynamicSky_C_UpdateSkySphere_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.UpdateLightsImmidiate
	 */
	struct ABP_DynamicSky_C_UpdateLightsImmidiate_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.FixDynamicSkyForDemo
	 */
	struct ABP_DynamicSky_C_FixDynamicSkyForDemo_Params
	{	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.RemoveSkyLightControlVolume
	 */
	struct ABP_DynamicSky_C_RemoveSkyLightControlVolume_Params
	{
	public:
		class ABP_SkyLightControlVolume_C*                         Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.AddSkyLightControlVolume
	 */
	struct ABP_DynamicSky_C_AddSkyLightControlVolume_Params
	{
	public:
		class ABP_SkyLightControlVolume_C*                         Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DynamicSky.BP_DynamicSky_C.ExecuteUbergraph_BP_DynamicSky
	 */
	struct ABP_DynamicSky_C_ExecuteUbergraph_BP_DynamicSky_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

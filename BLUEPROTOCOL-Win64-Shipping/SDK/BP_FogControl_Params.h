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
	 * Function BP_FogControl.BP_FogControl_C.RemoveVolume
	 */
	struct ABP_FogControl_C_RemoveVolume_Params
	{
	public:
		class ABP_FogControlVolume_C*                              FogControlVolume;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_FogControlVolume_C*                              PrimeVolume;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControl.BP_FogControl_C.AddActivatedVolume
	 */
	struct ABP_FogControl_C_AddActivatedVolume_Params
	{
	public:
		class ABP_FogControlVolume_C*                              FogControlVolume;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControl.BP_FogControl_C.UpdateFogForDynamicSky
	 */
	struct ABP_FogControl_C_UpdateFogForDynamicSky_Params
	{
	public:
		float                                                      InTime;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2H55[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFogControlCurveParam                               CurveParam;                                              // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVolumetricFogControlParam                          VolumetricParam;                                         // 0x0058(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      HueShift;                                                // 0x0080(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      SaturationScale;                                         // 0x0084(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ColorValueScale;                                         // 0x0088(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControl.BP_FogControl_C.Lerp__FinishedFunc
	 */
	struct ABP_FogControl_C_Lerp__FinishedFunc_Params
	{	};

	/**
	 * Function BP_FogControl.BP_FogControl_C.Lerp__UpdateFunc
	 */
	struct ABP_FogControl_C_Lerp__UpdateFunc_Params
	{	};

	/**
	 * Function BP_FogControl.BP_FogControl_C.ReceiveBeginPlay
	 */
	struct ABP_FogControl_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FogControl.BP_FogControl_C.StartFogControl
	 */
	struct ABP_FogControl_C_StartFogControl_Params
	{
	public:
		class ABP_FogControlVolume_C*                              ControlVolume;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControl.BP_FogControl_C.SetCurrentParam
	 */
	struct ABP_FogControl_C_SetCurrentParam_Params
	{	};

	/**
	 * Function BP_FogControl.BP_FogControl_C.ExecuteUbergraph_BP_FogControl
	 */
	struct ABP_FogControl_C_ExecuteUbergraph_BP_FogControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

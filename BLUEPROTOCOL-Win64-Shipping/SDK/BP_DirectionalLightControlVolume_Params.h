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
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateEditorPreview
	 */
	struct ABP_DirectionalLightControlVolume_C_UpdateEditorPreview_Params
	{	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateBlendValue
	 */
	struct ABP_DirectionalLightControlVolume_C_UpdateBlendValue_Params
	{	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.CreateOutArea
	 */
	struct ABP_DirectionalLightControlVolume_C_CreateOutArea_Params
	{	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.GetNowTimeParam
	 */
	struct ABP_DirectionalLightControlVolume_C_GetNowTimeParam_Params
	{
	public:
		float                                                      TimeRate;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NowLightIntensity;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      NowToonIntensityScale;                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        NowLightColor;                                           // 0x000C(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UserConstructionScript
	 */
	struct ABP_DirectionalLightControlVolume_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveBeginPlay
	 */
	struct ABP_DirectionalLightControlVolume_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorBeginOverlap
	 */
	struct ABP_DirectionalLightControlVolume_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveTick
	 */
	struct ABP_DirectionalLightControlVolume_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ReceiveActorEndOverlap
	 */
	struct ABP_DirectionalLightControlVolume_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.UpdateLightParams
	 */
	struct ABP_DirectionalLightControlVolume_C_UpdateLightParams_Params
	{
	public:
		float                                                      Blend;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time;                                                    // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.VolumeDebugDraw
	 */
	struct ABP_DirectionalLightControlVolume_C_VolumeDebugDraw_Params
	{	};

	/**
	 * Function BP_DirectionalLightControlVolume.BP_DirectionalLightControlVolume_C.ExecuteUbergraph_BP_DirectionalLightControlVolume
	 */
	struct ABP_DirectionalLightControlVolume_C_ExecuteUbergraph_BP_DirectionalLightControlVolume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

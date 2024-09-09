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
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.SetDefaultFogParam
	 */
	struct ABP_FogControlVolume_C_SetDefaultFogParam_Params
	{	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.UpdateEditorPreviewFlag
	 */
	struct ABP_FogControlVolume_C_UpdateEditorPreviewFlag_Params
	{
	public:
		bool                                                       NowStatus;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       StatusChange;                                            // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.SetAllPrimCollisions
	 */
	struct ABP_FogControlVolume_C_SetAllPrimCollisions_Params
	{
	public:
		class FName                                                CollisionProfileName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.UserConstructionScript
	 */
	struct ABP_FogControlVolume_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveBeginPlay
	 */
	struct ABP_FogControlVolume_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveTick
	 */
	struct ABP_FogControlVolume_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorBeginOverlap
	 */
	struct ABP_FogControlVolume_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.ReceiveActorEndOverlap
	 */
	struct ABP_FogControlVolume_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.Fog Update In Editor
	 */
	struct ABP_FogControlVolume_C_FogUpdateInEditor_Params
	{
	public:
		class ABP_FogControlVolume_C*                              ControlActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.SetFog
	 */
	struct ABP_FogControlVolume_C_SetFog_Params
	{
	public:
		class ABP_FogControlVolume_C*                              FogControlVolume;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.SetFogToDefault
	 */
	struct ABP_FogControlVolume_C_SetFogToDefault_Params
	{	};

	/**
	 * Function BP_FogControlVolume.BP_FogControlVolume_C.ExecuteUbergraph_BP_FogControlVolume
	 */
	struct ABP_FogControlVolume_C_ExecuteUbergraph_BP_FogControlVolume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

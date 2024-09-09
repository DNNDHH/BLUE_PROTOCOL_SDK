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
	 * Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SetAllPrimCollisions
	 */
	struct ABP_SkyLightControlVolume_C_SetAllPrimCollisions_Params
	{
	public:
		class FName                                                CollisionProfileName;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.UserConstructionScript
	 */
	struct ABP_SkyLightControlVolume_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveBeginPlay
	 */
	struct ABP_SkyLightControlVolume_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveTick
	 */
	struct ABP_SkyLightControlVolume_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorBeginOverlap
	 */
	struct ABP_SkyLightControlVolume_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ReceiveActorEndOverlap
	 */
	struct ABP_SkyLightControlVolume_C_ReceiveActorEndOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.SkyLightControlEnable
	 */
	struct ABP_SkyLightControlVolume_C_SkyLightControlEnable_Params
	{	};

	/**
	 * Function BP_SkyLightControlVolume.BP_SkyLightControlVolume_C.ExecuteUbergraph_BP_SkyLightControlVolume
	 */
	struct ABP_SkyLightControlVolume_C_ExecuteUbergraph_BP_SkyLightControlVolume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

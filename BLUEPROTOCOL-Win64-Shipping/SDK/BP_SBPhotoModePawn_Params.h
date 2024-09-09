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
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ShowDebugLine
	 */
	struct ABP_SBPhotoModePawn_C_ShowDebugLine_Params
	{	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveBeginPlay
	 */
	struct ABP_SBPhotoModePawn_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveTick
	 */
	struct ABP_SBPhotoModePawn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceivePossessed
	 */
	struct ABP_SBPhotoModePawn_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ReceiveEndPlay
	 */
	struct ABP_SBPhotoModePawn_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.CreateWorldCameraActor
	 */
	struct ABP_SBPhotoModePawn_C_CreateWorldCameraActor_Params
	{	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.OnOverLimitDistance
	 */
	struct ABP_SBPhotoModePawn_C_OnOverLimitDistance_Params
	{	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ResetPosition
	 */
	struct ABP_SBPhotoModePawn_C_ResetPosition_Params
	{
	public:
		struct FVector                                             NewLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.BP_ResetCamera
	 */
	struct ABP_SBPhotoModePawn_C_BP_ResetCamera_Params
	{	};

	/**
	 * Function BP_SBPhotoModePawn.BP_SBPhotoModePawn_C.ExecuteUbergraph_BP_SBPhotoModePawn
	 */
	struct ABP_SBPhotoModePawn_C_ExecuteUbergraph_BP_SBPhotoModePawn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

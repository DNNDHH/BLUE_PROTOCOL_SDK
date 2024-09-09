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
	 * Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.InitializeAtFirstLoadingComplete
	 */
	struct UMeshClimbingGuideComponent_C_InitializeAtFirstLoadingComplete_Params
	{	};

	/**
	 * Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.RemoveWidgets
	 */
	struct UMeshClimbingGuideComponent_C_RemoveWidgets_Params
	{	};

	/**
	 * Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.UpdateIcon_Climbing
	 */
	struct UMeshClimbingGuideComponent_C_UpdateIcon_Climbing_Params
	{	};

	/**
	 * Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.UpdateIcon
	 */
	struct UMeshClimbingGuideComponent_C_UpdateIcon_Params
	{	};

	/**
	 * Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ReceiveBeginPlay
	 */
	struct UMeshClimbingGuideComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ReceiveTick
	 */
	struct UMeshClimbingGuideComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ReceiveEndPlay
	 */
	struct UMeshClimbingGuideComponent_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MeshClimbingGuideComponent.MeshClimbingGuideComponent_C.ExecuteUbergraph_MeshClimbingGuideComponent
	 */
	struct UMeshClimbingGuideComponent_C_ExecuteUbergraph_MeshClimbingGuideComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

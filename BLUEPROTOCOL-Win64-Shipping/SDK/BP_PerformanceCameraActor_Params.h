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
	 * Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.GetShowActorList
	 */
	struct ABP_PerformanceCameraActor_C_GetShowActorList_Params
	{
	public:
		TArray<class AActor*>                                      ShowList;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.CreateScreenWidget
	 */
	struct ABP_PerformanceCameraActor_C_CreateScreenWidget_Params
	{	};

	/**
	 * Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveTick
	 */
	struct ABP_PerformanceCameraActor_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ReceiveEndPlay
	 */
	struct ABP_PerformanceCameraActor_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.SetupSceneCapture
	 */
	struct ABP_PerformanceCameraActor_C_SetupSceneCapture_Params
	{	};

	/**
	 * Function BP_PerformanceCameraActor.BP_PerformanceCameraActor_C.ExecuteUbergraph_BP_PerformanceCameraActor
	 */
	struct ABP_PerformanceCameraActor_C_ExecuteUbergraph_BP_PerformanceCameraActor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetVisualHeight
	 */
	struct ABP_GatherPointTarget_C_SetVisualHeight_Params
	{
	public:
		struct FVector                                             ParticleHeight;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InteractCursorHeight;                                    // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.SetParticleSystemVisibleParam
	 */
	struct ABP_GatherPointTarget_C_SetParticleSystemVisibleParam_Params
	{	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.UserConstructionScript
	 */
	struct ABP_GatherPointTarget_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveBeginPlay
	 */
	struct ABP_GatherPointTarget_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.Appear
	 */
	struct ABP_GatherPointTarget_C_Appear_Params
	{
	public:
		bool                                                       NotSpawnEffect;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.Disappear
	 */
	struct ABP_GatherPointTarget_C_Disappear_Params
	{	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.InteractPoint
	 */
	struct ABP_GatherPointTarget_C_InteractPoint_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.PostInteractPoint
	 */
	struct ABP_GatherPointTarget_C_PostInteractPoint_Params
	{
	public:
		ESBGatherPointLotResult                                    Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DD3B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FGatherPointLotResult>                       LotResults;                                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.OnGatherPointEnableDelegate
	 */
	struct ABP_GatherPointTarget_C_OnGatherPointEnableDelegate_Params
	{
	public:
		bool                                                       IsElable;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.MotionEnd
	 */
	struct ABP_GatherPointTarget_C_MotionEnd_Params
	{	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.ReceiveTick
	 */
	struct ABP_GatherPointTarget_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GatherPointTarget.BP_GatherPointTarget_C.ExecuteUbergraph_BP_GatherPointTarget
	 */
	struct ABP_GatherPointTarget_C_ExecuteUbergraph_BP_GatherPointTarget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

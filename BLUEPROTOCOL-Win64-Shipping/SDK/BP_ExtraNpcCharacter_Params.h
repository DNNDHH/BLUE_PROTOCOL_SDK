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
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsInteractionDisable
	 */
	struct ABP_ExtraNpcCharacter_C_IsInteractionDisable_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_2DS1[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.CanBeTargetedNow
	 */
	struct ABP_ExtraNpcCharacter_C_CanBeTargetedNow_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.GetTargetLocation
	 */
	struct ABP_ExtraNpcCharacter_C_GetTargetLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.IsValidTargetFor
	 */
	struct ABP_ExtraNpcCharacter_C_IsValidTargetFor_Params
	{
	public:
		class AActor*                                              TargetingActor;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.RegisterWithManager
	 */
	struct ABP_ExtraNpcCharacter_C_RegisterWithManager_Params
	{	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.UnregisterFromManager
	 */
	struct ABP_ExtraNpcCharacter_C_UnregisterFromManager_Params
	{	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.OnInteraction
	 */
	struct ABP_ExtraNpcCharacter_C_OnInteraction_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.NotifyDeactivated
	 */
	struct ABP_ExtraNpcCharacter_C_NotifyDeactivated_Params
	{	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceivePostSpawnBySpawner
	 */
	struct ABP_ExtraNpcCharacter_C_ReceivePostSpawnBySpawner_Params
	{	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ReceiveTick
	 */
	struct ABP_ExtraNpcCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ExtraNpcCharacter.BP_ExtraNpcCharacter_C.ExecuteUbergraph_BP_ExtraNpcCharacter
	 */
	struct ABP_ExtraNpcCharacter_C_ExecuteUbergraph_BP_ExtraNpcCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GELX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

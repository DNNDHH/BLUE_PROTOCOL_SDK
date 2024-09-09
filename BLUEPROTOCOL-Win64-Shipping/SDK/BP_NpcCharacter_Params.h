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
	 * Function BP_NpcCharacter.BP_NpcCharacter_C.IsInteractionDisable
	 */
	struct ABP_NpcCharacter_C_IsInteractionDisable_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0T2K[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_NpcCharacter.BP_NpcCharacter_C.ReceiveTick
	 */
	struct ABP_NpcCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NpcCharacter.BP_NpcCharacter_C.NotifyDeactivated
	 */
	struct ABP_NpcCharacter_C_NotifyDeactivated_Params
	{	};

	/**
	 * Function BP_NpcCharacter.BP_NpcCharacter_C.ReceivePostSpawnBySpawner
	 */
	struct ABP_NpcCharacter_C_ReceivePostSpawnBySpawner_Params
	{	};

	/**
	 * Function BP_NpcCharacter.BP_NpcCharacter_C.OnInteraction
	 */
	struct ABP_NpcCharacter_C_OnInteraction_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NpcCharacter.BP_NpcCharacter_C.ExecuteUbergraph_BP_NpcCharacter
	 */
	struct ABP_NpcCharacter_C_ExecuteUbergraph_BP_NpcCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

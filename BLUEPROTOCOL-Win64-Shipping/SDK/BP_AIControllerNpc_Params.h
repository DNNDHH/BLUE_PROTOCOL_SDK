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
	 * Function BP_AIControllerNpc.BP_AIControllerNpc_C.StartTalk
	 */
	struct ABP_AIControllerNpc_C_StartTalk_Params
	{
	public:
		class AActor*                                              TalkTarget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIControllerNpc.BP_AIControllerNpc_C.RegisterUtilityOption
	 */
	struct ABP_AIControllerNpc_C_RegisterUtilityOption_Params
	{	};

	/**
	 * Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnInteraction
	 */
	struct ABP_AIControllerNpc_C_OnInteraction_Params
	{
	public:
		class AActor*                                              InOtherActor;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceiveUnPossess
	 */
	struct ABP_AIControllerNpc_C_ReceiveUnPossess_Params
	{
	public:
		class APawn*                                               UnpossessedPawn;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerDeactivate
	 */
	struct ABP_AIControllerNpc_C_OnOwnerDeactivate_Params
	{
	public:
		class ASBMobCharacter*                                     InMobCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIControllerNpc.BP_AIControllerNpc_C.OnOwnerActivate
	 */
	struct ABP_AIControllerNpc_C_OnOwnerActivate_Params
	{
	public:
		class ASBMobCharacter*                                     InMobCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIControllerNpc.BP_AIControllerNpc_C.ReceivePossess
	 */
	struct ABP_AIControllerNpc_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AIControllerNpc.BP_AIControllerNpc_C.ExecuteUbergraph_BP_AIControllerNpc
	 */
	struct ABP_AIControllerNpc_C_ExecuteUbergraph_BP_AIControllerNpc_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5TKV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

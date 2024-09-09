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
	 * Function BP_PartyPortal.BP_PartyPortal_C.GetWarpPlayers
	 */
	struct ABP_PartyPortal_C_GetWarpPlayers_Params
	{
	public:
		class ASBPlayerCharacter*                                  Owner;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class ASBPlayerCharacter*>                          WarpPlayers;                                             // 0x0008(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.ClearGoalActor
	 */
	struct ABP_PartyPortal_C_ClearGoalActor_Params
	{	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.SetGoalActor
	 */
	struct ABP_PartyPortal_C_SetGoalActor_Params
	{
	public:
		class ABP_InteractionWarpGoal_C*                           GoalTargetActor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.DebugPrint
	 */
	struct ABP_PartyPortal_C_DebugPrint_Params
	{
	public:
		class FString                                              inString;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.ReceiveBeginPlay
	 */
	struct ABP_PartyPortal_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.Teleport_FadeIn
	 */
	struct ABP_PartyPortal_C_Teleport_FadeIn_Params
	{
	public:
		class ABP_InteractionWarpGoal_C*                           WarpGoal;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ASBPlayerCharacter*                                  AccessPlayer;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.Interacted
	 */
	struct ABP_PartyPortal_C_Interacted_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            ViewRotation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.LocalWarpEnd
	 */
	struct ABP_PartyPortal_C_LocalWarpEnd_Params
	{	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.ExecuteUbergraph_BP_PartyPortal
	 */
	struct ABP_PartyPortal_C_ExecuteUbergraph_BP_PartyPortal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5B4K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpStart__DelegateSignature
	 */
	struct ABP_PartyPortal_C_PartyWarpStart__DelegateSignature_Params
	{
	public:
		class ASBPlayerCharacter*                                  WarpTarget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PartyPortal.BP_PartyPortal_C.PartyWarpEnd__DelegateSignature
	 */
	struct ABP_PartyPortal_C_PartyWarpEnd__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

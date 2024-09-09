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
	 * Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.SetMessage
	 */
	struct UBP_PlayerLevelStartSequence_CheckAchievement_C_SetMessage_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.GetDescription
	 */
	struct UBP_PlayerLevelStartSequence_CheckAchievement_C_GetDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.Start
	 */
	struct UBP_PlayerLevelStartSequence_CheckAchievement_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckAchievement.BP_PlayerLevelStartSequence_CheckAchievement_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement
	 */
	struct UBP_PlayerLevelStartSequence_CheckAchievement_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckAchievement_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3BCM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

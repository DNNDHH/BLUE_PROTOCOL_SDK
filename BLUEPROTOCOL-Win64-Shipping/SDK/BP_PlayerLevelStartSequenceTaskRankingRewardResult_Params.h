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
	 * Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.OnLoaded_581557924E9E2085AFE4E7A014C633C1
	 */
	struct UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C_OnLoaded_581557924E9E2085AFE4E7A014C633C1_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.CustomEvent_3
	 */
	struct UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_3_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.CustomEvent_1
	 */
	struct UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C_CustomEvent_1_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SCZB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBRankingRewardData>                        RankingRewardDataList;                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.PreStart
	 */
	struct UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C_PreStart_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskRankingRewardResult.BP_PlayerLevelStartSequenceTaskRankingRewardResult_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult
	 */
	struct UBP_PlayerLevelStartSequenceTaskRankingRewardResult_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRankingRewardResult_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YKLW[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

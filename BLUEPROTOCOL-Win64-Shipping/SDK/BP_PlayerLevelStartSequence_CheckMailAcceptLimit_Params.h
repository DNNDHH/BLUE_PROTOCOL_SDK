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
	 * Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.GetDescription
	 */
	struct UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_GetDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.FinishSequence
	 */
	struct UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_FinishSequence_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.OnSynced
	 */
	struct UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_OnSynced_Params
	{
	public:
		bool                                                       bIsSyncd;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.PreStart
	 */
	struct UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_PreStart_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckMailAcceptLimit.BP_PlayerLevelStartSequence_CheckMailAcceptLimit_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit
	 */
	struct UBP_PlayerLevelStartSequence_CheckMailAcceptLimit_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckMailAcceptLimit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MEO4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.SetMessage
	 */
	struct UBP_PlayerLevelStartSequence_CheckEndExpedition_C_SetMessage_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.GetDescription
	 */
	struct UBP_PlayerLevelStartSequence_CheckEndExpedition_C_GetDescription_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.OnLoaded_D99C7E054941241745424DB27741E175
	 */
	struct UBP_PlayerLevelStartSequence_CheckEndExpedition_C_OnLoaded_D99C7E054941241745424DB27741E175_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.FinishSequence
	 */
	struct UBP_PlayerLevelStartSequence_CheckEndExpedition_C_FinishSequence_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.CompleteWork
	 */
	struct UBP_PlayerLevelStartSequence_CheckEndExpedition_C_CompleteWork_Params
	{
	public:
		bool                                                       WasSuccessful;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4CNF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    IdCount;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.Start
	 */
	struct UBP_PlayerLevelStartSequence_CheckEndExpedition_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequence_CheckEndExpedition.BP_PlayerLevelStartSequence_CheckEndExpedition_C.ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition
	 */
	struct UBP_PlayerLevelStartSequence_CheckEndExpedition_C_ExecuteUbergraph_BP_PlayerLevelStartSequence_CheckEndExpedition_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6W0Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

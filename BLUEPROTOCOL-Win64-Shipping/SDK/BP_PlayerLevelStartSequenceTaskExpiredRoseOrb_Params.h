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
	 * Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCompletefunc
	 */
	struct UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCompletefunc_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KAST[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.GetDetailWork
	 */
	struct UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_GetDetailWork_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_A8UO[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ActiveCheckRequest
	 */
	struct UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ActiveCheckRequest_Params
	{
	public:
		bool                                                       IsFinish;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.カスタムイベント_1
	 */
	struct UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C__1_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_0O67[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    RetCode;                                                 // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FSBCryptoCurrency                                   Cryptocurrency;                                          // 0x0008(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskExpiredRoseOrb.BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb
	 */
	struct UBP_PlayerLevelStartSequenceTaskExpiredRoseOrb_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskExpiredRoseOrb_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Lock Loading Screen
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_LockLoadingScreen_Params
	{
	public:
		bool                                                       Lock;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_216K[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.OnLoaded_9C8A3A574D92EE195DA83A82A8920833
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_OnLoaded_9C8A3A574D92EE195DA83A82A8920833_Params
	{
	public:
		class UClass*                                              Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ActiveCompletefunc
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCompletefunc_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VF39[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.GetDetailWork
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_GetDetailWork_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_4H0A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ActiveCheckRequest
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_ActiveCheckRequest_Params
	{
	public:
		bool                                                       IsFinish;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.OnFinishEvent
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_OnFinishEvent_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.CheckCompleteFunc
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_CheckCompleteFunc_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_ZNA8[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ErrorCode;                                               // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.Finish
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_Finish_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskLoginBonus.BP_PlayerLevelStartSequenceTaskLoginBonus_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus
	 */
	struct UBP_PlayerLevelStartSequenceTaskLoginBonus_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskLoginBonus_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_352Y[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

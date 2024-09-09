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
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.IsCompleteAnimTimeRatio
	 */
	struct USS_NPC_WaitTurn_C_IsCompleteAnimTimeRatio_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCompleted;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetCompleteAnimTimeRatio
	 */
	struct USS_NPC_WaitTurn_C_SetCompleteAnimTimeRatio_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsCompleted;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeLength
	 */
	struct USS_NPC_WaitTurn_C_GetTempAnimTimeLength_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimTimeLength;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetTempAnimTimeRatio
	 */
	struct USS_NPC_WaitTurn_C_GetTempAnimTimeRatio_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimTimeRatio;                                           // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetTempAnimTimeLength
	 */
	struct USS_NPC_WaitTurn_C_SetTempAnimTimeLength_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimTimeLength;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.Set Temp Anim Time Ratio
	 */
	struct USS_NPC_WaitTurn_C_SetTempAnimTimeRatio_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      AnimTimeRatio;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.GetStartTime
	 */
	struct USS_NPC_WaitTurn_C_GetStartTime_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FDateTime                                           StartTime;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.SetStartTime
	 */
	struct USS_NPC_WaitTurn_C_SetStartTime_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.EndProcess
	 */
	struct USS_NPC_WaitTurn_C_EndProcess_Params
	{
	public:
		class ASBMobCharacter*                                     MobCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegateProcess
	 */
	struct USS_NPC_WaitTurn_C_TickDelegateProcess_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickProcess
	 */
	struct USS_NPC_WaitTurn_C_TickProcess_Params
	{
	public:
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.BeginProcess
	 */
	struct USS_NPC_WaitTurn_C_BeginProcess_Params
	{
	public:
		class ASBMobCharacter*                                     MobCharacer;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class USBNpcCharacterAnimInstance*                         AnimInstance;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveEndPlay
	 */
	struct USS_NPC_WaitTurn_C_ReceiveEndPlay_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.TickDelegate
	 */
	struct USS_NPC_WaitTurn_C_TickDelegate_Params
	{
	public:
		class ASBMobCharacter*                                     InMobCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveBeginPlay
	 */
	struct USS_NPC_WaitTurn_C_ReceiveBeginPlay_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UASAnimationSet*                                     AnimationSet;                                            // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ReceiveTick
	 */
	struct USS_NPC_WaitTurn_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P9WM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimInstance*                                       AnimInstance;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UASAnimationSet*                                     AnimationSet;                                            // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function SS_NPC_WaitTurn.SS_NPC_WaitTurn_C.ExecuteUbergraph_SS_NPC_WaitTurn
	 */
	struct USS_NPC_WaitTurn_C_ExecuteUbergraph_SS_NPC_WaitTurn_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NG47[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

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
	 * Function AITask_NpcTalk.AITask_NpcTalk_C.ResetPlayerInteractionActionDeltaTime
	 */
	struct UAITask_NpcTalk_C_ResetPlayerInteractionActionDeltaTime_Params
	{	};

	/**
	 * Function AITask_NpcTalk.AITask_NpcTalk_C.IsNpcIsQuestReceptionist
	 */
	struct UAITask_NpcTalk_C_IsNpcIsQuestReceptionist_Params
	{
	public:
		class FName                                                InProfileDatId;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Flag;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S511[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function AITask_NpcTalk.AITask_NpcTalk_C.CheckMobCharacterQuestPrecondition
	 */
	struct UAITask_NpcTalk_C_CheckMobCharacterQuestPrecondition_Params
	{
	public:
		class ASBMobCharacter*                                     InMobCharacter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Flag;                                                    // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AITask_NpcTalk.AITask_NpcTalk_C.SetNeedTurn
	 */
	struct UAITask_NpcTalk_C_SetNeedTurn_Params
	{	};

	/**
	 * Function AITask_NpcTalk.AITask_NpcTalk_C.OnEndScript
	 */
	struct UAITask_NpcTalk_C_OnEndScript_Params
	{
	public:
		class ASBScriptActor*                                      InScriptActor;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InScriptHandle;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AITask_NpcTalk.AITask_NpcTalk_C.TaskFinish
	 */
	struct UAITask_NpcTalk_C_TaskFinish_Params
	{
	public:
		class AAIController*                                       Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bInOwnerFinished;                                        // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AITask_NpcTalk.AITask_NpcTalk_C.TaskStart
	 */
	struct UAITask_NpcTalk_C_TaskStart_Params
	{
	public:
		class AAIController*                                       Controller;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class APawn*                                               ControlledPawn;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AITask_NpcTalk.AITask_NpcTalk_C.ExecuteUbergraph_AITask_NpcTalk
	 */
	struct UAITask_NpcTalk_C_ExecuteUbergraph_AITask_NpcTalk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8G1K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

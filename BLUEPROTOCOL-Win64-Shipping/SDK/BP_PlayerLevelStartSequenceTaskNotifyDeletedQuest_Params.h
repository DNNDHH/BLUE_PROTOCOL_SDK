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
	 * Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Make Quest Name Array
	 */
	struct UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_MakeQuestNameArray_Params
	{
	public:
		TArray<int32_t>                                            QuestList;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FText>                                        QuestNames;                                              // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest.BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest
	 */
	struct UBP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNotifyDeletedQuest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FTF4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

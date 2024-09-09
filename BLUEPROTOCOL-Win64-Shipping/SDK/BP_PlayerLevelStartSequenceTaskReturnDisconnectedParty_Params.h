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
	 * Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.GetStorageComponent
	 */
	struct UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_GetStorageComponent_Params
	{
	public:
		class USBPlayerStorageComponent*                           StorageComponent;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.RequestGetBagItems_API
	 */
	struct UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_RequestGetBagItems_API_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5DBK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.EndTask
	 */
	struct UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_EndTask_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.OnReturnDisconnectedPartyComplete_Event
	 */
	struct UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_OnReturnDisconnectedPartyComplete_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6AQK[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnPartyResultMessageIndex;                           // 0x0004(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty.BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty
	 */
	struct UBP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskReturnDisconnectedParty_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

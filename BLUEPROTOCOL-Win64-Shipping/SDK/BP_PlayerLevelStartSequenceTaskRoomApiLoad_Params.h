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
	 * Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.OnCompleteRoomList
	 */
	struct UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C_OnCompleteRoomList_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.OnCompleteRoomInfo
	 */
	struct UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C_OnCompleteRoomInfo_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskRoomApiLoad.BP_PlayerLevelStartSequenceTaskRoomApiLoad_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRoomApiLoad
	 */
	struct UBP_PlayerLevelStartSequenceTaskRoomApiLoad_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskRoomApiLoad_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

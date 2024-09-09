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
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedMountsToLogAndMessage
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedMountsToLogAndMessage_Params
	{
	public:
		TArray<struct FSBDeletedMountData>                         InDeletedMountDatas;                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutIsMessageShowed;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6O4B[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedImaginesToLogAndMessage
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedImaginesToLogAndMessage_Params
	{
	public:
		TArray<struct FSBDeletedImagineData>                       InDeletedImagineDatas;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutIsMessageShowed;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_UU8L[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDeletedCostumesToLogAndMessage
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDeletedCostumesToLogAndMessage_Params
	{
	public:
		TArray<struct FSBDeletedCostumeData>                       InDeletedCostumeDatas;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutIsMessageShowed;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YW2U[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.NotifyDecayedWeaponsToLogAndMessage
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_NotifyDecayedWeaponsToLogAndMessage_Params
	{
	public:
		TArray<struct FSBDecayedWeaponData>                        InDecayedWeaponDatas;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       OutIsMessageShowed;                                      // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_57W3[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.EndTask
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_EndTask_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.OnGetExpiredEquipmentDataEvent
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_OnGetExpiredEquipmentDataEvent_Params
	{
	public:
		struct FSBExpiredEquipmentData                             InExpiredEquipmentData;                                  // 0x0000(0x0130)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.OnTimeOut
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_OnTimeOut_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.SetTimeOut
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_SetTimeOut_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.PreStart
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_PreStart_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos.BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos
	 */
	struct UBP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskGetExpiredEquipmentInfos_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VH78[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

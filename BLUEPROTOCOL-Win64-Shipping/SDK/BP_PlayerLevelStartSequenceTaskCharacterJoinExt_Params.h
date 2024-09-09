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
	 * Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.RequestAPI_Internal
	 */
	struct UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_RequestAPI_Internal_Params
	{
	public:
		bool                                                       bResult;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XFCH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.TryRequestAPI
	 */
	struct UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_TryRequestAPI_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.OnAPICompleted
	 */
	struct UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_OnAPICompleted_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskCharacterJoinExt.BP_PlayerLevelStartSequenceTaskCharacterJoinExt_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt
	 */
	struct UBP_PlayerLevelStartSequenceTaskCharacterJoinExt_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskCharacterJoinExt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

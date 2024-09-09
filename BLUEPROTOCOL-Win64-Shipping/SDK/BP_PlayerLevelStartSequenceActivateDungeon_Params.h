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
	 * Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceActivateDungeon_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.GetActiveDungeons
	 */
	struct UBP_PlayerLevelStartSequenceActivateDungeon_C_GetActiveDungeons_Params
	{
	public:
		TArray<class FName>                                        OutArray;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.DialogEnd
	 */
	struct UBP_PlayerLevelStartSequenceActivateDungeon_C_DialogEnd_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivateDungeon.BP_PlayerLevelStartSequenceActivateDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon
	 */
	struct UBP_PlayerLevelStartSequenceActivateDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivateDungeon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

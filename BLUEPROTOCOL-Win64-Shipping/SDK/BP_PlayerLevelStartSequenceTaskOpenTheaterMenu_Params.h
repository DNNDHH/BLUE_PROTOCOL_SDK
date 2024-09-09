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
	 * Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.CheckOpenedLoginBonusWindow
	 */
	struct UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_CheckOpenedLoginBonusWindow_Params
	{
	public:
		bool                                                       IsOpened;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PC6Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceTaskOpenTheaterMenu.BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu
	 */
	struct UBP_PlayerLevelStartSequenceTaskOpenTheaterMenu_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskOpenTheaterMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

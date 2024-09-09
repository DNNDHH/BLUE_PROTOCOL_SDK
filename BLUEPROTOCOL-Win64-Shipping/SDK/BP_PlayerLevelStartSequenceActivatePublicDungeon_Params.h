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
	 * Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.NewDngID
	 */
	struct UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_NewDngID_Params
	{
	public:
		TArray<class FName>                                        ClientCheckList;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      ServerList;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class FString>                                      Return;                                                  // 0x0020(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.CheckActivatedPubDng
	 */
	struct UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_CheckActivatedPubDng_Params
	{
	public:
		TArray<class FName>                                        ActivatedPubDng;                                         // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.DialogClose
	 */
	struct UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_DialogClose_Params
	{
	public:
		EDialogResult                                              Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.GetActivatedPublicDungeons
	 */
	struct UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_GetActivatedPublicDungeons_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SFAY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class FString>                                      OutArray;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ShowRecursive
	 */
	struct UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_ShowRecursive_Params
	{	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.Start
	 */
	struct UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_Start_Params
	{
	public:
		class USBPlayerLevelStartSequenceComponent*                Owner;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.AddActivatedPublicDungeons
	 */
	struct UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_AddActivatedPublicDungeons_Params
	{
	public:
		int32_t                                                    RetCode;                                                 // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_PlayerLevelStartSequenceActivatePublicDungeon.BP_PlayerLevelStartSequenceActivatePublicDungeon_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon
	 */
	struct UBP_PlayerLevelStartSequenceActivatePublicDungeon_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceActivatePublicDungeon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

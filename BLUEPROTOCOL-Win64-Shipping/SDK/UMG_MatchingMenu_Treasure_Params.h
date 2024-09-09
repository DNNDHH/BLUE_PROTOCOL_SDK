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
	 * Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.GetTreasureList
	 */
	struct UUMG_MatchingMenu_Treasure_C_GetTreasureList_Params
	{
	public:
		int32_t                                                    TreasureId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5RY1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FSBMasterReward>                             TreasureList;                                            // 0x0008(0x0010)  (Parm, OutParm)
		TArray<int32_t>                                            LotIdList;                                               // 0x0018(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.Clear
	 */
	struct UUMG_MatchingMenu_Treasure_C_Clear_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.SetCaption
	 */
	struct UUMG_MatchingMenu_Treasure_C_SetCaption_Params
	{	};

	/**
	 * Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.Set Reward
	 */
	struct UUMG_MatchingMenu_Treasure_C_SetReward_Params
	{
	public:
		int32_t                                                    TreasureId;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QBUX[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.OnClickIconEvent
	 */
	struct UUMG_MatchingMenu_Treasure_C_OnClickIconEvent_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.ExecuteUbergraph_UMG_MatchingMenu_Treasure
	 */
	struct UUMG_MatchingMenu_Treasure_C_ExecuteUbergraph_UMG_MatchingMenu_Treasure_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KRJK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UMG_MatchingMenu_Treasure.UMG_MatchingMenu_Treasure_C.OnClickIcon__DelegateSignature
	 */
	struct UUMG_MatchingMenu_Treasure_C_OnClickIcon__DelegateSignature_Params
	{
	public:
		class UQuestRewardIcon_C*                                  Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

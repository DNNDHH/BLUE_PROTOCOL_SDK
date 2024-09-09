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
	 * Function RankingMenu_Player.RankingMenu_Player_C.GetShotID
	 */
	struct URankingMenu_Player_C_GetShotID_Params
	{
	public:
		class FString                                              ShortId;                                                 // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu_Player.RankingMenu_Player_C.SetEmptyMyRank
	 */
	struct URankingMenu_Player_C_SetEmptyMyRank_Params
	{	};

	/**
	 * Function RankingMenu_Player.RankingMenu_Player_C.Set My Rank Data
	 */
	struct URankingMenu_Player_C_SetMyRankData_Params
	{
	public:
		int32_t                                                    CategoryRank;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JXZQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRankingData                                        RankingData;                                             // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTimeAttack;                                            // 0x0090(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsOutOfRank;                                             // 0x0091(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       IsRankingAggregation;                                    // 0x0092(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu_Player.RankingMenu_Player_C.SetRankingData
	 */
	struct URankingMenu_Player_C_SetRankingData_Params
	{
	public:
		int32_t                                                    CategoryRank;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_86ZY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FRankingData                                        RankingData;                                             // 0x0008(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTimeAttack;                                            // 0x0090(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RankingMenu_Player.RankingMenu_Player_C.DownLoadFaceImage_Event
	 */
	struct URankingMenu_Player_C_DownLoadFaceImage_Event_Params
	{
	public:
		class FString                                              URL;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu_Player.RankingMenu_Player_C.BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct URankingMenu_Player_C_BndEvt__SBButton_C_59_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function RankingMenu_Player.RankingMenu_Player_C.OnClose_Event
	 */
	struct URankingMenu_Player_C_OnClose_Event_Params
	{	};

	/**
	 * Function RankingMenu_Player.RankingMenu_Player_C.OnIsGetPlayerProfileDetailMenuDataDelegate_Event
	 */
	struct URankingMenu_Player_C_OnIsGetPlayerProfileDetailMenuDataDelegate_Event_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IJCD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPlayerProfileMenuDetailData                        PlayerProfileDetailMenuData;                             // 0x0008(0x0468)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    RetCode;                                                 // 0x0470(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RankingMenu_Player.RankingMenu_Player_C.ExecuteUbergraph_RankingMenu_Player
	 */
	struct URankingMenu_Player_C_ExecuteUbergraph_RankingMenu_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TVFJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
